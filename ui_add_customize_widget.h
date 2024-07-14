/********************************************************************************
** Form generated from reading UI file 'add_customize_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_CUSTOMIZE_WIDGET_H
#define UI_ADD_CUSTOMIZE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_customize_widget
{
public:
    QLineEdit *nameEdit;
    QLabel *nameLabel;
    QPushButton *addBtn;
    QPushButton *saveBtn;

    void setupUi(QWidget *add_customize_widget)
    {
        if (add_customize_widget->objectName().isEmpty())
            add_customize_widget->setObjectName(QString::fromUtf8("add_customize_widget"));
        add_customize_widget->resize(538, 308);
        nameEdit = new QLineEdit(add_customize_widget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(100, 60, 311, 71));
        nameLabel = new QLabel(add_customize_widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(20, 70, 101, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        nameLabel->setFont(font);
        addBtn = new QPushButton(add_customize_widget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(410, 70, 121, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(11);
        addBtn->setFont(font1);
        saveBtn = new QPushButton(add_customize_widget);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setGeometry(QRect(80, 200, 371, 91));

        retranslateUi(add_customize_widget);

        QMetaObject::connectSlotsByName(add_customize_widget);
    } // setupUi

    void retranslateUi(QWidget *add_customize_widget)
    {
        add_customize_widget->setWindowTitle(QCoreApplication::translate("add_customize_widget", "Form", nullptr));
        nameLabel->setText(QCoreApplication::translate("add_customize_widget", "  \345\220\215\347\247\260", nullptr));
        addBtn->setText(QCoreApplication::translate("add_customize_widget", "\346\267\273\345\212\240\346\214\211\351\224\256", nullptr));
        saveBtn->setText(QCoreApplication::translate("add_customize_widget", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_customize_widget: public Ui_add_customize_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_CUSTOMIZE_WIDGET_H
