#ifndef ADD_RECORD_WIDGET_H
#define ADD_RECORD_WIDGET_H

#include <QWidget>
#include "save_success.h"

namespace Ui {
class add_record_widget;
}

class add_record_widget : public QWidget
{
    Q_OBJECT

public:
    explicit add_record_widget(QWidget *parent = nullptr);
    ~add_record_widget();

private slots:
    void on_startBtn_clicked();

    void on_endBtn_clicked();

    //void on_saveBtn_clicked();

signals:
    //发送保存成功的信号
    void sendSaveSuccess();
private:
    Ui::add_record_widget *ui;
    save_success* m_save ;
};

#endif // ADD_RECORD_WIDGET_H
