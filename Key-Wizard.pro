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
    POJO/keydefine.cpp \
    POJO/mousedefine.cpp \
    POJO/mydefine.cpp \
    applycation.cpp \
    data/mysql.cpp \
    main.cpp \
    mainwindow.cpp \
    ui/add_customize_widget.cpp \
    ui/add_quickclick_widget.cpp \
    ui/add_record_widget.cpp \
    ui/add_widget.cpp \
    ui/save_success.cpp \
    ui/set_widget.cpp \
    ui/triger_widget.cpp

HEADERS += \
    POJO/keydefine.h \
    POJO/mousedefine.h \
    POJO/mydefine.h \
    applycation.h \
    data/mysql.h \
    mainwindow.h \
    ui/add_customize_widget.h \
    ui/add_quickclick_widget.h \
    ui/add_record_widget.h \
    ui/add_widget.h \
    ui/save_success.h \
    ui/set_widget.h \
    ui/triger_widget.h

FORMS += \
    mainwindow.ui \
    ui/add_customize_widget.ui \
    ui/add_quickclick_widget.ui \
    ui/add_record_widget.ui \
    ui/add_widget.ui \
    ui/save_success.ui \
    ui/set_widget.ui \
    ui/triger_widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    applycation.txt
