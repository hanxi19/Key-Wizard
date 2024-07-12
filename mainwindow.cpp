#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"triger_widget.h"
#include"set_widget.h"
#include"add_widget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
