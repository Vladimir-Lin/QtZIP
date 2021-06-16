NAME         = QtZIP
TARGET       = $${NAME}
QT           = core
QT          -= gui
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/QtZIP

include ($${PWD}/zip/zip.pri)

HEADERS     += $${PWD}/../../include/QtZIP/QtZIP
HEADERS     += $${PWD}/../../include/QtZIP/qtzip.h

SOURCES     += $${PWD}/qtzip.cpp
SOURCES     += $${PWD}/ScriptableZIP.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)
