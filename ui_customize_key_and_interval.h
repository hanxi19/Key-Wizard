/********************************************************************************
** Form generated from reading UI file 'customize_key_and_interval.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMIZE_KEY_AND_INTERVAL_H
#define UI_CUSTOMIZE_KEY_AND_INTERVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customize_key_and_interval
{
public:
    QLabel *buttonLabel;
    QLabel *intervalLabel;
    QLineEdit *intervalEdit;
    QPushButton *completeBtn;

    void setupUi(QDialog *customize_key_and_interval)
    {
        if (customize_key_and_interval->objectName().isEmpty())
            customize_key_and_interval->setObjectName(QString::fromUtf8("customize_key_and_interval"));
        customize_key_and_interval->resize(468, 322);
        buttonLabel = new QLabel(customize_key_and_interval);
        buttonLabel->setObjectName(QString::fromUtf8("buttonLabel"));
        buttonLabel->setGeometry(QRect(40, 50, 71, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        buttonLabel->setFont(font);
        intervalLabel = new QLabel(customize_key_and_interval);
        intervalLabel->setObjectName(QString::fromUtf8("intervalLabel"));
        intervalLabel->setGeometry(QRect(40, 180, 101, 31));
        intervalLabel->setFont(font);
        intervalEdit = new QLineEdit(customize_key_and_interval);
        intervalEdit->setObjectName(QString::fromUtf8("intervalEdit"));
        intervalEdit->setGeometry(QRect(130, 180, 231, 41));
        completeBtn = new QPushButton(customize_key_and_interval);
        completeBtn->setObjectName(QString::fromUtf8("completeBtn"));
        completeBtn->setGeometry(QRect(140, 250, 201, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(12);
        completeBtn->setFont(font1);

        retranslateUi(customize_key_and_interval);

        QMetaObject::connectSlotsByName(customize_key_and_interval);
    } // setupUi

    void retranslateUi(QDialog *customize_key_and_interval)
    {
        customize_key_and_interval->setWindowTitle(QCoreApplication::translate("customize_key_and_interval", "Dialog", nullptr));
        buttonLabel->setText(QCoreApplication::translate("customize_key_and_interval", "  \346\214\211\351\224\256", nullptr));
        intervalLabel->setText(QCoreApplication::translate("customize_key_and_interval", "  \351\227\264\351\232\224(ms)", nullptr));
        completeBtn->setText(QCoreApplication::translate("customize_key_and_interval", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customize_key_and_interval: public Ui_customize_key_and_interval {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMIZE_KEY_AND_INTERVAL_H
