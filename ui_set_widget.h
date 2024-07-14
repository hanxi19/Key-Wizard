/********************************************************************************
** Form generated from reading UI file 'set_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_WIDGET_H
#define UI_SET_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_set_widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *startButton;
    QPushButton *endButton_2;
    QLineEdit *startlineEdit;
    QLineEdit *endlineEdit_2;

    void setupUi(QWidget *set_widget)
    {
        if (set_widget->objectName().isEmpty())
            set_widget->setObjectName(QString::fromUtf8("set_widget"));
        set_widget->resize(400, 300);
        label = new QLabel(set_widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 171, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(set_widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 120, 171, 31));
        label_2->setFont(font);
        startButton = new QPushButton(set_widget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(220, 60, 131, 31));
        endButton_2 = new QPushButton(set_widget);
        endButton_2->setObjectName(QString::fromUtf8("endButton_2"));
        endButton_2->setGeometry(QRect(219, 119, 131, 31));
        startlineEdit = new QLineEdit(set_widget);
        startlineEdit->setObjectName(QString::fromUtf8("startlineEdit"));
        startlineEdit->setGeometry(QRect(212, 59, 141, 41));
        endlineEdit_2 = new QLineEdit(set_widget);
        endlineEdit_2->setObjectName(QString::fromUtf8("endlineEdit_2"));
        endlineEdit_2->setGeometry(QRect(212, 110, 141, 41));

        retranslateUi(set_widget);

        QMetaObject::connectSlotsByName(set_widget);
    } // setupUi

    void retranslateUi(QWidget *set_widget)
    {
        set_widget->setWindowTitle(QCoreApplication::translate("set_widget", "Form", nullptr));
        label->setText(QCoreApplication::translate("set_widget", "\345\274\200\345\247\213\345\277\253\346\215\267\351\224\256", nullptr));
        label_2->setText(QCoreApplication::translate("set_widget", "\347\273\223\346\235\237\345\277\253\346\215\267\351\224\256", nullptr));
        startButton->setText(QCoreApplication::translate("set_widget", "F8", nullptr));
        endButton_2->setText(QCoreApplication::translate("set_widget", "F10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class set_widget: public Ui_set_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_WIDGET_H
