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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_set_widget
{
public:
    QLabel *label;
    QLabel *label_2;

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

        retranslateUi(set_widget);

        QMetaObject::connectSlotsByName(set_widget);
    } // setupUi

    void retranslateUi(QWidget *set_widget)
    {
        set_widget->setWindowTitle(QCoreApplication::translate("set_widget", "Form", nullptr));
        label->setText(QCoreApplication::translate("set_widget", "\345\274\200\345\247\213\345\277\253\346\215\267\351\224\256", nullptr));
        label_2->setText(QCoreApplication::translate("set_widget", "\347\273\223\346\235\237\345\277\253\346\215\267\351\224\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class set_widget: public Ui_set_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_WIDGET_H
