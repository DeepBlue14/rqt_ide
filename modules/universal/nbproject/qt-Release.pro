# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = universal
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += src/Env.cpp src/OverriddenOperators.cpp src/UnixConsoleText.cpp src/WindowsConsoleText.cpp src/main.cpp
HEADERS += src/CustomizableConsoleText.h src/Env.h src/OverriddenOperators.h src/UnixConsoleText.h src/WindowsConsoleText.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
