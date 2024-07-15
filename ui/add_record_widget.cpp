#include "add_record_widget.h"
#include "ui_add_record_widget.h"
#include "..\POJO\keydefine.h"

add_record_widget::add_record_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_record_widget)
{
    ui->setupUi(this);

    KeyDefine* m_key = new KeyDefine();
    connect(ui->startBtn, &QPushButton::clicked, this, [=]()
    {
        //录制
        //m_key->record();
    });
    connect(ui->endBtn, &QPushButton::clicked, this, [=]()
    {
        //结束录制
        //m_key->end();
    });
    connect(ui->saveBtn, &QPushButton::clicked, this, [=]()
    {
        m_key->setName(ui->nameEdit->text().toStdString());
        m_key->save();
        emit add_record_widget::sendSaveSuccess();
    });

    m_save = new save_success();
    connect(this, &add_record_widget::sendSaveSuccess, m_save, [=]()
    {
       m_save->show();
    });
}

add_record_widget::~add_record_widget()
{
    delete ui;
}



