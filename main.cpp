#include "mainwindow.h"
#include "data/mysql.h"

#include <QApplication>
#include <POJO/keydefine.h>
#include <POJO/mousedefine.h>
#include "applycation.h"
#include "util/myfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Applycation::init();
    MainWindow w;
    w.show();

    //Applycation::init();

    return a.exec();
}
