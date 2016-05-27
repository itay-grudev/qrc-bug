QT += core
QT -= gui

CONFIG += c++11

TARGET = qrc-bug
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

RESOURCES += \
    files.qrc

include( subproject/subproject.pri )
