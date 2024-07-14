#ifndef NO_NAME_H
#define NO_NAME_H

#include <QDialog>

namespace Ui {
class no_name;
}

class no_name : public QDialog
{
    Q_OBJECT

public:
    explicit no_name(QWidget *parent = nullptr);
    ~no_name();

private slots:
    void on_exitBtn_clicked();

private:
    Ui::no_name *ui;
};

#endif // NO_NAME_H
