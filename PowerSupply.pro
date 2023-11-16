QT += qml quick charts
CONFIG += c++11 console

SOURCES += main.cpp \
    psmodel.cpp

RESOURCES += qml.qrc

HEADERS += \
    psmodel.h

RC_ICONS = ps.ico

DISTFILES += \
    ps.ico
#DESTDIR = D:\dest.rig.5.11
DESTDIR = D:\dest.powersupply.5.15.2
