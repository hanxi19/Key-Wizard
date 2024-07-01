#include "set_widget.h"
#include "ui_set_widget.h"

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
    QString startset=ui->startlineEdit->text();  //获取输入快捷键
    QChar getStartKey=0;
    getStartKey=startset[0];                 //getStartKey存开始快捷键；
}

void set_widget::on_endButton_2_clicked()
{
    ui->endlineEdit_2->setVisible(true);        //显示文本框
    QString endset=ui->endlineEdit_2->text();   //获取结束快捷键

    QChar getEndKey=0;
    getEndKey=endset[0];                     //getEndKey存结束快捷键
}
