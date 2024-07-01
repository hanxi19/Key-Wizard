#include "triger_widget.h"
#include "ui_triger_widget.h"

triger_widget::triger_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::triger_widget)
{
    ui->setupUi(this);
}

triger_widget::~triger_widget()
{
    delete ui;
}

