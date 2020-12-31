QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
QMAKE_CXXFLAGS += -O2
#DEFINES += INTER_ELM327
DEFINES += INTER_CAN
# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    jsonparser.cpp \
    main.cpp \
    mainobd.cpp \
    obdbase.cpp \
    quit.cpp \
    simulaion.cpp \
    xmlparcer.cpp

HEADERS += \
    jsonparser.hpp \
    log.hpp \
    mainobd.hpp \
    obdbase.hpp \
    quit.hpp \
    simulaion.hpp \
    xmlparcer.hpp

FORMS += \
    mainobd.ui \
    quit.ui \
    simulaion.ui

TRANSLATIONS += \
    OBDII_Simulator_en_150.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

DISTFILES += \
    data/config.xml \
    data/config_js.json
