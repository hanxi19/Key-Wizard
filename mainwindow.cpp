#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "POJO/keydefine.h"
#include<QDebug>
#include<QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WinKeyHook* start=new WinKeyHook;
    start->SetKeyPressCallBack(std::bind(&MainWindow::keyPressEvent, this, std::placeholders::_1));

    //界面切换
    triger_widget *page1;
    add_widget *page2;
    set_widget *page3;

    page1=new triger_widget(this);
    page2=new add_widget(this);
    page3=new set_widget(this);

    ui->stackedWidget->insertWidget(0,page1);
    ui->stackedWidget->insertWidget(1,page2);
    ui->stackedWidget->insertWidget(2,page3);

    ui->stackedWidget->setCurrentIndex(0);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_triggerBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_addBtn_clicked()
{

     ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_setBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

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


