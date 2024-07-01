#ifndef APPLYCATION_H
#define APPLYCATION_H
#include <list>
#include "..\POJO\mydefine.h"
#include "data/mysql.h"


class Applycation
{
public:
    static void init();
    static char getStartKey();
    static char getEndKey();
    static list<myDefine*>* getDefineList();
    static void setStartKey(char key);
    static void setEndKey(char key);
private:
    Applycation();
    static char startKey;
    static char endKey;
    static list<myDefine>defineList;
};

#endif // APPLYCATION_H
