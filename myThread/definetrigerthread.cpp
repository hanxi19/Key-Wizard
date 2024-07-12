#include "myThread/definetrigerthread.h"
#include <QDebug>

bool DefineTrigerThread::flag=false;
myDefine* DefineTrigerThread::define=nullptr;

DefineTrigerThread::DefineTrigerThread()
{

}

void DefineTrigerThread::setDefine(myDefine *newDefine){
    define=newDefine;
}

void DefineTrigerThread::deleteDefine(){
    delete define;
    this->define=nullptr;
}

void DefineTrigerThread::setFlag(bool newFlag){
    flag=newFlag;
}

void DefineTrigerThread::run(){
    qDebug()<<"DefineTrigerThread start"<<endl;
    while (true) {
        if(flag){
            if(define==nullptr){
                qDebug()<<"define is null"<<endl;
                sleep(1);
                continue;
            }
            else if(typeid (*define)==typeid(KeyDefine)){
                KeyDefine* keyDefine=dynamic_cast<KeyDefine*>(this->define) ;
                for(unsigned i=0;i<keyDefine->getKeys().size();i++){
                    msleep(keyDefine->getTimes()[i]);
                    keybd_event(keyDefine->getKeys()[i],0,0,0);
                    qDebug()<<"key "<<keyDefine->getKeys()[i]<<"pressed"<<endl;
                }
            }else if(typeid (*define)==typeid(MouseDefine)){
                MouseDefine* mouseDefine=dynamic_cast<MouseDefine*>(this->define);
                switch (mouseDefine->getKeyType()) {
                case 0:mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                    break;
                case 1:mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    break;
                case 2:mouse_event(MOUSEEVENTF_MIDDLEDOWN, 0, 0, 0, 0);
                    mouse_event(MOUSEEVENTF_MIDDLEUP, 0, 0, 0, 0);
                    break;
                }
                qDebug()<<"mouse "<<mouseDefine->getKeyType()<<"clicked";
                msleep(mouseDefine->gettime());
            }else{
                qDebug()<<"error define";
                sleep(1);
            }
        }else{
            qDebug()<<"triger stopped"<<endl;
            sleep(1);
        }
        msleep(10);
    }
}

