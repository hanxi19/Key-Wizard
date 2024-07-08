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
HHOOK KeyDefine::keyboardHook = NULL;
DWORD KeyDefine::lastKeyUpTick = 0;
bool KeyDefine::keyRecorded = false;
int KeyDefine::keyvcode=0;
int KeyDefine::keyintervaltime=0;
KeyDefine* KeyDefine::instance=nullptr;
void KeyDefine::setInstance(KeyDefine* ptr){
          instance = ptr;
      }
LRESULT CALLBACK KeyDefine::KeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
    PKBDLLHOOKSTRUCT p = (PKBDLLHOOKSTRUCT)lParam;

    if (nCode == HC_ACTION) {

            DWORD tick = GetTickCount();

            if (!keyRecorded) { // 如果键值尚未记录
                if ((wParam == WM_KEYDOWN) || (wParam == WM_SYSKEYDOWN)) {
                    keyRecorded = true; // 标记键值已被记录
                    // 将键值转换为字符并添加到keys数组中
                    //char key = MapVirtualKey(p->vkCode, MAPVK_VK_TO_CHAR);
                   // qDebug() << "The press key: " << key << endl;
                    instance->keys.push_back(p->vkCode);
                    if (lastKeyUpTick != 0) {
                        // 计算按键抬起到当前按键按下的时间间隔
                        DWORD interval = tick - lastKeyUpTick;
                        instance->times.push_back(interval);
                      //  qDebug() << "Key press interval: " << interval << " ms" << endl;
                    }
                    // 重置上一次按键抬起的时间
                    lastKeyUpTick = 0;
                }
            } else {
                if ((wParam == WM_KEYUP) || (wParam == WM_SYSKEYDOWN)) {
                    keyRecorded = false; // 重置标志位，准备记录下一个键值
                }
                 lastKeyUpTick = tick;
            }

        }
    return CallNextHookEx(keyboardHook, nCode, wParam, lParam);
}
void KeyDefine::regord(){
    keyRecorded = false;

    KeyDefine::setInstance(this);
    MSG Msg;

    // 设置键盘全局监听
    keyboardHook = SetWindowsHookEx(
        WH_KEYBOARD_LL,  // 监听键盘类型
        KeyboardProc,	 // 处理函数
        NULL,		     // 当前实例句柄
        0				 // 监听窗口句柄
    );

    if (keyboardHook == NULL) {
        cout << "键盘监听失败！error : " << GetLastError() << endl;
    }

    // 消息循环

    while (GetMessage(&Msg, NULL, 0, 0) > 0) {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }

    return ;
}
void KeyDefine::end() {
        PostQuitMessage(0);; // 停止录制
    }

