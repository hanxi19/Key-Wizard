#ifndef INPUT_INCOMPLETE_H
#define INPUT_INCOMPLETE_H

#include <QDialog>

namespace Ui {
class input_incomplete;
}

class input_incomplete : public QDialog
{
    Q_OBJECT

public:
    explicit input_incomplete(QWidget *parent = nullptr);
    ~input_incomplete();

private slots:
    void on_exitBtn_clicked();

private:
    Ui::input_incomplete *ui;
};

#endif // INPUT_INCOMPLETE_H
