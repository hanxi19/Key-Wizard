#include "mysql.h"
#include <QCoreApplication>

QSqlDatabase& mySql::getDatabase(){
    //extern QSqlDatabase database;
    return database;
}

mySql::mySql(){
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        QString dbPath = QCoreApplication::applicationDirPath() + "//MyDataBase.db";
        database.setDatabaseName(dbPath);
        qDebug()<<dbPath<<endl;
        database.setUserName("root");
        database.setPassword("123456");
        database.open();
    }


    QSqlQuery sql_query;
    QString create_sql = "create table if not exists keyDefine (id integer primary key AUTOINCREMENT, name varchar(30), define varchar(300));";
    sql_query.prepare(create_sql);
    if(!sql_query.exec())
    {
        qDebug() << "Error: Fail to create table keyDefine." << sql_query.lastError();
    }
    else
    {
        qDebug() << "Table keyDefine created!";
    }
    create_sql = "create table if not exists mouseDefine (id integer primary key AUTOINCREMENT,name varchar(30), keytype int,time int);";
    QSqlQuery sql_query2;
    sql_query2.prepare(create_sql);
    if(!sql_query2.exec())
    {
        qDebug() << "Error: Fail to create table mouseDefine." << sql_query.lastError();
    }
    else
    {
        qDebug() << "Table mouseDefine created!";
    }
}

void mySql::insertDefine(myDefine *define){
    if(typeid (*define)==typeid(KeyDefine))
    {
        qDebug()<<"add keyDefine"<<endl;
        KeyDefine* keyDefine =dynamic_cast<KeyDefine*>(define);
        QSqlQuery sql_query;
        QString insert_sql = "insert into keydefine (name,define) values (?, ?)";
        sql_query.prepare(insert_sql);
        sql_query.addBindValue(QString::fromStdString(keyDefine->getName()));
        sql_query.addBindValue(QString::fromStdString(keyDefine->toString()));
        if(!sql_query.exec())
        {
            qDebug() << sql_query.lastError();
        }
        else
        {
            qDebug() << "inserted keyDefine";
        }
    }
    else{
        qDebug()<<"add mouseDefine"<<endl;
        MouseDefine* mouseDefine=dynamic_cast<MouseDefine*>(define);
        QSqlQuery sql_query;
        QString insert_sql = "insert into mousedefine (name,keytype,time) values (?, ? , ? )";
        sql_query.prepare(insert_sql);
        sql_query.addBindValue(QString::fromStdString(mouseDefine->getName()));
        sql_query.addBindValue(mouseDefine->getKeyType());
        sql_query.addBindValue(mouseDefine->gettime());

        if(!sql_query.exec())
        {
            qDebug() << sql_query.lastError();
        }
        else
        {
            qDebug() << "inserted mouseDefine";
        }
    }
}

void mySql::deleteDefine(int id,myDefine* mydefine){
    QSqlQuery sql_query;
    if(typeid(*mydefine)==typeid (KeyDefine))
    {
        QString delete_sql = "delete from keydefine where id = ?";
        sql_query.prepare(delete_sql);
        sql_query.addBindValue(id);
        if(!sql_query.exec())
        {
            qDebug()<<sql_query.lastError();
        }
        else
        {
            qDebug()<<"keyDefine deleted!";
        }
    }
    else{
        QString delete_sql = "delete from mousedefine where id = ?";
        sql_query.prepare(delete_sql);
        sql_query.addBindValue(id);
        if(!sql_query.exec())
        {
            qDebug()<<sql_query.lastError();
        }
        else
        {
            qDebug()<<"mouseDefine deleted!";
        }
    }
}

list<myDefine*>* mySql::queryDefine(){
    QSqlQuery sql_query;
    QString select_sql = "select * from keydefine";
    list<myDefine*>* defineList=new list<myDefine*>;
    if(!sql_query.exec(select_sql))
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            KeyDefine *define=KeyDefine::toObject(sql_query.value(2).toString().toStdString());
            define->setName(sql_query.value(1).toString().toStdString());
            define->setId(sql_query.value(0).toInt());
            defineList->push_back(define);
        }
    }
    select_sql = "select * from mousedefine";
    if(!sql_query.exec(select_sql))
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            MouseDefine* define=new MouseDefine;
            define->setName(sql_query.value(1).toString().toStdString());
            define->setTime(sql_query.value(3).toInt());
            define->setKeyType(sql_query.value(2).toInt());
            define->setId(sql_query.value(0).toInt());
            defineList->push_back(define);
        }
    }

    return defineList;
}


