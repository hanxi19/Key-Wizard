#include "no_name.h"
#include "ui_no_name.h"

no_name::no_name(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::no_name)
{
    ui->setupUi(this);
}

no_name::~no_name()
{
    delete ui;
}

void no_name::on_exitBtn_clicked()
{
    this->close();
}
