#include "triger_widget.h"
#include "ui_triger_widget.h"

//checkbox格式改变函数
void setcheckbox(QCheckBox *c)
{
    QFont font;
    font.setPointSize(14);
    font.setStyle(QFont::StyleItalic);
    font.setFamily("Arial");
    c->setFont(font);
    c->setStyleSheet("QCheckBox::indicator{width:40px;height:40px}"
                     "QCheckBox::indicator:checked{background-color:red;}");

}
//改变label字体和大小函数
void setlabel(QLabel *label)
{
    QFont font;
    font.setPointSize(14);
    font.setStyle(QFont::StyleItalic);
    font.setFamily("Arial");
    label->setFont(font);
}

triger_widget::triger_widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::triger_widget)
{
    ui->setupUi(this);

    QWidget *window =new QWidget(this);        //定义一个界面
    QVBoxLayout *mainlayout =new QVBoxLayout;  //创建垂直布局

    for(int i=0;i<3;i++)                       //有几段录制，循环显示几次？待定？用数字3测试
    {

    QHBoxLayout *layout=new QHBoxLayout;      //创建一行水平布局：显示每一行名称和是否选用按钮

    QLabel *label =new QLabel;
    label->setText("录制名1");               //录制文件名仍然待定？？
    setlabel(label);
    layout->addWidget(label);               //将label添加到水平布局中

    QCheckBox *checkbox =new QCheckBox("禁用",this);
    setcheckbox(checkbox);
    layout->addWidget(checkbox);            //将label添加到水平布局中

    layout->setSpacing(400);
    layout->setContentsMargins(10,10,10,10);

    mainlayout->addLayout(layout);

}
    window->setLayout(mainlayout);
    window->show();

}


triger_widget::~triger_widget()
{
    delete ui;
}


