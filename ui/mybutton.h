#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QWidget>
#include <QPushButton>

class myButton:public QPushButton
{
public:
    myButton();
    myButton(int i,const QString &text,QWidget *parent):index(i){
        QPushButton(text,parent);
    }
    int getIndex(){return index;}
private:
    int index;
};

#endif // MYBUTTON_H
