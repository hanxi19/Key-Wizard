#include "showkeyandinterval.h"
#include "ui_showkeyandinterval.h"

showKeyandInterval::showKeyandInterval(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showKeyandInterval)
{
    ui->setupUi(this);
}

showKeyandInterval::~showKeyandInterval()
{
    delete ui;
}

void showKeyandInterval::on_completeButton_clicked()
{
    this->close();
}

void showKeyandInterval::getKeyandInterval(QString str)
{
   ui->keyEdit->setText(str);
}
