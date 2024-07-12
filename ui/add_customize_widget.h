#ifndef ADD_CUSTOMIZE_WIDGET_H
#define ADD_CUSTOMIZE_WIDGET_H

#include <QWidget>
#include "save_success.h"
#include "input_incomplete.h"
#include "customize_key_and_interval.h"
#include "..\POJO\keydefine.h"

namespace Ui {
class add_customize_widget;
}

class add_customize_widget : public QWidget
{
    Q_OBJECT

public:
    explicit add_customize_widget(QWidget *parent = nullptr);
    ~add_customize_widget();

signals:
    //发送保存成功的信号
    void sendSaveSuccess();

private:
    Ui::add_customize_widget *ui;
    save_success* m_save ;
    input_incomplete* m_input_incomplete;
    customize_key_and_interval* m_custom;
    KeyDefine* m_key;

private slots:
    void SlotGetKey(QString str);
    void SlotGetInterval(QString str);
};

#endif // ADD_CUSTOMIZE_WIDGET_H
