QT       += core gui

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

SOURCES += \
    Cargo.cpp \
    Passenger.cpp \
    Tickets.cpp \
    Trip.cpp \
    addcargoform.cpp \
    addpassengerform.cpp \
    adminmenuwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    menuwindow.cpp \
    passengermenuwindow.cpp \
    showcargotablewindow.cpp \
    showpassengertablewindow.cpp \
    takecargoticketform.cpp \
    takepassengerticketform.cpp

HEADERS += \
    Cargo.h \
    Exception.h \
    File.h \
    List.h \
    Passenger.h \
    Tickets.h \
    Trip.h \
    addcargoform.h \
    addpassengerform.h \
    adminmenuwindow.h \
    clickException.h \
    mainwindow.h \
    menuwindow.h \
    passengermenuwindow.h \
    showcargotablewindow.h \
    showpassengertablewindow.h \
    takecargoticketform.h \
    takepassengerticketform.h \
    ui_addpassengerform.h \
    ui_adminmenuwindow.h \
    ui_mainwindow.h \
    ui_menuwindow.h \
    ui_passengermenuwindow.h \
    ui_showcargotablewindow.h \
    ui_showpassengertablewindow.h \
    ui_takecargoticketform.h \
    ui_takepassengerticketform.h

FORMS += \
    addcargoform.ui \
    addpassengerform.ui \
    adminmenuwindow.ui \
    mainwindow.ui \
    menuwindow.ui \
    passengermenuwindow.ui \
    showcargotablewindow.ui \
    showpassengertablewindow.ui \
    takecargoticketform.ui \
    takepassengerticketform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    Train.pro

DISTFILES += \
    Train.pro.user
