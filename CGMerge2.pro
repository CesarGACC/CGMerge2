#-------------------------------------------------
#
# Project created by QtCreator 2018-10-16T03:29:02
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CGMerge2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    src/app/objects/SnowMan.cpp \
    src/core/camera/Camera.cpp \
    src/core/color/Color.cpp \
    src/core/intersect/intersect.cpp \
    src/core/light/Light.cpp \
    src/core/material/Material.cpp \
    src/core/math/Edge3f.cpp \
    src/core/math/Face3f.cpp \
    src/core/math/TMatrix.cpp \
    src/core/math/Vertex3f.cpp \
    src/core/objects/geometric/GSphere.cpp \
    src/core/objects/meshes/MCube.cpp \
    src/core/objects/meshes/MTriangle.cpp \
    src/core/objects/Object.cpp \
    src/core/renderer/RayCasting.cpp \
    src/core/scenery/Scenery.cpp \
    src/util/background.cpp \
    src/util/util.cpp


HEADERS += \
    mainwindow.h \
    src/app/objects/SnowMan.h \
    src/core/camera/Camera.h \
    src/core/color/Color.h \
    src/core/intersect/intersect.h \
    src/core/light/Light.h \
    src/core/material/Material.h \
    src/core/math/Edge3f.h \
    src/core/math/Face3f.h \
    src/core/math/TMatrix.h \
    src/core/math/Vertex3f.h \
    src/core/objects/geometric/GSphere.h \
    src/core/objects/meshes/MCube.h \
    src/core/objects/meshes/MTriangle.h \
    src/core/objects/Object.h \
    src/core/renderer/RayCasting.h \
    src/core/scenery/Scenery.h \
    src/util/background.h \
    src/util/util.h



FORMS += \
        mainwindow.ui

DISTFILES += \
    README.md

LIBS += -lOpengl32 -lglu32 -opengl -lglut
#-lglu -lGLU

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'DevIL Windows SDK/lib/x64/release/' -lDevIL
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'DevIL Windows SDK/lib/x64/debug/' -lDevIL
else:unix: LIBS += -L$$PWD/'DevIL Windows SDK/lib/x64/' -lDevIL

INCLUDEPATH += $$PWD/'DevIL Windows SDK/lib/x64/Release'
DEPENDPATH += $$PWD/'DevIL Windows SDK/lib/x64/Release'

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'DevIL Windows SDK/lib/x64/release/' -lILU
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'DevIL Windows SDK/lib/x64/debug/' -lILU
else:unix: LIBS += -L$$PWD/'DevIL Windows SDK/lib/x64/' -lILU

INCLUDEPATH += $$PWD/'DevIL Windows SDK/lib/x64/Release'
DEPENDPATH += $$PWD/'DevIL Windows SDK/lib/x64/Release'

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'DevIL Windows SDK/lib/x64/release/' -lILUT
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'DevIL Windows SDK/lib/x64/debug/' -lILUT
else:unix: LIBS += -L$$PWD/'DevIL Windows SDK/lib/x64/' -lILUT

INCLUDEPATH += $$PWD/'DevIL Windows SDK/lib/x64/Release'
DEPENDPATH += $$PWD/'DevIL Windows SDK/lib/x64/Release'

