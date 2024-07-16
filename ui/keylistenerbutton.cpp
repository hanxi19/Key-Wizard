#include "keylistenerbutton.h"
#include <QApplication>
#include <QKeySequence>

KeyListenerButton::KeyListenerButton(const QString &text, QWidget *parent)
    : QPushButton(text, parent), listening(false) {
    connect(this, &QPushButton::clicked, this, &KeyListenerButton::startListening);
}

void KeyListenerButton::startListening() {
    listening = true;
    setText("监听中...");
    setFocus();
}

void KeyListenerButton::keyPressEvent(QKeyEvent *event) {
    if (listening) {
            QString keyText = QKeySequence(event->key() + event->modifiers()).toString(QKeySequence::PortableText);
            asciiCode = event->text().isEmpty() ? 0 : event->text().at(0).toLatin1();
            if (asciiCode >= 97 && asciiCode <= 122) {
                        asciiCode -= 32;
                    }
            setText(keyText);

            listening = false;
        } else {
            asciiCode = 0;
            QPushButton::keyPressEvent(event);
        }
}

void KeyListenerButton::focusOutEvent(QFocusEvent *event) {
    if (listening) {
        setText("按下以开始监听");
        listening = false;
    }
    QPushButton::focusOutEvent(event);
}

char KeyListenerButton::getAsciiCode() const {
    return asciiCode;
}
