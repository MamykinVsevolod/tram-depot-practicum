QT       += core gui
QT       += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addformwidget.cpp \
    bookFile.cpp \
    deleteformwidget.cpp \
    main.cpp \
    mainformwidget.cpp \
    operation1widget.cpp \
    operation2widget.cpp \
    operation3widget.cpp \
    operation4widget.cpp \
    printformwidget.cpp

HEADERS += \
    addformwidget.h \
    bookFile.h \
    build-Add-Desktop_Qt_6_3_2_MinGW_64_bit-Debug/ui_operation1widget.h \
    deleteformwidget.h \
    mainformwidget.h \
    operation1widget.h \
    operation2widget.h \
    operation3widget.h \
    operation4widget.h \
    printformwidget.h

FORMS += \
    addformwidget.ui \
    deleteformwidget.ui \
    mainformwidget.ui \
    operation1widget.ui \
    operation2widget.ui \
    operation3widget.ui \
    operation4widget.ui \
    printformwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    Add.pro

DISTFILES += \
    Add.pro.user
