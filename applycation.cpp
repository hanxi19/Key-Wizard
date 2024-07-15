#include "applycation.h"
#include <QDebug>

Applycation::Applycation()
{

}

vector<myDefine*>* Applycation::defineList=new vector<myDefine*>();

void Applycation::init(){
    //extern list<myDefine*> defineList;
    mySql mysql;
    defineList= mysql.queryDefine();
    qDebug()<<"query define success"<<endl;
//    for(auto ite=defineList->begin();ite!=defineList->end();ite++){
//        myDefine* define=*ite;
//        qDebug()<<QString::fromStdString((*ite)->getName())<<endl;
//        if(typeid (*define)==typeid(KeyDefine)){
//            qDebug()<<"keydefine"<<endl;
//            KeyDefine* keyDefine=dynamic_cast<KeyDefine*>(define);
//            for(int i=0;i<keyDefine->getKeys().size();i++){
//                qDebug()<<keyDefine->getKeys()[i]<<endl;
//            }
//        }
//        else{
//            MouseDefine* mouseDefine=dynamic_cast<MouseDefine*>(define);
//            qDebug()<<mouseDefine->gettime()<<" "<<mouseDefine->getKeyType();
//        }
//    }

    int* keys=myFile::loadStartEndKey();
    startKey=keys[0];
    endKey=keys[1];
    qDebug()<<"start key:"<<startKey<<" "<<"end key:"<<endKey<<endl;

    (new DefineTrigerThread)->start();
    //(new ShortcutKeyListenThread(startKey,endKey))->start();
}

int Applycation::startKey=-1;
int Applycation::endKey=-1;

void Applycation::setStartKey(int key){
    startKey=key;
    ShortcutKeyListenThread::setStart(startKey);
    myFile::saveStartKey(startKey);
}

void Applycation::setEndKey(int key){
    endKey=key;
    ShortcutKeyListenThread::setEnd(endKey);
    myFile::saveEndKey(endKey);
}

int Applycation::getStartKey(){
    return startKey;
}

int Applycation::getEndKey(){
    return endKey;
}

vector<myDefine*>* Applycation::getDefineList(){
    return defineList;
}

void Applycation::addDefine(myDefine *define){
    defineList->push_back(define);
}
void Applycation::deleteDefine(int id, myDefine *define){
    mySql mysql;
    mysql.deleteDefine(id,define);
}
