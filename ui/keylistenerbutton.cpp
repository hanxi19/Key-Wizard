#include "keylistenerbutton.h"
#include <QApplication>
#include <QKeySequence>
#include <windows.h>
#include <winuser.h>
#include <translate.h>

KeyListenerButton::KeyListenerButton(const QString &text, QWidget *parent)
    : QPushButton(text, parent), listening(false) {
    connect(this, &QPushButton::clicked, this, &KeyListenerButton::startListening);
    initializeKeyMap();
}

void KeyListenerButton::startListening() {
    listening = true;
    setText("监听中...");
    setFocus();
}

void KeyListenerButton::keyPressEvent(QKeyEvent *event) {
    if (listening) {
            QString keyText = QKeySequence(event->key() + event->modifiers()).toString(QKeySequence::PortableText);
            windowsKeyCode = qtKeyToWindowsKey(event->key());
            asciiCode = translateKeyCode(event->key());
            if (asciiCode >= 97 && asciiCode <= 122) {
                        asciiCode -= 32;
                 }
            setText(keyText);

            listening = false;
            emit keyPressed(keyText);
        } else {
            asciiCode = 0;
            windowsKeyCode = 0;
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

int KeyListenerButton::getWindowsKeyCode() const {
    return windowsKeyCode;
}
int KeyListenerButton::qtKeyToWindowsKey(int qtKeyCode) {
    return qtToWindowsKeyMap[qtKeyCode];
}

void KeyListenerButton::initializeKeyMap() {
    qtToWindowsKeyMap[Qt::Key_Escape] = VK_ESCAPE;
    qtToWindowsKeyMap[Qt::Key_Tab] = VK_TAB;
    qtToWindowsKeyMap[Qt::Key_Backspace] = VK_BACK;
    qtToWindowsKeyMap[Qt::Key_Return] = VK_RETURN;
    qtToWindowsKeyMap[Qt::Key_Enter] = VK_RETURN;
    qtToWindowsKeyMap[Qt::Key_Insert] = VK_INSERT;
    qtToWindowsKeyMap[Qt::Key_Delete] = VK_DELETE;
    qtToWindowsKeyMap[Qt::Key_Pause] = VK_PAUSE;
    qtToWindowsKeyMap[Qt::Key_Print] = VK_PRINT;
    qtToWindowsKeyMap[Qt::Key_Clear] = VK_CLEAR;
    qtToWindowsKeyMap[Qt::Key_Home] = VK_HOME;
    qtToWindowsKeyMap[Qt::Key_End] = VK_END;
    qtToWindowsKeyMap[Qt::Key_Left] = VK_LEFT;
    qtToWindowsKeyMap[Qt::Key_Up] = VK_UP;
    qtToWindowsKeyMap[Qt::Key_Right] = VK_RIGHT;
    qtToWindowsKeyMap[Qt::Key_Down] = VK_DOWN;
    qtToWindowsKeyMap[Qt::Key_PageUp] = VK_PRIOR;
    qtToWindowsKeyMap[Qt::Key_PageDown] = VK_NEXT;
    qtToWindowsKeyMap[Qt::Key_Shift] = VK_SHIFT;
    qtToWindowsKeyMap[Qt::Key_Control] = VK_CONTROL;
    qtToWindowsKeyMap[Qt::Key_Alt] = VK_MENU;
    qtToWindowsKeyMap[Qt::Key_CapsLock] = VK_CAPITAL;
    qtToWindowsKeyMap[Qt::Key_NumLock] = VK_NUMLOCK;
    qtToWindowsKeyMap[Qt::Key_ScrollLock] = VK_SCROLL;

    // 字母键
    for (int i = Qt::Key_A; i <= Qt::Key_Z; ++i) {
        qtToWindowsKeyMap[i] = i;
    }

    // 数字键
    for (int i = Qt::Key_0; i <= Qt::Key_9; ++i) {
        qtToWindowsKeyMap[i] = i;
    }

    // 函数键
    for (int i = Qt::Key_F1; i <= Qt::Key_F12; ++i) {
        qtToWindowsKeyMap[i] = VK_F1 + (i - Qt::Key_F1);
    }

    // 特殊字符键
    qtToWindowsKeyMap[Qt::Key_Space] = VK_SPACE;
    qtToWindowsKeyMap[Qt::Key_Comma] = VK_OEM_COMMA;
    qtToWindowsKeyMap[Qt::Key_Period] = VK_OEM_PERIOD;
    qtToWindowsKeyMap[Qt::Key_Semicolon] = VK_OEM_1;
    qtToWindowsKeyMap[Qt::Key_Slash] = VK_OEM_2;
    qtToWindowsKeyMap[Qt::Key_Apostrophe] = VK_OEM_7;
    qtToWindowsKeyMap[Qt::Key_BracketLeft] = VK_OEM_4;
    qtToWindowsKeyMap[Qt::Key_BracketRight] = VK_OEM_6;
    qtToWindowsKeyMap[Qt::Key_Backslash] = VK_OEM_5;
    qtToWindowsKeyMap[Qt::Key_Minus] = VK_OEM_MINUS;
    qtToWindowsKeyMap[Qt::Key_Equal] = VK_OEM_PLUS;
}
