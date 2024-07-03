#ifndef KEYDEFINE_H
#define KEYDEFINE_H
#include "mydefine.h"
#include <vector>
#include<string>
#include <sstream>
#include <iostream>
using namespace std;
class KeyDefine:public myDefine{
public:
    KeyDefine();
    static KeyDefine* toObject(const string & data);
    string toString(const KeyDefine & regord);
    string toString();
    vector<int> getKeys();
    vector<int> getTimes();
    void setName(string name) override;
    string getName() override;
    void setKeys(vector<int> keys);
    void setKeys(char c);
    void setTimes(vector<int> times);
    void setTimes(int time);
    void save() override;
    int getId(){return id;};
    void setId(int id){this->id=id;};

private:
    vector<int>keys; //键的名称，以ascii码存储
    vector<int>times; //两个键之间的时间间隔
    string name;
    int id;
};

#endif // KEYDEFINE_H
