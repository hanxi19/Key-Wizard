#include "applycation.h"
#include <QDebug>

Applycation::Applycation()
{

}

list<myDefine*>* Applycation::defineList=new list<myDefine*>();

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
}

int Applycation::startKey=-1;
int Applycation::endKey=-1;
