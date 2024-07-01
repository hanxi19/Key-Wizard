#include "add_quickclick_widget.h"
#include "ui_add_quickclick_widget.h"
#include <QMenu>
#include <QIntValidator>
#include "..\POJO\mousedefine.h"
add_quickClick_widget::add_quickClick_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_quickClick_widget)
{
    ui->setupUi(this);
    MouseDefine* m_mouse = new MouseDefine;
    //选择按键类型

    QMenu* menu = new QMenu;
    QAction* act1 = menu->addAction("左键");
    QAction* act2 = menu->addAction("右键");
    QAction* act3 = menu->addAction("中键");
    ui->buttonBtn->setMenu(menu);
    ui->buttonBtn->setPopupMode(QToolButton::InstantPopup);


    //设置时间间隔
    //限制只能输入整形数字
    ui->intervalEdit->setValidator(new QIntValidator(ui->intervalEdit));
    connect(act1, &QAction::triggered, this, [=]()
    {
        m_mouse->setKeyType(0);
    });

    connect(act2, &QAction::triggered, this, [=]()
    {
        m_mouse->setKeyType(1);
    });

    connect(act3, &QAction::triggered, this, [=]()
    {
        m_mouse->setKeyType(2);
    });

    connect(ui->saveBtn, &QPushButton::clicked, this, [=]()
    {
        m_mouse->setTime(ui->intervalEdit->text().toInt());
        m_mouse->setName(ui->nameEdit->text().toStdString());

        emit add_quickClick_widget::sendSaveSuccess();
    });

    //产生的m_mouse鼠标宏还未保存到数据库

    m_save = new save_success();
    connect(this, &add_quickClick_widget::sendSaveSuccess, m_save, [=]()
    {
       m_save->show();
    });
}

add_quickClick_widget::~add_quickClick_widget()
{
    delete ui;
}


