#include "add_widget.h"
#include "ui_add_widget.h"

add_widget::add_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_widget)
{
    ui->setupUi(this);

//    auto f = [this](){
//        //添加一个写有保存成功的小窗？
//        //关掉连点器窗口，回到主窗口
//        m_quickclick->hide();
//        show();

    add_record_widget *page01;
    add_customize_widget *page02;
    add_quickClick_widget *page03;
    page01=new add_record_widget;
    page02=new add_customize_widget;
    page03=new add_quickClick_widget;

    ui->stackedWidget->insertWidget(0,page01);
    ui->stackedWidget->insertWidget(1,page02);
    ui->stackedWidget->insertWidget(2,page03);

    ui->stackedWidget->setCurrentIndex(0);
    };
//    connect(m_quickclick, &add_quickClick_widget::sendSaveSuccess, this, f);
//}

add_widget::~add_widget()
{
    delete ui;
}

void add_widget::on_recordBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void add_widget::on_customizeBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void add_widget::on_quickclickBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
