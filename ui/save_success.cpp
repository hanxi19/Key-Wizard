#include "save_success.h"
#include "ui_save_success.h"

save_success::save_success(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::save_success)
{
    ui->setupUi(this);
}

save_success::~save_success()
{
    delete ui;
}

void save_success::on_exitBtn_clicked()
{
    this->close();
}
