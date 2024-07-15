#ifndef KEYLISTENERBUTTON_H
#define KEYLISTENERBUTTON_H

#include <QPushButton>
#include <QKeyEvent>


class KeyListenerButton : public QPushButton
{
    Q_OBJECT
public:
    KeyListenerButton(const QString &text, QWidget *parent = nullptr);
    char getAsciiCode() const;

protected:

    void keyPressEvent(QKeyEvent *event) override;
    void focusOutEvent(QFocusEvent *event) override;

private:
    char asciiCode = 0;
    bool listening;

private slots:
    void startListening();
};


#endif // KEYLISTENERBUTTON_H
