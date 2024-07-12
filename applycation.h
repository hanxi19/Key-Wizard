#ifndef APPLYCATION_H
#define APPLYCATION_H
#include <list>
#include "..\POJO\mydefine.h"
#include "data/mysql.h"
#include "util/myfile.h"
#include "myThread/shortcutkeylistenthread.h"
#include "myThread/definetrigerthread.h"

class Applycation
{
public:
    static void init();
    static int getStartKey();
    static int getEndKey();
    static vector<myDefine*>* getDefineList();
    static void setStartKey(int key);
    static void setEndKey(int key);
private:
    Applycation();
    static int startKey;
    static int endKey;
    static vector<myDefine*>*defineList;
};

#endif // APPLYCATION_H
