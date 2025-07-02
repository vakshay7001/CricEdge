QT       += core gui widgets charts network

CONFIG += c++17

SOURCES += \
    HomePage.cpp \
    addplayerpage.cpp \
    logic/livescorespage.cpp \
    logic/playermanager.cpp \
    main.cpp \
    mainwindow.cpp \
    playerlistpage.cpp



HEADERS += \
    HomePage.h \
    addplayerpage.h \
    logic/livescorespage.h \
    logic/playermanager.h \
    mainwindow.h \
    playerlistpage.h


FORMS += \
    HomePage.ui \
    addplayerpage.ui \
    logic/livescorespage.ui \
    mainwindow.ui \
    playerlistpage.ui

DISTFILES += \
    styles/dark.qss \
    data/final.csv

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources/resources.qrc
