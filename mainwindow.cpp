#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "POJO/keydefine.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_triggerBtn_clicked()
{

}

void MainWindow::on_addBtn_clicked()
{

}
