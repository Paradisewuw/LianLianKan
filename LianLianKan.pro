# LianLianKan.pro

QT       += core gui widgets multimedia sql
CONFIG   += c++11

TARGET = LianLianKan
TEMPLATE = app

#======================================================================
# UI / 表现层
#======================================================================
FORMS += \
    UI/MainWindow.ui

HEADERS += \
    UI/MainWindow.h

SOURCES += \
    UI/MainWindow.cpp

#======================================================================
# Core / 业务逻辑层
#======================================================================
HEADERS += \
    Core/GameDefines.h \
    Core/GameController.h \
    Core/GameBoard.h \
    Core/PathFinder.h

SOURCES += \
    Core/GameController.cpp \
    Core/GameBoard.cpp \
    Core/PathFinder.cpp

#======================================================================
# Data / 数据访问层
#======================================================================
HEADERS += \
    Data/DatabaseManager.h \
    Data/GameRecordData.h

SOURCES += \
    Data/DatabaseManager.cpp \
    Data/GameRecordData.cpp

#======================================================================
# 主程序入口和资源
#======================================================================
SOURCES += \
    main.cpp

RESOURCES += \
    Resources/resources.qrc
