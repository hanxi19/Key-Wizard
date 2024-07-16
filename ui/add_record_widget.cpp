#include "add_record_widget.h"
#include "ui_add_record_widget.h"
#include "..\POJO\keydefine.h"
#include "..\POJO\kctable.h"
add_record_widget::add_record_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_record_widget)
{
    ui->setupUi(this);
    m_name = new no_name();
    keyboard = new soft_keyboard;
    m_show = new showKeyandInterval;
    m_rec = new notRecording;
    isRecording = false;

    KeyDefine* m_key = new KeyDefine();
//    ui->startBtn->setShortcut(QKeySequence(QLatin1String("F8")));
//    ui->endBtn->setShortcut(QKeySequence(QLatin1String("F10")));
    connect(ui->startBtn, &QPushButton::clicked, this, [=]()
    {
        //录制
        keyboard->show();
        isRecording = true;
        m_key->clear();
        m_key->regord();

    });
    connect(ui->endBtn, &QPushButton::clicked, this, [=]()
    {
        //结束录制
        keyboard->close();
        if(isRecording == true){
            QString str;
            for(int i = 0; i < m_key->keys.size(); i++){

                str.append(QString::fromStdString(checkKeyTable(m_key->keys[i])));
                str.append("\n");
            }
          emit sendKeyandInterval(str);
            m_show->show();
            m_key->end();
            isRecording = false;
        }
        else
        {
            m_rec->show();
        }
    });

    connect(this, SIGNAL(sendKeyandInterval(QString)), m_show, SLOT(getKeyandInterval(QString)));
    connect(ui->saveBtn, &QPushButton::clicked, this, [=]()
    {
        QString str = ui->nameEdit->text();
        if(str == nullptr){
            m_name->show();
        }else{
            m_key->setName(ui->nameEdit->text().toStdString());
            m_key->save();
            ui->nameEdit->clear();
            emit add_record_widget::sendSaveSuccess();
        }
    });

    m_save = new save_success();
    connect(this, &add_record_widget::sendSaveSuccess, m_save, [=]()
    {
       m_save->show();
    });
}

add_record_widget::~add_record_widget()
{
    delete ui;
}

