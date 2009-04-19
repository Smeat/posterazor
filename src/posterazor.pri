VPATH = $$PWD
INCLUDEPATH += \
    $$PWD

SOURCES += \
    controller.cpp \
    mainwindow.cpp \
    paintcanvas.cpp \
    pdfwriter.cpp \
    posterazorcore.cpp \
    snapspinbox.cpp \
    types.cpp \
    wizardcontroller.cpp \
    main.cpp

HEADERS += \
    controller.h \
    imageloaderinterface.h \
    mainwindow.h \
    paintcanvas.h \
    paintcanvasinterface.h \
    pdfwriter.h \
    posterazorcore.h \
    snapspinbox.h \
    types.h \
    wizardcontroller.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    posterazor.qrc

TRANSLATIONS += \
    de.ts \
    en.ts \
    es.ts \
    fi.ts \
    fr.ts \
    it.ts \
    nl.ts \
    pl.ts \
    pt_BR.ts \
    pt_PT.ts \
    zh_CN.ts