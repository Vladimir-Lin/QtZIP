QT             = core
QT            -= gui
QT            += QtZIP

CONFIG(debug, debug|release) {
TARGET         = ziptoold
} else {
TARGET         = ziptool
}

CONFIG        += console

TEMPLATE       = app

SOURCES       += $${PWD}/ziptool.cpp

win32 {
RC_FILE        = $${PWD}/ziptool.rc
OTHER_FILES   += $${PWD}/ziptool.rc
OTHER_FILES   += $${PWD}/*.js
}
