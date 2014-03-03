#-------------------------------------------------
#
# Project created by QtCreator 2014-03-03T15:14:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EditTools
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    playerwidget.cpp \
    typeswidget.cpp \
    blockswidget.cpp \
    enemieswidget.cpp \
    finalblockwidget.cpp \
    targetwidget.cpp \
    fileform.cpp

HEADERS  += mainwindow.h \
    playerwidget.h \
    typeswidget.h \
    blockswidget.h \
    enemieswidget.h \
    finalblockwidget.h \
    targetwidget.h \
    fileform.h

FORMS    += mainwindow.ui \
    playerwidget.ui \
    typeswidget.ui \
    blockswidget.ui \
    enemieswidget.ui \
    finalblockwidget.ui \
    targetwidget.ui \
    fileform.ui
