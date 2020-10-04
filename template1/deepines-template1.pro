QT       += core gui concurrent svg

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

TARGET = deepines-template1
EMPLATE = app

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
