QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    ratinga.cpp \
    ratingb.cpp \
    ratingc.cpp \
    ratingd.cpp \
    ratinge.cpp \
    scoredlg.cpp

HEADERS += \
    mainwindow.h \
    ratinga.h \
    ratingb.h \
    ratingc.h \
    ratingd.h \
    ratinge.h \
    scoredlg.h

FORMS += \
    mainwindow.ui \
    ratinga.ui \
    ratingb.ui \
    ratingc.ui \
    ratingd.ui \
    ratinge.ui \
    scoredlg.ui

TARGET = B1

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pic.qrc
