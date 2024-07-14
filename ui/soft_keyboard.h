#ifndef SOFT_KEYBOARD_H
#define SOFT_KEYBOARD_H

#include <QWidget>
#include <QMap>
#include <QPushButton>
#include <QGridLayout>
#include <QKeyEvent>
#include <QKeySequence>

namespace Ui {
class soft_keyboard;
}

class soft_keyboard : public QWidget
{
    Q_OBJECT

public:
    explicit soft_keyboard(QWidget *parent = nullptr);
    ~soft_keyboard();
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    Ui::soft_keyboard *ui;
    QMap<QString, QPushButton*> m_buttonMap;
};

#endif // SOFT_KEYBOARD_H
