/********************************************************************************
** Form generated from reading UI file 'save_success.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_SUCCESS_H
#define UI_SAVE_SUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_save_success
{
public:
    QPushButton *exitBtn;
    QLabel *saveLabel;

    void setupUi(QDialog *save_success)
    {
        if (save_success->objectName().isEmpty())
            save_success->setObjectName(QString::fromUtf8("save_success"));
        save_success->resize(211, 166);
        exitBtn = new QPushButton(save_success);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(50, 100, 101, 31));
        saveLabel = new QLabel(save_success);
        saveLabel->setObjectName(QString::fromUtf8("saveLabel"));
        saveLabel->setGeometry(QRect(60, 30, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        saveLabel->setFont(font);

        retranslateUi(save_success);

        QMetaObject::connectSlotsByName(save_success);
    } // setupUi

    void retranslateUi(QDialog *save_success)
    {
        save_success->setWindowTitle(QCoreApplication::translate("save_success", "Dialog", nullptr));
        exitBtn->setText(QCoreApplication::translate("save_success", "\347\241\256\345\256\232", nullptr));
        saveLabel->setText(QCoreApplication::translate("save_success", "  \344\277\235\345\255\230\346\210\220\345\212\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class save_success: public Ui_save_success {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_SUCCESS_H
