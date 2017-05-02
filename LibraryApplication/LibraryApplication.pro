QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LibraryApp
TEMPLATE = app


SOURCES += main.cpp \
    sign_up_activity.cpp \
    sign_in_activity.cpp \
    start_activity.cpp \
    account.cpp \
    user.cpp

HEADERS  += sign_up_activity.h \
    data_default.h \
    sign_in_activity.h \
    qt_library.h \
    start_activity.h \
    account.h \
    user.h
