#include "customize_key_and_interval.h"
#include "ui_customize_key_and_interval.h"

customize_key_and_interval::customize_key_and_interval(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customize_key_and_interval)
{
    ui->setupUi(this);
    m_incomplete = new input_incomplete;
}

customize_key_and_interval::~customize_key_and_interval()
{
    delete ui;
}

void customize_key_and_interval::on_completeBtn_clicked()
{
    QString str1 = ui->buttonEdit->text();
    QString str2 = ui->intervalEdit->text();
    if(str1 == nullptr || str2 == nullptr){
        m_incomplete->show();
    }
    else{
        emit SignalSendKey(str1);
        emit SignalSendInterval(str2);
    }
}
