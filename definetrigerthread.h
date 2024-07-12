#ifndef DEFINETRIGERTHREAD_H
#define DEFINETRIGERTHREAD_H
#include <QThread>
#include <POJO/mydefine.h>
#include <POJO/keydefine.h>
#include <POJO/mousedefine.h>
#include <conio.h>


class DefineTrigerThread:public QThread
{
public:

    DefineTrigerThread(int start,int end);
    void setStart(int start);
    void setEnd(int end);
    void toggleFlag();
    void setDefine(myDefine* define);
    void deleteDefine();

    void run() override;

private:
    DefineTrigerThread();
    static myDefine* define;
    static bool flag;
    int startKey;
    int endKey;
};

#endif // DEFINETRIGERTHREAD_H
