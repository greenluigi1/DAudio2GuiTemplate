QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ccosutils.cpp \
    exampleeventreceiver.cpp \
    exampleguiapplication.cpp \
    exampleguiappview.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ccosutils.h \
    exampleeventreceiver.h \
    exampleguiapplication.h \
    exampleguiappview.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#QMAKE_CXXFLAGS += -nodefaultlibs
#QMAKE_CXXFLAGS += -D_GLIBCXX_USE_CXX11_ABI=0 -v

unix:!macx: LIBS += -lstdc++

unix:!macx: LIBS += -lhelix

unix:!macx: LIBS += -lhelixqt

unix:!macx: LIBS += -lHVehicle

unix:!macx: LIBS += -llog

#unix:!macx: LIBS += -lc

#unix:!macx: LIBS += -lgcc_s

#unix:!macx: LIBS += -lgcc

DISTFILES += \
    GuiExampleApp.appconf \
    installApp.sh
