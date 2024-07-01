#include "input_incomplete.h"
#include "ui_input_incomplete.h"

input_incomplete::input_incomplete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::input_incomplete)
{
    ui->setupUi(this);
}

input_incomplete::~input_incomplete()
{
    delete ui;
}

void input_incomplete::on_exitBtn_clicked()
{
    this->close();
}
