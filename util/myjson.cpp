#include "myjson.h"

myJson::myJson()
{

}

QJsonDocument* myJson::getShortcutJson(int start, int end){
    QJsonObject *rootObj=new QJsonObject;
    rootObj->insert("start",start);
    rootObj->insert("end",end);

    // 将json对象里的数据转换为字符串
    QJsonDocument *doc=new QJsonDocument;
    // 将object设置为本文档的主要对象
    doc->setObject(*rootObj);
    return doc;
}



