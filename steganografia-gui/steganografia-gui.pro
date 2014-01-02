#-------------------------------------------------
#
# Project created by QtCreator 2013-12-24T20:50:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = steganografia-gui
TEMPLATE = app


SOURCES +=\
        mainwindow.cpp \
    ../src/color.cc \
    ../src/image.cc \
    ../src/pixel.cc \
    ../src/utils.cc \
    main.cpp

HEADERS  += mainwindow.h \
    ../src/color.h \
    ../src/image.h \
    ../src/pixel.h \
    ../src/utils.h

FORMS    += mainwindow.ui
