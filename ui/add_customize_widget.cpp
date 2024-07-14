#include "add_customize_widget.h"
#include "ui_add_customize_widget.h"
#include "..\POJO\keydefine.h"
#include "save_success.h"
add_customize_widget::add_customize_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_customize_widget)
{
    ui->setupUi(this);
    m_custom = new customize_key_and_interval;
    m_key = new KeyDefine;

    //按下添加按钮，弹出customize_key_and_interval窗口

    //输入按键和时间间隔

    //按下完成键，若未完成，弹出”输入未完成“窗口

    //将按键和时间间隔保存到m_key中


    connect(ui->addBtn, &QPushButton::clicked, this, [=]()
    {
        m_custom->show();
    });
    connect(m_custom, SIGNAL(SignalSendKey(char)), this, SLOT(SlotGetKey(char)));
    connect(m_custom, SIGNAL(SignalSendInterval(QString)), this, SLOT(SlotGetInterval(QString)));


    //保存
    connect(ui->saveBtn, &QPushButton::clicked, this, [=]()
    {
        m_key->setName(ui->nameEdit->text().toStdString());
        m_key->save();
        emit add_customize_widget::sendSaveSuccess();
    });

    m_save = new save_success();
    connect(this, &add_customize_widget::sendSaveSuccess, m_save, [=]()
    {
       m_save->show();
    });
}

add_customize_widget::~add_customize_widget()
{
    delete ui;
}

void add_customize_widget::SlotGetKey(char c)
{

    m_key->setKeys(c);
}

void add_customize_widget::SlotGetInterval(QString str)
{
   m_key->setTimes(str.toInt());
}
