TEMPLATE = lib

CONFIG   += c++11

DEFINES += SRC_LIBRARY

HEADERS += \
    scripts.h \
    chapter.h \
    section.h \
    subsection.h \
    iocontents.h \
    content.h

SOURCES += \
    scripts.cpp \
    chapter.cpp \
    section.cpp \
    subsection.cpp \
    iocontents.cpp \
    content.cpp
