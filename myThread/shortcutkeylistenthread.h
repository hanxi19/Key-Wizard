#ifndef SHORTCUTKEYLISTENTHREAD_H
#define SHORTCUTKEYLISTENTHREAD_H
#include "QThread"
#include <conio.h>
#include "definetrigerthread.h"

class ShortcutKeyListenThread:public QThread
{
public:
    ShortcutKeyListenThread();
    ShortcutKeyListenThread(int start,int end):startKey(start),endKey(end){}
    void run() override;
    void setStart(int start);
    void setEnd(int end);
private:
    int startKey;
    int endKey;
};

#endif // SHORTCUTKEYLISTENTHREAD_H
