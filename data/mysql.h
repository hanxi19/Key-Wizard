#ifndef MYSQL_H
#define MYSQL_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <POJO/mydefine.h>
#include <POJO/keydefine.h>
#include <POJO/mousedefine.h>
#include <list>

class mySql
{
public:
    QSqlDatabase& getDatabase();
    mySql();
    ~mySql(){database.close();};
    void insertDefine(myDefine *define);
    void deleteDefine(int id,myDefine *mydefine);
    list<myDefine*>* queryDefine();
private:
    QSqlDatabase database;

};

#endif // MYSQL_H
