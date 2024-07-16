#ifndef SET_WIDGET_H
#define SET_WIDGET_H

#include <QWidget>
#include<QMessageBox>
#include "keylistenerbutton.h"

namespace Ui {
class set_widget;
}

class set_widget : public QWidget
{
    Q_OBJECT

public:
    explicit set_widget(QWidget *parent = nullptr);
    ~set_widget();
    int translateKeyCode(int key);

private slots:

//    void on_startButton_clicked();

//    void on_endButton_2_clicked();

private:
    Ui::set_widget *ui;
    KeyListenerButton* startBtn;
    KeyListenerButton* endBtn;
};

#endif // SET_WIDGET_H
