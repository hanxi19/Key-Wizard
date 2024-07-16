#include "set_widget.h"
#include "ui_set_widget.h"
#include"applycation.h"
#include "keylistenerbutton.h"
set_widget::set_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set_widget)
{
    ui->setupUi(this);
    startBtn = new KeyListenerButton("按下以记录开始快捷键", this);
    endBtn = new KeyListenerButton("按下以记录结束快捷键", this);
    startBtn->setGeometry(212, 59, 181, 41);
    endBtn->setGeometry(212, 115, 181, 41);
    connect(startBtn, &KeyListenerButton::keyPressed, this, [=](QString keyText)
    {
        int windowsKeyCode = startBtn->getWindowsKeyCode();
        Applycation::setStartKey(windowsKeyCode);

    });
    connect(endBtn, &KeyListenerButton::keyPressed, this, [=](QString keyText)
    {
        int windowsKeyCode = endBtn->getWindowsKeyCode();
        Applycation::setEndKey(windowsKeyCode);

    });
}
set_widget::~set_widget()
{
    delete ui;
}

