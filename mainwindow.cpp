#include "mainwindow.h"
#include "ui_mainwindow.h"
<<<<<<< HEAD
#include"triger_widget.h"
#include"set_widget.h"
#include"add_widget.h"
=======
#include "POJO/keydefine.h"
>>>>>>> d3bdbe418be3acc94f4d9f304b7eb8d031f5d361

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
<<<<<<< HEAD
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
=======
    WinKeyHook* start=new WinKeyHook;
    start->SetKeyPressCallBack(std::bind(&MainWindow::keyPressEvent, this, std::placeholders::_1));
>>>>>>> d3bdbe418be3acc94f4d9f304b7eb8d031f5d361
}

MainWindow::~MainWindow()
{
    delete ui;
}

<<<<<<< HEAD

void MainWindow::on_triggerBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
=======
void MainWindow::on_triggerBtn_clicked()
{

>>>>>>> d3bdbe418be3acc94f4d9f304b7eb8d031f5d361
}

void MainWindow::on_addBtn_clicked()
{
<<<<<<< HEAD
    ui->stackedWidget->setCurrentIndex(1);
=======

>>>>>>> d3bdbe418be3acc94f4d9f304b7eb8d031f5d361
}

void MainWindow::on_setBtn_clicked()
{
<<<<<<< HEAD
    ui->stackedWidget->setCurrentIndex(2);
}
=======

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


>>>>>>> d3bdbe418be3acc94f4d9f304b7eb8d031f5d361
