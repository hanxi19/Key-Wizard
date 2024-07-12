#ifndef TRIGER_WIDGET_H
#define TRIGER_WIDGET_H

#include <QWidget>
#include<QTableWidget>
#include<QHBoxLayout>
#include<QCheckBox>
#include<QLabel>
#include<QWidget>
#include<QApplication>
#include<QButtonGroup>

QT_BEGIN_NAMESPACE
namespace Ui { class triger_widget; }
QT_END_NAMESPACE

class triger_widget : public QWidget
{
    Q_OBJECT

public:
    explicit triger_widget(QWidget *parent = nullptr);
    ~triger_widget();

private:
    Ui::triger_widget *ui;
};
#endif // TRIGER_WIDGET_H

