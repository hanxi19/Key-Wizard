#ifndef KEYDEFINE_H
#define KEYDEFINE_H
#include "mydefine.h"
#include <vector>
#include<string>
#include <sstream>
#include <iostream>
#include<windows.h>
#include<QDebug>
#include<QString>
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

    static LRESULT CALLBACK KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam);
    static void setInstance(KeyDefine* ptr);
    void regord();
    void end();

    vector<int>keys; //键的名称，以ascii码存储
    vector<int>times; //两个键之间的时间间隔
private:
    //vector<int>keys; //键的名称，以ascii码存储
    //vector<int>times; //两个键之间的时间间隔
    string name;
    int id;

    //KeyboardProc函数实现中需要的参数
    static HHOOK keyboardHook;
    static DWORD lastKeyUpTick;
    static bool keyRecorded;
    //static变量传递静态函数KeyboardProc中的值给对象实例
    static int keyvcode;
    static int keyintervaltime;
    static KeyDefine* instance; // 静态实例指针用于将静态函数中的目标值导出
    //用于end函数
    bool isRecording;

};

#endif // KEYDEFINE_H
