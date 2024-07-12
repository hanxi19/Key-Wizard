#ifndef MYFILE_H
#define MYFILE_H
#include <QFile>
#include <QApplication>
#include "myjson.h"
#include <QTextStream>


class myFile
{
public:
    static void saveStartKey(int start);
    static void saveEndKey(int end);
    static int* loadStartEndKey();//[0]:startKey,[1]:endKey
private:
    myFile();
};

#endif // MYFILE_H
