QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = deepines-template2
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11 link_pkgconfig
PKGCONFIG += dtkwidget

SOURCES += \
        main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS +=

RESOURCES += \
    imgs.qrc
