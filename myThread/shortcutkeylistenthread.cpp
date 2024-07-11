#include "shortcutkeylistenthread.h"

ShortcutKeyListenThread::ShortcutKeyListenThread()
{

}

void ShortcutKeyListenThread::run(){
    while (1) {
        int ch;
        while (1){
            if (_kbhit()){//如果有按键按下，则_kbhit()函数返回真
                ch = _getch();//使用_getch()函数获取按下的键值
                if (ch == startKey){ DefineTrigerThread:: setFlag(true); }
                else if(ch==endKey){DefineTrigerThread::setFlag(false);}
            }
        }
    }
}

void ShortcutKeyListenThread::setStart(int start){
    this->startKey=start;
}

void ShortcutKeyListenThread::setEnd(int end){
    this->endKey=end;
}
