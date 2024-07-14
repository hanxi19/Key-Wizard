/********************************************************************************
** Form generated from reading UI file 'add_quickclick_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_QUICKCLICK_WIDGET_H
#define UI_ADD_QUICKCLICK_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_quickClick_widget
{
public:
    QLineEdit *nameEdit;
    QLineEdit *intervalEdit;
    QPushButton *saveBtn;
    QToolButton *buttonBtn;
    QLabel *nameLabel;
    QLabel *buttonLabel;
    QLabel *intervalLabel;

    void setupUi(QWidget *add_quickClick_widget)
    {
        if (add_quickClick_widget->objectName().isEmpty())
            add_quickClick_widget->setObjectName(QString::fromUtf8("add_quickClick_widget"));
        add_quickClick_widget->resize(544, 355);
        nameEdit = new QLineEdit(add_quickClick_widget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(180, 40, 261, 51));
        intervalEdit = new QLineEdit(add_quickClick_widget);
        intervalEdit->setObjectName(QString::fromUtf8("intervalEdit"));
        intervalEdit->setGeometry(QRect(180, 180, 261, 51));
        saveBtn = new QPushButton(add_quickClick_widget);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setGeometry(QRect(160, 250, 211, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        saveBtn->setFont(font);
        buttonBtn = new QToolButton(add_quickClick_widget);
        buttonBtn->setObjectName(QString::fromUtf8("buttonBtn"));
        buttonBtn->setGeometry(QRect(240, 120, 141, 31));
        nameLabel = new QLabel(add_quickClick_widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(40, 40, 71, 41));
        nameLabel->setFont(font);
        buttonLabel = new QLabel(add_quickClick_widget);
        buttonLabel->setObjectName(QString::fromUtf8("buttonLabel"));
        buttonLabel->setGeometry(QRect(40, 100, 131, 61));
        buttonLabel->setFont(font);
        intervalLabel = new QLabel(add_quickClick_widget);
        intervalLabel->setObjectName(QString::fromUtf8("intervalLabel"));
        intervalLabel->setGeometry(QRect(40, 180, 131, 41));
        intervalLabel->setFont(font);

        retranslateUi(add_quickClick_widget);

        QMetaObject::connectSlotsByName(add_quickClick_widget);
    } // setupUi

    void retranslateUi(QWidget *add_quickClick_widget)
    {
        add_quickClick_widget->setWindowTitle(QCoreApplication::translate("add_quickClick_widget", "Form", nullptr));
        nameEdit->setPlaceholderText(QString());
        intervalEdit->setText(QString());
        intervalEdit->setPlaceholderText(QString());
        saveBtn->setText(QCoreApplication::translate("add_quickClick_widget", "\344\277\235\345\255\230", nullptr));
        buttonBtn->setText(QCoreApplication::translate("add_quickClick_widget", "...", nullptr));
        nameLabel->setText(QCoreApplication::translate("add_quickClick_widget", "  \345\220\215\347\247\260", nullptr));
        buttonLabel->setText(QCoreApplication::translate("add_quickClick_widget", "  \346\214\211\351\224\256", nullptr));
        intervalLabel->setText(QCoreApplication::translate("add_quickClick_widget", "  \351\227\264\351\232\224(ms)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_quickClick_widget: public Ui_add_quickClick_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_QUICKCLICK_WIDGET_H
