#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui

TARGET = TALLER_AUTOMOTRIZ
TEMPLATE = app


SOURCES += main.cpp\
    gui/mainwindow.cpp \
    gui/about.cpp \
    controlador/maincontroller.cpp \

HEADERS  += gui/mainwindow.h \
    gui/about.h \
    controlador/maincontroller.h \

FORMS    += gui/mainwindow.ui \
    gui/about.ui

RESOURCES += \
    gui/icons.qrc
