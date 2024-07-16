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
                     );

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
    QButtonGroup *group =new QButtonGroup;

    if(list!=nullptr)
    {
    for(size_t i=0;i<list->size();i++)                       //有几段录制，循环显示几次？待定？用数字3测试
    {

    QHBoxLayout *layout=new QHBoxLayout;      //创建一行水平布局：显示每一行名称和是否选用按钮
    QLabel *label =new QLabel;
    string temp=(*list)[i]->getName();
    label->setText(QString::fromStdString(temp));//显示文件名
    //label->setText("recording files 1");

    setlabel(label);
    layout->addWidget(label,1);               //将label添加到水平布局中
    layout->setSpacing(10);

    QCheckBox *checkbox =new QCheckBox(this);
    QPushButton *deletebutton = new QPushButton("delete",this);
    deletebutton->setFixedSize(70,50);

    myDefine* define=(*list)[i];
    if(typeid (*define)==typeid(KeyDefine)){
        KeyDefine* keyDefine=dynamic_cast<KeyDefine*>(define);
        id.push_back(keyDefine->getId());
    }
    else{
        MouseDefine* mouseDefine=dynamic_cast<MouseDefine*>(define);
        id.push_back(mouseDefine->getId());
    }

    setcheckbox(checkbox);
    layout->addItem(new QSpacerItem(400,50,QSizePolicy::Minimum,QSizePolicy::Fixed));
    layout->addWidget(checkbox);            //将label添加到水平布局中

    layout->addWidget(deletebutton);
    group->addButton(checkbox);
    //连接deletebutton的信号与槽
    connect(deletebutton,&QPushButton::clicked,this,&triger_widget::on_deleteBtn_clicked);

    layout->setContentsMargins(10,10,10,10);

    mainlayout->addLayout(layout);

    connect(checkbox,&QCheckBox::stateChanged,[=](int state){
       if(state == Qt::Checked)
       {
           qDebug()<<i;
           choice=i;
           //触发宏
           DefineTrigerThread::setDefine((*list)[choice]);
       }
    });

}
    group->setExclusive(true);
    window->setLayout(mainlayout);
    window->show();
}
}

//void triger_widget::on_deleteBtn_clicked()
//{
//    Applycation::deleteDefine(choice,(*list)[choice]);

//}

triger_widget::~triger_widget()
{
    delete ui;
}


