#ifndef CUSTOMIZE_KEY_AND_INTERVAL_H
#define CUSTOMIZE_KEY_AND_INTERVAL_H

#include <QDialog>

namespace Ui {
class customize_key_and_interval;
}

class customize_key_and_interval : public QDialog
{
    Q_OBJECT

public:
    explicit customize_key_and_interval(QWidget *parent = nullptr);
    ~customize_key_and_interval();

private:
    Ui::customize_key_and_interval *ui;
};

#endif // CUSTOMIZE_KEY_AND_INTERVAL_H
