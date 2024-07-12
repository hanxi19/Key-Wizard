#ifndef DEFINETRIGERTHREAD_H
#define DEFINETRIGERTHREAD_H

#include <QThread>
#include <POJO/mydefine.h>
#include <POJO/keydefine.h>
#include <POJO/mousedefine.h>
#include <conio.h>
#include <windows.h>


class DefineTrigerThread:public QThread
{
public:

    DefineTrigerThread();
    static void setFlag(bool newFlag);
    void setDefine(myDefine* define);
    void deleteDefine();

    void run() override;

private:

    static myDefine* define;
    static bool flag;
};

#endif // DEFINETRIGERTHREAD_H
