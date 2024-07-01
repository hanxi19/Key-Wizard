#include "customize_key_and_interval.h"
#include "ui_customize_key_and_interval.h"

customize_key_and_interval::customize_key_and_interval(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customize_key_and_interval)
{
    ui->setupUi(this);
}

customize_key_and_interval::~customize_key_and_interval()
{
    delete ui;
}
