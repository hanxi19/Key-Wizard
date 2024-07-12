#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "util/winkeyhook.h"
#include "myThread/definetrigerthread.h"
#include "applycation.h"
#include <QDebug>

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
<<<<<<< HEAD
=======
    void keyPressEvent(int keyCode);
>>>>>>> d3bdbe418be3acc94f4d9f304b7eb8d031f5d361

};
#endif // MAINWINDOW_H

