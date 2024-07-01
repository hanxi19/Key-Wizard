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
                     "QCheckBox::indicator:checked{background-color:red;}");

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

    for(int i=0;i<3;i++)                       //�м���¼�ƣ�ѭ����ʾ���Σ�������������3����
    {

    QHBoxLayout *layout=new QHBoxLayout;      //����һ��ˮƽ���֣���ʾÿһ�����ƺ��Ƿ�ѡ�ð�ť

    QLabel *label =new QLabel;
    label->setText("¼����1");               //¼���ļ�����Ȼ��������
    setlabel(label);
    layout->addWidget(label);               //��label��ӵ�ˮƽ������

    QCheckBox *checkbox =new QCheckBox("����",this);
    setcheckbox(checkbox);
    layout->addWidget(checkbox);            //��label��ӵ�ˮƽ������

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


