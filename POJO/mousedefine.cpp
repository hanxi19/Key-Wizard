#include "mousedefine.h"

MouseDefine::MouseDefine(){}
MouseDefine::MouseDefine(int keyType,int time){
    this->keyType=keyType;
    this->time=time;
}
int MouseDefine::getKeyType(){
    return keyType;
}

int MouseDefine::gettime(){
    return time;
}

string MouseDefine::getName(){
    return name;
}

void MouseDefine::setName(string name){
    this->name=name;
}

void MouseDefine::setKeyType(int type){
    keyType=type;
}

void MouseDefine::setTime(int time){
    this->time=time;
}

void MouseDefine:: save(){
    mySql sql;
    sql.insertDefine(this);
    Applycation::addDefine(this);
}
