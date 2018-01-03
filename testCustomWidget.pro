#-------------------------------------------------
#
# Project created by QtCreator 2018-01-02T16:13:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testCustomWidget
TEMPLATE = app


SOURCES += main.cpp\
        mycustomwidget.cpp

HEADERS  += mycustomwidget.h

FORMS    += mycustomwidget.ui

INCLUDEPATH +=$$PWD/include
LIBS +=$$PWD/lib/libcustomwidgetlistplugin.a
