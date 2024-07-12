#include "definetrigerthread.h"

DefineTrigerThread::DefineTrigerThread()
{

}

DefineTrigerThread::DefineTrigerThread(int start,int end){
    flag=false;
    this->startKey=start;
    this->endKey=end;
}

void DefineTrigerThread::setDefine(myDefine *define){
    this->define=define;
}

void DefineTrigerThread::deleteDefine(){
    delete define;
    this->define=nullptr;
}

void DefineTrigerThread::setStart(int start){
    this->startKey=start;
}

void DefineTrigerThread::setEnd(int end){
    this->endKey=end;
}

void DefineTrigerThread::toggleFlag(){
    flag=!flag;
}

void DefineTrigerThread::run(){
    while (1) {
        int ch;
        while (1){
            if (_kbhit()){//如果有按键按下，则_kbhit()函数返回真
                ch = _getch();//使用_getch()函数获取按下的键值
                if (ch == startKey){ toggleFlag(); }//当按下ESC时循环，ESC键的键值时27.
            }
        }
    }
}
