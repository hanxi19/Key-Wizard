#include "soft_keyboard.h"
#include "ui_soft_keyboard.h"

soft_keyboard::soft_keyboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::soft_keyboard)
{
    ui->setupUi(this);
    QGridLayout *gridLayout = new QGridLayout(this);

        // 按键列表
        QStringList keys = {
            "Esc", "F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9", "F10", "F11", "F12",
            "`", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "-", "=", "Backspace",
            "Tab", "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", "[", "]", "\\",
            "Caps Lock", "A", "S", "D", "F", "G", "H", "J", "K", "L", ";", "'", "Enter",
            "Left Shift", "Z", "X", "C", "V", "B", "N", "M", ",", ".", "/", "Right Shift",
            "Left Ctrl", "Fn", "Left Alt", "Space", "Right Alt", "Right Ctrl",
            "Left", "Up", "Down", "Right"
        };

        int row = 0, col = 0;
        int maxCols[] = {13, 14, 14, 13, 12, 6, 4}; // Maximum columns for each row

        // 创建按键并添加到布局中
        foreach (const QString &key, keys) {
            QPushButton *button = new QPushButton(key, this);
            button->setFixedSize(60, 60);  // 调整按钮大小
            if (key == "Space") {
                gridLayout->addWidget(button, row, col, 1, 5);
                col += 4;
            } else {
                gridLayout->addWidget(button, row, col);
            }
            m_buttonMap[key.toUpper()] = button;

            col++;
            if (col == maxCols[row]) {
                col = 0;
                row++;
            }
        }

        // 捕捉按键事件
        installEventFilter(this);
    }

bool soft_keyboard::eventFilter(QObject *obj, QEvent *event) {
    if (event->type() == QEvent::KeyPress || event->type() == QEvent::KeyRelease) {
           QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
           QString keyText = QKeySequence(keyEvent->key() + keyEvent->modifiers()).toString(QKeySequence::PortableText).toUpper();

           if (keyText.isEmpty()) {
               keyText = QKeySequence(keyEvent->key()).toString(QKeySequence::PortableText).toUpper();
           }

           if (m_buttonMap.contains(keyText)) {
               QPushButton *button = m_buttonMap[keyText];
               if (event->type() == QEvent::KeyPress) {
                   button->setStyleSheet("background-color: yellow;");
               } else {
                   button->setStyleSheet("");
               }
           } else {
               // Special handling for keys that might not be captured correctly by QKeySequence
               switch (keyEvent->key()) {
                   case Qt::Key_Enter:
                   case Qt::Key_Return:
                       keyText = "ENTER";
                       break;
                   case Qt::Key_Space:
                       keyText = "SPACE";
                       break;
                   case Qt::Key_Tab:
                       keyText = "TAB";
                       break;
                   case Qt::Key_CapsLock:
                       keyText = "CAPS LOCK";
                       break;
                   case Qt::Key_Shift:
                       keyText = "SHIFT";
                       break;
                   case Qt::Key_Control:
                       keyText = "CTRL";
                       break;
                   case Qt::Key_Alt:
                       keyText = "ALT";
                       break;
                   case Qt::Key_Left:
                       keyText = "LEFT";
                       break;
                   case Qt::Key_Up:
                       keyText = "UP";
                       break;
                   case Qt::Key_Down:
                       keyText = "DOWN";
                       break;
                   case Qt::Key_Right:
                       keyText = "RIGHT";
                       break;
                   default:
                       keyText = QString::number(keyEvent->key());
                       break;
               }
               if (m_buttonMap.contains(keyText)) {
                   QPushButton *button = m_buttonMap[keyText];
                   if (event->type() == QEvent::KeyPress) {
                       button->setStyleSheet("background-color: yellow;");
                   } else {
                       button->setStyleSheet("");
                   }

                   // Additional handling for Ctrl, Shift, and Alt to ensure both buttons light up
                   if (keyText == "CTRL") {
                       if (event->type() == QEvent::KeyPress) {
                           m_buttonMap["LEFT CTRL"]->setStyleSheet("background-color: yellow;");
                           m_buttonMap["RIGHT CTRL"]->setStyleSheet("background-color: yellow;");
                       } else {
                           m_buttonMap["LEFT CTRL"]->setStyleSheet("");
                           m_buttonMap["RIGHT CTRL"]->setStyleSheet("");
                       }
                   } else if (keyText == "SHIFT") {
                       if (event->type() == QEvent::KeyPress) {
                           m_buttonMap["LEFT SHIFT"]->setStyleSheet("background-color: yellow;");
                           m_buttonMap["RIGHT SHIFT"]->setStyleSheet("background-color: yellow;");
                       } else {
                           m_buttonMap["LEFT SHIFT"]->setStyleSheet("");
                           m_buttonMap["RIGHT SHIFT"]->setStyleSheet("");
                       }
                   } else if (keyText == "ALT") {
                       if (event->type() == QEvent::KeyPress) {
                           m_buttonMap["LEFT ALT"]->setStyleSheet("background-color: yellow;");
                           m_buttonMap["RIGHT ALT"]->setStyleSheet("background-color: yellow;");
                       } else {
                           m_buttonMap["LEFT ALT"]->setStyleSheet("");
                           m_buttonMap["RIGHT ALT"]->setStyleSheet("");
                       }
                   }
               }
           }
       }
       return QWidget::eventFilter(obj, event);;
    }


soft_keyboard::~soft_keyboard()
{
    delete ui;
}
