#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "POJO/keydefine.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WinKeyHook* start=new WinKeyHook;
    start->SetKeyPressCallBack(std::bind(&MainWindow::keyPressEvent, this, std::placeholders::_1));
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

void MainWindow::on_setBtn_clicked()
{

}

void MainWindow::keyPressEvent(int keyCode)
{
    if(keyCode==Applycation::getStartKey())
    {
        DefineTrigerThread::setFlag(true);
        qDebug()<<"start shortcut pressed";
    }else if(keyCode==Applycation::getEndKey()){
        DefineTrigerThread::setFlag(false);
        qDebug()<<"end shortcut pressed";
    }
}


