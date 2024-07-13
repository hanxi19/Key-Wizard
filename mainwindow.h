#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "util/winkeyhook.h"
#include "myThread/definetrigerthread.h"
#include "applycation.h"
#include <QDebug>
#include"triger_widget.h"
#include"set_widget.h"
#include"add_widget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_triggerBtn_clicked();

    void on_addBtn_clicked();

    void on_setBtn_clicked();

private:
    Ui::MainWindow *ui;
    void keyPressEvent(int keyCode);

};
#endif // MAINWINDOW_H

