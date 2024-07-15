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
    QString keyText;
    //忽略单个修饰键
    if (event->modifiers() != Qt::NoModifier && key == 0) {
        return;
    }
    //不需要组合键
    Qt::KeyboardModifiers modifiers = event->modifiers();
    if(modifiers == Qt::NoModifier){
        keyText = QKeySequence(key).toString(QKeySequence::PortableText);
    }else{

     keyText = QKeySequence(modifiers).toString(QKeySequence::PortableText);
    }
    //keyText = QKeySequence(key).toString(QKeySequence::PortableText);
    setText(keyText);
    //将按键转换为ascii码并保存
    if (key < 128) {
           asciiCode = static_cast<char>(key);
       } else {
           asciiCode = 0;
       }
    // 将QlineEdit中的文本转换为ascii码


    QLineEdit::keyPressEvent(event);
}

void KeyEchoLineEdit::keyReleaseEvent(QKeyEvent *event) {
    QLineEdit::keyReleaseEvent(event);
}

char KeyEchoLineEdit::getAsciiCode() const {
    return asciiCode;
}
