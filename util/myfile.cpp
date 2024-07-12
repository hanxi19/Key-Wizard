#include "myfile.h"
#include <QDebug>

myFile::myFile()
{

}

void myFile::saveEndKey(int end){
    int* keys=loadStartEndKey();
    //定义文件内容字符串
    QString str= myJson::getShortcutJson(keys[0],end)->toJson();
    QFile file(QCoreApplication::applicationDirPath()+ "applycation.txt");
    //打开文件，不存在则创建
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    //写入文件需要字符串为QByteArray格式
    file.write(str.toUtf8());
    file.close();
    qDebug()<<"save startKey success,the key is:"<<end<<endl;
}

void myFile::saveStartKey(int start){
    int* keys=loadStartEndKey();
    //定义文件内容字符串
    QString str= myJson::getShortcutJson(start,keys[1])->toJson();
    QFile file(QCoreApplication::applicationDirPath()+ "applycation.txt");
    //打开文件，不存在则创建
    file.open(QIODevice::ReadWrite | QIODevice::Text);
    //写入文件需要字符串为QByteArray格式
    file.write(str.toUtf8());
    file.close();
    qDebug()<<"save startKey success,the key is:"<<start<<endl;
}

int* myFile::loadStartEndKey(){

    bool exist = QFile::exists(QCoreApplication::applicationDirPath()+  "applycation.txt");
    if(!exist){
        QFile newFile(QCoreApplication::applicationDirPath()+  "applycation.txt");
        QString str= myJson::getShortcutJson(119,121)->toJson();//将F8与F10分别设置为默认开始键与默认结束键
        newFile.open(QIODevice::ReadWrite | QIODevice::Text);
        //写入文件需要字符串为QByteArray格式
        newFile.write(str.toUtf8());
        newFile.close();
    }
    QFile file(QCoreApplication::applicationDirPath()+  "applycation.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "can't open error!";
        return nullptr;
    }

    // 读取文件的全部内容
    QTextStream stream(&file);
    stream.setCodec("UTF-8");		// 设置读取编码是UTF8
    QString str = stream.readAll();

    file.close();

    // QJsonParseError类用于在JSON解析期间报告错误。
    QJsonParseError jsonError;
    // 将json解析为UTF-8编码的json文档，并从中创建一个QJsonDocument。
    // 如果解析成功，返回QJsonDocument对象，否则返回null
    QJsonDocument doc = QJsonDocument::fromJson(str.toUtf8(), &jsonError);
    // 判断是否解析失败
    if (jsonError.error != QJsonParseError::NoError && !doc.isNull()) {
        qDebug() << "Json格式错误！" << jsonError.error;
        return nullptr;
    }

    int* keys=new int[2];
    keys[0]=doc.object().value("start").toInt();
    keys[1]=doc.object().value("end").toInt();

    return keys;
}
