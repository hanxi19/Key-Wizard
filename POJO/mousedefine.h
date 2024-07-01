#ifndef MOUSEDEFINE_H
#define MOUSEDEFINE_H
#include "mydefine.h"
#include <string>
using namespace std;
class MouseDefine:public myDefine
{
public:
    MouseDefine();
    MouseDefine(int keyType,int time);
    int getKeyType();
    int gettime();
    string getName() override;
    void setName(string name) override;
    void setKeyType(int type);
    void setTime(int time);
    void save() override;
    void setId(int id){this->id=id;};
    int getId(){return id;};

private:
    int keyType; //0:左键，1：右键，2：中键
    int time;//间隔时间
    string name;
    int id;
};

#endif // MOUSEDEFINE_H
