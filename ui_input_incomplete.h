/********************************************************************************
** Form generated from reading UI file 'input_incomplete.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_INCOMPLETE_H
#define UI_INPUT_INCOMPLETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_input_incomplete
{
public:
    QPushButton *exitBtn;
    QLabel *label;

    void setupUi(QDialog *input_incomplete)
    {
        if (input_incomplete->objectName().isEmpty())
            input_incomplete->setObjectName(QString::fromUtf8("input_incomplete"));
        input_incomplete->resize(301, 229);
        exitBtn = new QPushButton(input_incomplete);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(80, 140, 131, 41));
        label = new QLabel(input_incomplete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 60, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        label->setFont(font);

        retranslateUi(input_incomplete);

        QMetaObject::connectSlotsByName(input_incomplete);
    } // setupUi

    void retranslateUi(QDialog *input_incomplete)
    {
        input_incomplete->setWindowTitle(QCoreApplication::translate("input_incomplete", "Dialog", nullptr));
        exitBtn->setText(QCoreApplication::translate("input_incomplete", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("input_incomplete", " \350\276\223\345\205\245\346\234\252\345\256\214\346\210\220\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class input_incomplete: public Ui_input_incomplete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_INCOMPLETE_H
