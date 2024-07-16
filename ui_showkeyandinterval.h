/********************************************************************************
** Form generated from reading UI file 'showkeyandinterval.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWKEYANDINTERVAL_H
#define UI_SHOWKEYANDINTERVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_showKeyandInterval
{
public:
    QLabel *label;
    QPushButton *completeButton;
    QTextEdit *keyEdit;

    void setupUi(QDialog *showKeyandInterval)
    {
        if (showKeyandInterval->objectName().isEmpty())
            showKeyandInterval->setObjectName(QString::fromUtf8("showKeyandInterval"));
        showKeyandInterval->resize(540, 340);
        label = new QLabel(showKeyandInterval);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 121, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(10);
        label->setFont(font);
        completeButton = new QPushButton(showKeyandInterval);
        completeButton->setObjectName(QString::fromUtf8("completeButton"));
        completeButton->setGeometry(QRect(210, 300, 121, 31));
        completeButton->setFont(font);
        keyEdit = new QTextEdit(showKeyandInterval);
        keyEdit->setObjectName(QString::fromUtf8("keyEdit"));
        keyEdit->setGeometry(QRect(70, 70, 401, 211));

        retranslateUi(showKeyandInterval);

        QMetaObject::connectSlotsByName(showKeyandInterval);
    } // setupUi

    void retranslateUi(QDialog *showKeyandInterval)
    {
        showKeyandInterval->setWindowTitle(QCoreApplication::translate("showKeyandInterval", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("showKeyandInterval", "\345\267\262\345\275\225\345\210\266\347\232\204\346\214\211\351\224\256\357\274\232", nullptr));
        completeButton->setText(QCoreApplication::translate("showKeyandInterval", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showKeyandInterval: public Ui_showKeyandInterval {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWKEYANDINTERVAL_H
