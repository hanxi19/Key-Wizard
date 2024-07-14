#ifndef KEYECHOLINEEDIT_H
#define KEYECHOLINEEDIT_H

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QKeyEvent>
#include <QLabel>
class KeyEchoLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit KeyEchoLineEdit(QWidget* parent = nullptr);
    char getAsciiCode() const;
protected:
    void keyPressEvent(QKeyEvent *event) override ;

    void keyReleaseEvent(QKeyEvent *event) override;

private:
    QLabel *label;
    char asciiCode;
};

#endif // KEYECHOLINEEDIT_H
