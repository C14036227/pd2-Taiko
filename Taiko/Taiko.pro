#-------------------------------------------------
#
# Project created by QtCreator 2016-05-01T15:10:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Taiko
TEMPLATE = app


SOURCES += main.cpp\
        taiko.cpp \
    Scene.cpp \
    resultboard.cpp

HEADERS  += taiko.h \
    Scene.h \
    resultboard.h

FORMS    += taiko.ui \
    resultboard.ui

RESOURCES += \
    pics.qrc
