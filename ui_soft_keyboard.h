/********************************************************************************
** Form generated from reading UI file 'soft_keyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOFT_KEYBOARD_H
#define UI_SOFT_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_soft_keyboard
{
public:

    void setupUi(QWidget *soft_keyboard)
    {
        if (soft_keyboard->objectName().isEmpty())
            soft_keyboard->setObjectName(QString::fromUtf8("soft_keyboard"));
        soft_keyboard->resize(400, 300);

        retranslateUi(soft_keyboard);

        QMetaObject::connectSlotsByName(soft_keyboard);
    } // setupUi

    void retranslateUi(QWidget *soft_keyboard)
    {
        soft_keyboard->setWindowTitle(QCoreApplication::translate("soft_keyboard", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class soft_keyboard: public Ui_soft_keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOFT_KEYBOARD_H
