QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cred.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    ../backend/calc.c \
    ../backend/stack.c \
    ../backend/validate.c \
    ../backend/priority.c \
    ../backend/credit.c

HEADERS += \
    ../backend/credit.h \
    cred.h \
    mainwindow.h \
    qcustomplot.h \
    ../backend/calc.h \
    ui_mainwindow.h \
    ui_cred.h

FORMS += \
    cred.ui \
    mainwindow.ui

CONFIG += lrelease
CONFIG += embed_translation

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
