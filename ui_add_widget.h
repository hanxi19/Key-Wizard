/********************************************************************************
** Form generated from reading UI file 'add_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_WIDGET_H
#define UI_ADD_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_widget
{
public:
    QPushButton *recordBtn;
    QPushButton *customizeBtn;
    QPushButton *quickclickBtn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_3;
    QWidget *page_2;

    void setupUi(QWidget *add_widget)
    {
        if (add_widget->objectName().isEmpty())
            add_widget->setObjectName(QString::fromUtf8("add_widget"));
        add_widget->resize(683, 330);
        recordBtn = new QPushButton(add_widget);
        recordBtn->setObjectName(QString::fromUtf8("recordBtn"));
        recordBtn->setGeometry(QRect(0, 20, 91, 71));
        customizeBtn = new QPushButton(add_widget);
        customizeBtn->setObjectName(QString::fromUtf8("customizeBtn"));
        customizeBtn->setGeometry(QRect(0, 130, 91, 71));
        quickclickBtn = new QPushButton(add_widget);
        quickclickBtn->setObjectName(QString::fromUtf8("quickclickBtn"));
        quickclickBtn->setGeometry(QRect(0, 240, 91, 71));
        stackedWidget = new QStackedWidget(add_widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(99, 19, 571, 301));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(add_widget);

        QMetaObject::connectSlotsByName(add_widget);
    } // setupUi

    void retranslateUi(QWidget *add_widget)
    {
        add_widget->setWindowTitle(QCoreApplication::translate("add_widget", "Form", nullptr));
        recordBtn->setText(QCoreApplication::translate("add_widget", "\345\275\225\345\210\266", nullptr));
        customizeBtn->setText(QCoreApplication::translate("add_widget", "\350\207\252\345\256\232\344\271\211", nullptr));
        quickclickBtn->setText(QCoreApplication::translate("add_widget", "\350\277\236\347\202\271\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_widget: public Ui_add_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WIDGET_H
