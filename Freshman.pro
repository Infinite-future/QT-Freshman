QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    a_erjiao.cpp \
    a_lijiao.cpp \
    a_liyi.cpp \
    a_sanjiao.cpp \
    a_sijiao.cpp \
    a_wenshi.cpp \
    a_yijiao.cpp \
    d_dongcemen.cpp \
    d_dongmen.cpp \
    d_dongnanmen.cpp \
    d_nanmen.cpp \
    d_xicemen.cpp \
    d_ximen.cpp \
    e_erti.cpp \
    e_qiudeba.cpp \
    e_wusi.cpp \
    e_wusiyumaoqiu.cpp \
    e_yiti.cpp \
    g_baijiang.cpp \
    g_tushuguan.cpp \
    g_xintaiyang.cpp \
    liaojiexuexiaodialog.cpp \
    main.cpp \
    freshmandialog.cpp \
    mapdialog.cpp \
    newdialog.cpp \
    picture10dialog.cpp \
    picture1dialog.cpp \
    picture2dialog.cpp \
    picture3dialog.cpp \
    picture4dialog.cpp \
    picture5dialog.cpp \
    picture6dialog.cpp \
    picture7dialog.cpp \
    picture8dialog.cpp \
    picture9dialog.cpp \
    shenghuofuwudialog.cpp \
    shitangchaoshidialog.cpp \
    timedialog.cpp \
    xiaoneifengjingdialog.cpp

HEADERS += \
    a_erjiao.h \
    a_lijiao.h \
    a_liyi.h \
    a_sanjiao.h \
    a_sijiao.h \
    a_wenshi.h \
    a_yijiao.h \
    d_dongcemen.h \
    d_dongmen.h \
    d_dongnanmen.h \
    d_nanmen.h \
    d_xicemen.h \
    d_ximen.h \
    e_erti.h \
    e_qiudeba.h \
    e_wusi.h \
    e_wusiyumaoqiu.h \
    e_yiti.h \
    freshmandialog.h \
    g_baijiang.h \
    g_tushuguan.h \
    g_xintaiyang.h \
    liaojiexuexiaodialog.h \
    mapdialog.h \
    newdialog.h \
    picture10dialog.h \
    picture1dialog.h \
    picture2dialog.h \
    picture3dialog.h \
    picture4dialog.h \
    picture5dialog.h \
    picture6dialog.h \
    picture7dialog.h \
    picture8dialog.h \
    picture9dialog.h \
    shenghuofuwudialog.h \
    shitangchaoshidialog.h \
    timedialog.h \
    xiaoneifengjingdialog.h

FORMS += \
    a_erjiao.ui \
    a_lijiao.ui \
    a_liyi.ui \
    a_sanjiao.ui \
    a_sijiao.ui \
    a_wenshi.ui \
    a_yijiao.ui \
    d_dongcemen.ui \
    d_dongmen.ui \
    d_dongnanmen.ui \
    d_nanmen.ui \
    d_xicemen.ui \
    d_ximen.ui \
    e_erti.ui \
    e_qiudeba.ui \
    e_wusi.ui \
    e_wusiyumaoqiu.ui \
    e_yiti.ui \
    freshmandialog.ui \
    g_baijiang.ui \
    g_tushuguan.ui \
    g_xintaiyang.ui \
    liaojiexuexiaodialog.ui \
    mapdialog.ui \
    newdialog.ui \
    picture10dialog.ui \
    picture1dialog.ui \
    picture2dialog.ui \
    picture3dialog.ui \
    picture4dialog.ui \
    picture5dialog.ui \
    picture6dialog.ui \
    picture7dialog.ui \
    picture8dialog.ui \
    picture9dialog.ui \
    shenghuofuwudialog.ui \
    shitangchaoshidialog.ui \
    timedialog.ui \
    xiaoneifengjingdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture.qrc
