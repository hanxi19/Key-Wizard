#include "add_customize_widget.h"
#include "ui_add_customize_widget.h"
#include "..\POJO\keydefine.h"
#include "save_success.h"
add_customize_widget::add_customize_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_customize_widget)
{
    ui->setupUi(this);

    KeyDefine* m_key = new KeyDefine();
    //未完成：
    //按下添加按钮，弹出customize_key_and_interval窗口

    //输入按键和时间间隔

    //按下完成键，若未完成，弹出”输入未完成“窗口

    //将按键和时间间隔保存到m_key中

    //需要一个循环？




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
