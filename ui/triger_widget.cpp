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
                     "QCheckBox::indicator:checked{background-color:blue;}");

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
    vector<myDefine*>* list=Applycation::getDefineList();

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
    layout->addWidget(label);               //将label添加到水平布局中

    QCheckBox *checkbox =new QCheckBox(this);
    setcheckbox(checkbox);
    layout->addWidget(checkbox);            //将label添加到水平布局中

    group->addButton(checkbox);

    layout->setSpacing(400);
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


triger_widget::~triger_widget()
{
    delete ui;
}


