#ifndef ADD_RECORD_WIDGET_H
#define ADD_RECORD_WIDGET_H

#include <QWidget>
#include "save_success.h"
#include "no_name.h"
#include "soft_keyboard.h"
#include "showkeyandinterval.h"
#include "notrecording.h"

namespace Ui {
class add_record_widget;
}

class add_record_widget : public QWidget
{
    Q_OBJECT

public:
    explicit add_record_widget(QWidget *parent = nullptr);
    ~add_record_widget();



signals:
    //发送保存成功的信号
    void sendSaveSuccess();
private:

    Ui::add_record_widget *ui;
    save_success* m_save ;
    no_name* m_name;
    soft_keyboard* keyboard;
    showKeyandInterval* m_show;
    bool isRecording;
    notRecording* m_rec;

signals:
    void sendKeyandInterval(QString);

};

#endif // ADD_RECORD_WIDGET_H
