#ifndef CUSTOMIZE_KEY_AND_INTERVAL_H
#define CUSTOMIZE_KEY_AND_INTERVAL_H

#include <QDialog>
#include "input_incomplete.h"

namespace Ui {
class customize_key_and_interval;
}

class customize_key_and_interval : public QDialog
{
    Q_OBJECT

public:
    explicit customize_key_and_interval(QWidget *parent = nullptr);
    ~customize_key_and_interval();

private slots:
    void on_completeBtn_clicked();

private:
    Ui::customize_key_and_interval *ui;
    input_incomplete* m_incomplete;
signals:
    void SignalSendKey(QString);
    void SignalSendInterval(QString);
};

#endif // CUSTOMIZE_KEY_AND_INTERVAL_H
