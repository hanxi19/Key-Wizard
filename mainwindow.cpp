#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "POJO/keydefine.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
KeyDefine key;
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_triggerBtn_clicked()
{
<<<<<<< Updated upstream
=======
    //ui->stackedWidget->setCurrentIndex(0);
    key.regord();
>>>>>>> Stashed changes

}

void MainWindow::on_addBtn_clicked()
{
<<<<<<< Updated upstream
=======
    //ui->stackedWidget->setCurrentIndex(1);
    key.end();
>>>>>>> Stashed changes

}

void MainWindow::on_setBtn_clicked()
{

}
