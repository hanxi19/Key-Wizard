#include "customize_key_and_interval.h"
#include "ui_customize_key_and_interval.h"
#include "keyecholineedit.h"
#include <conio.h>


customize_key_and_interval::customize_key_and_interval(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customize_key_and_interval),
    buttonEdit(new KeyEchoLineEdit(this))
{
    ui->setupUi(this);

    m_incomplete = new input_incomplete;
    QWidget *centralWidget = new QWidget(this); //需要去掉？
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // 创建 KeyEchoLineEdit 并设置为与 QLineEdit 相同的位置和大小
    buttonEdit->setPlaceholderText("Press any key...");
    buttonEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    layout->addWidget(buttonEdit);
    buttonEdit->setGeometry(80, 40, 171, 31);

}

customize_key_and_interval::~customize_key_and_interval()
{
    delete ui;
}

void customize_key_and_interval::on_completeBtn_clicked()
{
    char str1 = buttonEdit-> getAsciiCode();
    QString str2 = ui->intervalEdit->text();
    if(str1 == 0 || str2 == nullptr){
        m_incomplete->show();
    }
    else{
        emit SignalSendKey(str1);
        emit SignalSendInterval(str2);
    }
}
