#ifndef MYSQL_H
#define MYSQL_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

class mySql
{
public:
    QSqlDatabase& getDatabase();
    void init();
private:
    mySql(){};
    QSqlDatabase database;
};

#endif // MYSQL_H
