#ifndef TRIGER_WIDGET_H
#define TRIGER_WIDGET_H

#include <QWidget>
#include<QTableWidget>
#include<QHBoxLayout>
#include<QCheckBox>
#include<QLabel>
#include<QWidget>
#include<QApplication>
#include<QButtonGroup>
#include<QDebug>
#include<QPushButton>
#include<QScrollArea>
#include"applycation.h"
#include"../POJO/mydefine.h"
#include"definetrigerthread.h"
#include"../POJO/keydefine.h"
QT_BEGIN_NAMESPACE
namespace Ui { class triger_widget; }
QT_END_NAMESPACE

class triger_widget : public QWidget
{
    Q_OBJECT

public:
    explicit triger_widget(QWidget *parent = nullptr);
    ~triger_widget();
    int choice=0;          //选择触发哪一个宏
    int tem;
    vector<myDefine*>* list=Applycation::getDefineList();
    KeyDefine *key=new KeyDefine;

private slots:
    void on_deleteBtn_clicked();

private:
    Ui::triger_widget *ui;


};
#endif // TRIGER_WIDGET_H

