#include "set_widget.h"
#include "ui_set_widget.h"
#include"applycation.h"
set_widget::set_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set_widget)
{
    ui->setupUi(this);
    ui->startlineEdit->setVisible(false);
    ui->endlineEdit_2->setVisible(false);//隐藏两个输入框

    ui->startButton->setToolTip(QStringLiteral("输入按键"));
    ui->endButton_2->setToolTip(QStringLiteral("输入按键")); //当鼠标放到按钮时显示该提示；
}

set_widget::~set_widget()
{
    delete ui;
}

void set_widget::on_startButton_clicked()
{
    ui->startlineEdit->setVisible(true);     //显示文本框
    //回车触发
    connect(ui->startlineEdit,&QLineEdit::returnPressed,this,[=](){qInfo()<<ui->startlineEdit->text();});
    QString startset=ui->startlineEdit->text();  //获取输入快捷键

    QChar StartKey=0;
    StartKey=startset[0];
    //int start=StartKey.unicode();
    Applycation::setStartKey(VK_F8);           //保存开始快捷键ASC码，写死为f8;
    Applycation::getStartKey();

}

void set_widget::on_endButton_2_clicked()
{
    ui->endlineEdit_2->setVisible(true);        //显示文本框

    connect(ui->endlineEdit_2,&QLineEdit::returnPressed,this,[=](){qInfo()<<ui->endlineEdit_2->text();});

    QString endset=ui->endlineEdit_2->text();   //获取结束快捷键

    QChar Endkey=0;
    Endkey=endset[0];
    //int end=Endkey.unicode();
    Applycation::setEndKey(VK_F10);            //保存结束快捷键ASC码，写死为f10；
    Applycation::getEndKey();


}
