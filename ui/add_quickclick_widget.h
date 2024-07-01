#ifndef ADD_QUICKCLICK_WIDGET_H
#define ADD_QUICKCLICK_WIDGET_H

#include <QWidget>

namespace Ui {
class add_quickClick_widget;
}

class add_quickClick_widget : public QWidget
{
    Q_OBJECT

public:
    explicit add_quickClick_widget(QWidget *parent = nullptr);
    ~add_quickClick_widget();

private slots:
    //void on_buttonBtn_toggled(bool checked);

    //void on_saveBtn_clicked();
    //void on_intervalEdit_textEdited(const QString &arg1);

signals:
    //发送保存成功的信号
    void sendSaveSuccess();
private:
    Ui::add_quickClick_widget *ui;
};

#endif // ADD_QUICKCLICK_WIDGET_H
