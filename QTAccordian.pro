#-------------------------------------------------
#
# Project created by QtCreator 2016-09-22T12:40:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTAccordian
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    accordian.cpp \
    transformview.cpp \
    hfloatslider.cpp \
    colorpickerwidget.cpp

HEADERS  += mainwindow.h \
    accordian.h \
    transformview.h \
    hfloatslider.h \
    colorpickerwidget.h

FORMS    += mainwindow.ui \
    accordian.ui \
    transformview.ui \
    hfloatslider.ui \
    colorpickerwidget.ui

RESOURCES += \
    icons.qrc
