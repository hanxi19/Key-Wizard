#ifndef SHOWKEYANDINTERVAL_H
#define SHOWKEYANDINTERVAL_H

#include <QDialog>

namespace Ui {
class showKeyandInterval;
}

class showKeyandInterval : public QDialog
{
    Q_OBJECT

public:
    explicit showKeyandInterval(QWidget *parent = nullptr);
    ~showKeyandInterval();

private slots:
    void on_completeButton_clicked();

private:
    Ui::showKeyandInterval *ui;

private slots:
    void getKeyandInterval(QString);
};

#endif // SHOWKEYANDINTERVAL_H
