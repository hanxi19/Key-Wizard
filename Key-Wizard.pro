QT       += core gui
QT+=sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH +=$$PWD/ui


SOURCES += \
    POJO/kctable.cpp \
    POJO/keydefine.cpp \
    POJO/mousedefine.cpp \
    POJO/mydefine.cpp \
    applycation.cpp \
    data/mysql.cpp \
    main.cpp \
    mainwindow.cpp \
    myThread/definetrigerthread.cpp \
    myThread/shortcutkeylistenthread.cpp \
    ui/add_customize_widget.cpp \
    ui/add_quickclick_widget.cpp \
    ui/add_record_widget.cpp \
    ui/add_widget.cpp \
    ui/customize_key_and_interval.cpp \
    ui/input_incomplete.cpp \
    ui/keyecholineedit.cpp \
    ui/keylistenerbutton.cpp \
    ui/no_name.cpp \
    ui/save_success.cpp \
    ui/set_widget.cpp \
    ui/soft_keyboard.cpp \
    ui/triger_widget.cpp \
    util/myfile.cpp \
    util/myjson.cpp \
    util/winkeyhook.cpp

HEADERS += \
    POJO/kctable.h \
    POJO/keydefine.h \
    POJO/mousedefine.h \
    POJO/mydefine.h \
    applycation.h \
    data/mysql.h \
    mainwindow.h \
    myThread/definetrigerthread.h \
    myThread/shortcutkeylistenthread.h \
    ui/add_customize_widget.h \
    ui/add_quickclick_widget.h \
    ui/add_record_widget.h \
    ui/add_widget.h \
    ui/customize_key_and_interval.h \
    ui/input_incomplete.h \
    ui/keyecholineedit.h \
    ui/keylistenerbutton.h \
    ui/no_name.h \
    ui/save_success.h \
    ui/set_widget.h \
    ui/soft_keyboard.h \
    ui/triger_widget.h \
    util/myfile.h \
    util/myjson.h \
    util/winkeyhook.h

FORMS += \
    mainwindow.ui \
    ui/add_customize_widget.ui \
    ui/add_quickclick_widget.ui \
    ui/add_record_widget.ui \
    ui/add_widget.ui \
    ui/customize_key_and_interval.ui \
    ui/input_incomplete.ui \
    ui/no_name.ui \
    ui/save_success.ui \
    ui/set_widget.ui \
    ui/soft_keyboard.ui \
    ui/triger_widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    applycation.txt
