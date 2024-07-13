#ifndef ADD_WIDGET_H
#define ADD_WIDGET_H

#include <QWidget>
#include "add_customize_widget.h"
#include "add_quickclick_widget.h"
#include "add_record_widget.h"

namespace Ui {
class add_widget;
}

class add_widget : public QWidget
{
    Q_OBJECT

public:
    explicit add_widget(QWidget *parent = nullptr);
    ~add_widget();

private slots:
    void on_recordBtn_clicked();

    void on_customizeBtn_clicked();

    void on_quickclickBtn_clicked();

private:
    Ui::add_widget *ui;
    add_quickClick_widget* m_quickclick;
    add_record_widget* m_record;
    add_customize_widget* m_customize;

};

#endif // ADD_WIDGET_H
