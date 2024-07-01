#ifndef APPLYCATION_H
#define APPLYCATION_H
#include <list>
#include "..\POJO\mydefine.h"


class Applycation
{
public:
    static void init();
    static char getStartKey();
    static char getEndKey();
    static list<myDefine*> getDefineList();
private:
    Applycation();
    static char startKey;
    static char endKey;
    static list<myDefine>defineList;
};

#endif // APPLYCATION_H
