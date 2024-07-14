#include "keyecholineedit.h"
#include <QKeyEvent>
#include <QVBoxLayout>

KeyEchoLineEdit::KeyEchoLineEdit(QWidget *parent)
    : QLineEdit(parent), label(new QLabel(this)) {
    setPlaceholderText("Press any key...");
}

void KeyEchoLineEdit::keyPressEvent(QKeyEvent *event) {
    //记录按下的按键
    int key = event->key();
    //忽略单个修饰键
    if (event->modifiers() != Qt::NoModifier && key == 0) {
        return;
    }
    //将按键转换为ascii码并保存
    if (key < 128) {
           asciiCode = static_cast<char>(key);
       } else {
           asciiCode = 0;
       }
    // 将QlineEdit中的文本转换为ascii码
    setText(QString::number(key));
    label->setText(QString::number(key)); // Display in QLabel for better visibility（回显？）

    QLineEdit::keyPressEvent(event);
}

void KeyEchoLineEdit::keyReleaseEvent(QKeyEvent *event) {
    QLineEdit::keyReleaseEvent(event);
}

char KeyEchoLineEdit::getAsciiCode() const {
    return asciiCode;
}
