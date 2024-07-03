#include "keydefine.h"
#include "QDebug"

KeyDefine::KeyDefine()
{

}

KeyDefine* KeyDefine::toObject(const string & data){
//    KeyDefine* define=new KeyDefine;
//    vector<int>numbers;
//    if(data.empty()){
//        return define;
//    }
//    istringstream iss(data);
//    int num;
//    while (iss >> num) {
//        numbers.push_back(num);
//    }
//    for(unsigned i=0;2*i<define-> keys.size();i++){
//        define-> keys.push_back(numbers[2*i]);
//        define-> times.push_back(numbers[2*i+1]);
//    }
//    return define;
    vector<int> nums;
    unsigned sum,i=0,k=0;
    while(i<data.length())//把是字符串s每个元素遍历一遍
    {
        sum=0;//每次循环要变回0
        while(isdigit(data[i]))//对数字
        {
            k=1;
            sum=sum*10+data[i++]-'0';//转整形
        }
        if(k==1){
            nums.push_back(sum);
        }

        k=0;//每次循环要变回0
        while(!isdigit(data[i]))i++;//对不是数字的：字母，符号。。。
    }

    KeyDefine* define=new KeyDefine;
    vector<int>keys;
    vector<int>times;
    for(unsigned i=0;i<nums.size()-1;i+=2){
        keys.push_back(nums[i+1]);
        times.push_back(nums[i]);
    }
    define->setKeys(keys);
    define->setTimes(times);
    return define;
}
string KeyDefine::toString()
{

    string data;
    for(unsigned i=0;i<this->keys.size();i++){
        data+=to_string(times[i]);
        data+=' ';
        data+=to_string(keys[i]);
        data+=' ';
    }
    qDebug()<<"the result of toString is:"+QString::fromStdString( data)<<endl;
    return data;
}
vector<int> KeyDefine::getKeys(){
    return this->keys;
}
vector<int> KeyDefine::getTimes(){
    return this->times;
}
void KeyDefine::setName(string name){
    this->name=name;
}
string KeyDefine::getName(){
    return this->name;
}
void KeyDefine::setKeys(char c){
    this->keys.push_back(c);
}
void KeyDefine::setKeys(vector<int> keys){
    this->keys=keys;
}
void KeyDefine::setTimes(int time){
    this->times.push_back(time);
}
void KeyDefine::setTimes(vector<int> times){
    this->times=times;
}
void KeyDefine::save(){

}
