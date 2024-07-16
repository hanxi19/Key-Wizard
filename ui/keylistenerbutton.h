#ifndef KEYLISTENERBUTTON_H
#define KEYLISTENERBUTTON_H

#include <QPushButton>
#include <QKeyEvent>
#include <QMap>

class KeyListenerButton : public QPushButton {
    Q_OBJECT

public:
    KeyListenerButton(const QString &text, QWidget *parent = nullptr);

    char getAsciiCode() const;
    int getWindowsKeyCode() const;

signals:
    void keyPressed(QString keyText);

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void focusOutEvent(QFocusEvent *event) override;

private:
    bool listening;
    char asciiCode;
    QMap<int, int> qtToWindowsKeyMap;
    int windowsKeyCode;
    void startListening();
    int qtKeyToWindowsKey(int qtKeyCode);
    void initializeKeyMap();
};

#endif // KEYLISTENERBUTTON_H
