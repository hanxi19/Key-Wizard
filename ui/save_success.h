#ifndef SAVE_SUCCESS_H
#define SAVE_SUCCESS_H
#include <QDialog>

namespace Ui {
class save_success;
}

class save_success : public QDialog
{
    Q_OBJECT

public:
    explicit save_success(QWidget *parent = nullptr);
    ~save_success();

private slots:
    void on_exitBtn_clicked();

private:
    Ui::save_success *ui;
};


#endif // SAVE_SUCCESS_H
