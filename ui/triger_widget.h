#ifndef TRIGER_WIDGET_H
#define TRIGER_WIDGET_H

#include <QWidget>

namespace Ui {
class triger_widget;
}

class triger_widget : public QWidget
{
    Q_OBJECT

public:
    explicit triger_widget(QWidget *parent = nullptr);
    ~triger_widget();

private:
    Ui::triger_widget *ui;

private:

};

#endif // TRIGER_WIDGET_H
