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
    MainWindow w;
    w.show();

    myFile::saveStartKey(30);
    myFile::saveEndKey(50);
    Applycation::init();


    return a.exec();
}
