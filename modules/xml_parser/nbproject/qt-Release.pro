# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = xml_parser
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += src/ParseFontConfigXml.cpp src/RosEnv.cpp src/UnixConsoleText.cpp src/WindowsConsoleText.cpp src/XmlMaster.cpp src/main.cpp
HEADERS += src/ParseFontConfigXml.h src/RosEnv.h src/ThemeDat.h src/ThemeTxtElem.h src/UnixConsoleText.h src/WindowsConsoleText.h src/XmlMaster.h
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
