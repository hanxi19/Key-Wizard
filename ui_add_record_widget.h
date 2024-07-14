/********************************************************************************
** Form generated from reading UI file 'add_record_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_RECORD_WIDGET_H
#define UI_ADD_RECORD_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_record_widget
{
public:
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QPushButton *startBtn;
    QPushButton *endBtn;
    QPushButton *saveBtn;

    void setupUi(QWidget *add_record_widget)
    {
        if (add_record_widget->objectName().isEmpty())
            add_record_widget->setObjectName(QString::fromUtf8("add_record_widget"));
        add_record_widget->resize(547, 347);
        nameLabel = new QLabel(add_record_widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(23, 29, 91, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        nameLabel->setFont(font);
        nameEdit = new QLineEdit(add_record_widget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(120, 30, 281, 61));
        startBtn = new QPushButton(add_record_widget);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setGeometry(QRect(30, 220, 141, 51));
        endBtn = new QPushButton(add_record_widget);
        endBtn->setObjectName(QString::fromUtf8("endBtn"));
        endBtn->setGeometry(QRect(170, 220, 141, 51));
        saveBtn = new QPushButton(add_record_widget);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setGeometry(QRect(310, 220, 151, 51));

        retranslateUi(add_record_widget);

        QMetaObject::connectSlotsByName(add_record_widget);
    } // setupUi

    void retranslateUi(QWidget *add_record_widget)
    {
        add_record_widget->setWindowTitle(QCoreApplication::translate("add_record_widget", "Form", nullptr));
        nameLabel->setText(QCoreApplication::translate("add_record_widget", "  \345\220\215\347\247\260", nullptr));
        startBtn->setText(QCoreApplication::translate("add_record_widget", "\345\274\200\345\247\213\345\275\225\345\210\266", nullptr));
        endBtn->setText(QCoreApplication::translate("add_record_widget", "\347\273\223\346\235\237\345\275\225\345\210\266", nullptr));
        saveBtn->setText(QCoreApplication::translate("add_record_widget", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_record_widget: public Ui_add_record_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_RECORD_WIDGET_H
