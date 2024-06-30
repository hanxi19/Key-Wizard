#ifndef KEYDEFINE_H
#define KEYDEFINE_H
#include "mydefine.h"
#include <vector>
#include<string>
using namespace std;
class KeyDefine:public myDefine{
public:
    KeyDefine();
    void toObject() override;
    void toString() override;
    vector<char> getKeys();
    vector<int> getTimes();
    void setKeys(vector<char> keys);
    void setTimes(vector<int> times);


private:
    vector<char>keys; //键的名称，以ascii码存储
    vector<int>times; //两个键之间的时间间隔
    string name;
};

#endif // KEYDEFINE_H
