#ifndef MYDEFINE_H
#define MYDEFINE_H
#include <vector>
#include<string>
using namespace std;

class myDefine
{
public:
    myDefine();


    virtual void setName(string name)=0;
    virtual string getName()=0;
    virtual void save()=0;

};

#endif // MYDEFINE_H
