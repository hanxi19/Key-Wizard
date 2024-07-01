#include "add_record_widget.h"
#include "ui_add_record_widget.h"
#include "..\POJO\keydefine.h"
add_record_widget::add_record_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_record_widget)
{
    ui->setupUi(this);

    KeyDefine* m_key = new KeyDefine();

    connect(ui->saveBtn, &QPushButton::clicked, this, [=]()
    {
        m_key->setName(ui->nameEdit->text().toStdString());
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

void add_record_widget::on_startBtn_clicked()
{
    //开始录制
}

void add_record_widget::on_endBtn_clicked()
{
    //结束录制
}

