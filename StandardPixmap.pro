QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StandardPixmap
TEMPLATE = app
CONFIG += C++11

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui
