#include "add_widget.h"
#include "ui_add_widget.h"

add_widget::add_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_widget)
{
    ui->setupUi(this);

    auto f = [this](){
        //添加一个写有保存成功的小窗？
        //关掉连点器窗口，回到主窗口
        m_quickclick->hide();
        show();

    };
    connect(m_quickclick, &add_quickClick_widget::sendSaveSuccess, this, f);
}

add_widget::~add_widget()
{
    delete ui;
}
