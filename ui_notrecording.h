/********************************************************************************
** Form generated from reading UI file 'notrecording.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTRECORDING_H
#define UI_NOTRECORDING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_notRecording
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *notRecording)
    {
        if (notRecording->objectName().isEmpty())
            notRecording->setObjectName(QString::fromUtf8("notRecording"));
        notRecording->resize(303, 223);
        label = new QLabel(notRecording);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 60, 151, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(11);
        label->setFont(font);
        pushButton = new QPushButton(notRecording);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 150, 101, 31));

        retranslateUi(notRecording);

        QMetaObject::connectSlotsByName(notRecording);
    } // setupUi

    void retranslateUi(QDialog *notRecording)
    {
        notRecording->setWindowTitle(QCoreApplication::translate("notRecording", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("notRecording", "\346\234\252\345\274\200\345\247\213\345\275\225\345\210\266\357\274\201", nullptr));
        pushButton->setText(QCoreApplication::translate("notRecording", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notRecording: public Ui_notRecording {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTRECORDING_H
