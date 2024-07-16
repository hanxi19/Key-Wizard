#ifndef NOTRECORDING_H
#define NOTRECORDING_H

#include <QDialog>

namespace Ui {
class notRecording;
}

class notRecording : public QDialog
{
    Q_OBJECT

public:
    explicit notRecording(QWidget *parent = nullptr);
    ~notRecording();

private slots:
    void on_pushButton_clicked();

private:
    Ui::notRecording *ui;
};

#endif // NOTRECORDING_H
