#include "triger_widget.h"
#include "ui_triger_widget.h"

//checkbox��ʽ�ı亯��
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
//�ı�label����ʹ�С����
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

    //
    QScrollArea* scrollArea = new QScrollArea(this);
    //
    QWidget *window =new QWidget(this);        //����һ������
    QVBoxLayout *mainlayout =new QVBoxLayout(window);  //������ֱ����  //����window
    QButtonGroup *group =new QButtonGroup;



    if(list!=nullptr)
    {
    for(size_t i=0;i<list->size();i++)                       //�м���¼�ƣ�ѭ����ʾ���Σ�������������3����
    {

    QHBoxLayout *layout=new QHBoxLayout;      //����һ��ˮƽ���֣���ʾÿһ�����ƺ��Ƿ�ѡ�ð�ť
    QLabel *label =new QLabel;
    string temp=(*list)[i]->getName();
    label->setText(QString::fromStdString(temp));//��ʾ�ļ���
    //label->setText("recording files 1");

    setlabel(label);
    layout->addWidget(label,1);               //��label���ӵ�ˮƽ������
    layout->setSpacing(10);

    QCheckBox *checkbox =new QCheckBox(this);
//    QPushButton *deletebutton = new QPushButton("delete",this);
    myButton* deletebutton=new myButton(i,"delete",this);
    deletebutton->setText("delete");
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
    layout->addItem(new QSpacerItem(300,50,QSizePolicy::Minimum,QSizePolicy::Fixed));
    layout->addWidget(checkbox);            //��label���ӵ�ˮƽ������

    layout->addWidget(deletebutton);
    group->addButton(checkbox);
    //����deletebutton���ź����
    connect(deletebutton,&QPushButton::clicked,deletebutton,[=]{on_deleteBtn_clicked(deletebutton->getIndex());});

    layout->setContentsMargins(10,10,10,10);

    mainlayout->addLayout(layout);

    connect(checkbox,&QCheckBox::stateChanged,[=](int state){
       if(state == Qt::Checked)
       {
           qDebug()<<i;
           choice=i;
           //������
           DefineTrigerThread::setDefine((*list)[choice]);
       }
    });

}
    group->setExclusive(true);
    //
    scrollArea->setWidget(window);
    scrollArea->setWidgetResizable(true);
    scrollArea->resize(700,400);
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


