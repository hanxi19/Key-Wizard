#include "keydefine.h"

KeyDefine::KeyDefine()
{

}
KeyDefine& KeyDefine::toObject(const string & data){
    vector<int>numbers;
    if(data.empty()){
        return *this;
    }
    istringstream iss(data);
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }
    for(unsigned i=0;2*i<keys.size();i++){
        keys.push_back(numbers[2*i]);
        times.push_back(numbers[2*i+1]);
    }
    return *this;
}
string KeyDefine::toString(const KeyDefine & regord)
{

    string data;
    for(unsigned i=0;i<regord.keys.size();i++){
        data+=keys[i];
        data+=' ';
        data+=to_string(regord.times[i]);
    }
    return data;
}
vector<char> KeyDefine::getKeys(){
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
void KeyDefine::setTimes(int time){
    this->times.push_back(time);
}
void KeyDefine::save(){

}
