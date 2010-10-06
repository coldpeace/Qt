# -------------------------------------------------
# Project created by QtCreator 2010-06-28T17:14:52
# -------------------------------------------------
QT += network \
    opengl \
    script \
    webkit \
    xml \
    xmlpatterns
TARGET = SGCreator
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    sgframe.cpp \
    wizard.cpp \
    xmlreader.cpp \
    helpframe.cpp \
    displayer.cpp \
    mytextedit.cpp \
    setting.cpp
HEADERS += mainwindow.h \
    sgframe.h \
    wizard.h \
    xmlreader.h \
    helpframe.h \
    displayer.h \
    mytextedit.h \
    setting.h
FORMS += mainwindow.ui \
    sgframe.ui \
    wizard.ui \
    helpframe.ui \
    displayer.ui \
    setting.ui
RESOURCES += resources.qrc
