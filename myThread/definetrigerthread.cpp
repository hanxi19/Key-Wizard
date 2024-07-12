#include "myThread/definetrigerthread.h"

bool DefineTrigerThread::flag=false;
myDefine* DefineTrigerThread::define=nullptr;

DefineTrigerThread::DefineTrigerThread()
{

}

void DefineTrigerThread::setDefine(myDefine *define){
    this->define=define;
}

void DefineTrigerThread::deleteDefine(){
    delete define;
    this->define=nullptr;
}

void DefineTrigerThread::setFlag(bool newFlag){
    flag=!newFlag;
}

void DefineTrigerThread::run(){
    while (true) {
        if(flag){
            if(define==nullptr){continue;}
            else if(typeid (define)==typeid(KeyDefine*)){
                KeyDefine* keyDefine=dynamic_cast<KeyDefine*>(this->define) ;
                for(unsigned i=0;i<keyDefine->getKeys().size();i++){
                    sleep(keyDefine->getTimes()[i]);
                    keybd_event(keyDefine->getKeys()[i],0,0,0);
                }
            }else if(typeid (define)==typeid(MouseDefine*)){
                MouseDefine* mouseDefine=dynamic_cast<MouseDefine*>(this->define);
                switch (mouseDefine->getKeyType()) {
                case 0:keybd_event(VK_LBUTTON,0,0,0);
                    break;
                case 1:keybd_event(VK_RBUTTON,0,0,0);
                    break;
                case 2:keybd_event(VK_MBUTTON,0,0,0);
                    break;
                }
                sleep(mouseDefine->gettime());
            }
        }
        sleep(10);
    }
}

