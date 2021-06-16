# MiniZIP functions

INCLUDEPATH += $${PWD}

HEADERS     += $${PWD}/crypt.h
HEADERS     += $${PWD}/ioapi.h
HEADERS     += $${PWD}/iowin32.h
HEADERS     += $${PWD}/mztools.h
HEADERS     += $${PWD}/unzip.h
HEADERS     += $${PWD}/zip.h

SOURCES     += $${PWD}/ioapi.c
SOURCES     += $${PWD}/iowin32.c
SOURCES     += $${PWD}/mztools.c
SOURCES     += $${PWD}/unzip.c
SOURCES     += $${PWD}/zip.c

OTHER_FILES += $${PWD}/miniunz.c
OTHER_FILES += $${PWD}/minizip.c
