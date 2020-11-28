TEMPLATE = app

QT += qml quick charts
CONFIG += c++11 console

SOURCES += main.cpp \
    psmodel.cpp \
    main.cpp \
    psmodel.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    psmodel.h \
    psmodel.h

RC_ICONS = ps.ico

DISTFILES += \
    ps.ico
#DESTDIR = D:\dest.rig.5.11
DESTDIR = D:\dest.rig.5.12.msvc
Kit=$$[QT_INSTALL_PREFIX]
equals(Kit,"C:/Qt/5.15.1/msvc2019_64"){
    message("Kit for 64 bit MSVC2019")
    DESTDIR = d:\dest.mgm7.5.15.msvc
}
