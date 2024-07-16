#include "notrecording.h"
#include "ui_notrecording.h"

notRecording::notRecording(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notRecording)
{
    ui->setupUi(this);
}

notRecording::~notRecording()
{
    delete ui;
}

void notRecording::on_pushButton_clicked()
{
    this->close();
}
