#ifndef SHORTCUTKEYLISTENTHREAD_H
#define SHORTCUTKEYLISTENTHREAD_H
#include "QThread"
#include <conio.h>
#include "definetrigerthread.h"

class ShortcutKeyListenThread:public QThread
{
public:
    ShortcutKeyListenThread();
    ShortcutKeyListenThread(int start,int end);
    void run() override;
    static void setStart(int start);
    static void setEnd(int end);
private:
    static int startKey;
    static int endKey;
};

#endif // SHORTCUTKEYLISTENTHREAD_H
