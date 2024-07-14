/********************************************************************************
** Form generated from reading UI file 'triger_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIGER_WIDGET_H
#define UI_TRIGER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_triger_widget
{
public:

    void setupUi(QWidget *triger_widget)
    {
        if (triger_widget->objectName().isEmpty())
            triger_widget->setObjectName(QString::fromUtf8("triger_widget"));
        triger_widget->resize(400, 300);

        retranslateUi(triger_widget);

        QMetaObject::connectSlotsByName(triger_widget);
    } // setupUi

    void retranslateUi(QWidget *triger_widget)
    {
        triger_widget->setWindowTitle(QCoreApplication::translate("triger_widget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class triger_widget: public Ui_triger_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIGER_WIDGET_H
