#ifndef MYJSON_H
#define MYJSON_H
#include <QJsonObject> // { }
#include <QJsonArray> // [ ]
#include <QJsonDocument> // 解析Json
#include <QJsonValue> // int float double bool null { } [ ]
#include <QJsonParseError>

class myJson
{
public:
    static QJsonDocument* getShortcutJson(int start,int end);
private:
    myJson();
};

#endif // MYJSON_H
