#include "mysql.h"

QSqlDatabase& mySql::getDatabase(){
    //extern QSqlDatabase database;
    return database;
}

void mySql::init(){
    //extern QSqlDatabase database;
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("MyDataBase.db");
//        database.setUserName("XingYeZhiXia");
//        database.setPassword("123456");
    }


    QSqlQuery sql_query;
    QString create_sql = "create table if not exists keyDefine (id int primary key, name varchar(30), define varchar(300))";
    sql_query.prepare(create_sql);
    if(!sql_query.exec())
    {
        qDebug() << "Error: Fail to create table keyDefine." << sql_query.lastError();
    }
    else
    {
        qDebug() << "Table keyDefine created!";
    }
    create_sql = "create table if not exists mouseDefine (id int primary key, keytype int,time int)";
    if(!sql_query.exec())
    {
        qDebug() << "Error: Fail to create table mouseDefine." << sql_query.lastError();
    }
    else
    {
        qDebug() << "Table mouseDefine created!";
    }
}
