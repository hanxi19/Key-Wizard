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
                     "QCheckBox::indicator:checked{background-color:blue;}");

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

    QWidget *window =new QWidget(this);        //����һ������
    QVBoxLayout *mainlayout =new QVBoxLayout;  //������ֱ����
    QButtonGroup *group =new QButtonGroup;
    vector<myDefine*>* list=Applycation::getDefineList();

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
    layout->addWidget(label);               //��label��ӵ�ˮƽ������

    QCheckBox *checkbox =new QCheckBox(this);
    setcheckbox(checkbox);
    layout->addWidget(checkbox);            //��label��ӵ�ˮƽ������

    group->addButton(checkbox);

    layout->setSpacing(400);
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
    window->setLayout(mainlayout);
    window->show();
}
}


triger_widget::~triger_widget()
{
    delete ui;
}


