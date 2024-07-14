/********************************************************************************
** Form generated from reading UI file 'no_name.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NO_NAME_H
#define UI_NO_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_no_name
{
public:
    QLabel *nameLabel;
    QPushButton *exitBtn;

    void setupUi(QDialog *no_name)
    {
        if (no_name->objectName().isEmpty())
            no_name->setObjectName(QString::fromUtf8("no_name"));
        no_name->resize(395, 260);
        nameLabel = new QLabel(no_name);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(140, 60, 201, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        nameLabel->setFont(font);
        exitBtn = new QPushButton(no_name);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(110, 170, 161, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(10);
        exitBtn->setFont(font1);

        retranslateUi(no_name);

        QMetaObject::connectSlotsByName(no_name);
    } // setupUi

    void retranslateUi(QDialog *no_name)
    {
        no_name->setWindowTitle(QCoreApplication::translate("no_name", "Dialog", nullptr));
        nameLabel->setText(QCoreApplication::translate("no_name", "\345\220\215\347\247\260\346\234\252\346\267\273\345\212\240\357\274\201", nullptr));
        exitBtn->setText(QCoreApplication::translate("no_name", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class no_name: public Ui_no_name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NO_NAME_H
