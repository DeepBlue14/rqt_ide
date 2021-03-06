# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = ide_old
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets xml webkit
SOURCES += src/Build.cpp src/CentralGui.cpp src/CodeFoldingArea.cpp src/CustomMsgsGui.cpp src/DebugActions.cpp src/DebugGui.cpp src/DebugToolbar.cpp src/DetectOnStart.cpp src/DirPropGui.cpp src/Directory.cpp src/ExeData.cpp src/FTDirMenu.cpp src/FTFileMenu.cpp src/FTProjectMenu.cpp src/FTPropertiesGui.cpp src/FetchWebSource.cpp src/FileGui.cpp src/FilePropGui.cpp src/FileTreeGui.cpp src/FindRospackPkgs.cpp src/HelpGui.cpp src/HelpPage_1.cpp src/HelpPage_2.cpp src/HelpPage_3.cpp src/HelpPage_4.cpp src/Highlighter.cpp src/LineNumberArea.cpp src/LinkFileWithGui.cpp src/LoadTemplate.cpp src/MasterActions.cpp src/MasterActionsEast.cpp src/MasterActionsNorth.cpp src/MasterActionsSouth.cpp src/MasterActionsWest.cpp src/MasterGui.cpp src/MasterMenus.cpp src/MasterStatusBar.cpp src/MasterToolBars.cpp src/MasterToolBtns.cpp src/MirrorChar.cpp src/MiscHelpers.cpp src/ModTemplate.cpp src/ModifyCMakeLists.cpp src/ModifyManifest.cpp src/MsgDirDat.cpp src/MsgFieldDat.cpp src/MsgFileDat.cpp src/MsgParser.cpp src/NavigatorGui.cpp src/NewFileGui.cpp src/NewFilePage_1.cpp src/NewFilePage_2.cpp src/NewFilePage_3.cpp src/NewFilePage_4.cpp src/NewProjectGui.cpp src/NewProjectPage_1.cpp src/NewProjectPage_2.cpp src/NewProjectPage_3.cpp src/NewProjectPage_4.cpp src/NewRosWsGui.cpp src/NewRosWsPage_1.cpp src/OpenProjectGui.cpp src/OpeningGui.cpp src/OptionGui.cpp src/OptionPage_1.cpp src/OutputGui.cpp src/PageModAbc.cpp src/ParseFontConfigXml.cpp src/PhysicalAttribLog.cpp src/PkgManagerGui.cpp src/PkgManagerTabs.cpp src/ProjPropGui.cpp src/QXTerm.cpp src/RFile.cpp src/RProcess.cpp src/RTerm.cpp src/RideEnv.cpp src/RideFont.cpp src/RosEnv.cpp src/RunBtnMenu.cpp src/RunData.cpp src/RunPanelGui.cpp src/RunSetupGui.cpp src/RunSetupPage_1.cpp src/RunSetupPage_2.cpp src/RunSetupPage_3.cpp src/Saver.cpp src/SearchType.cpp src/SearchWidget.cpp src/SplashScreen.cpp src/TabGui.cpp src/TextReplacer.cpp src/ThemeDat.cpp src/ThemeTxtElem.cpp src/Timer.cpp src/TreeItemIconInit.cpp src/UnitTests.cpp src/UnixConsoleText.cpp src/WindowsConsoleText.cpp src/XmlMaster.cpp src/main.cpp
HEADERS += src/Build.h src/CentralGui.h src/CodeFoldingArea.h src/CustomMsgsGui.h src/DebugActions.h src/DebugGui.h src/DebugToolbar.h src/DetectOnStart.h src/DirPropGui.h src/Directory.h src/ExeData.h src/FTDirMenu.h src/FTFileMenu.h src/FTProjectMenu.h src/FTPropertiesGui.h src/FetchWebSource.h src/FileGui.h src/FilePropGui.h src/FileTreeGui.h src/FindRospackPkgs.h src/HelpGui.h src/HelpPage_1.h src/HelpPage_2.h src/HelpPage_3.h src/HelpPage_4.h src/Highlighter.h src/LineNumberArea.h src/LinkFileWithGui.h src/LoadTemplate.h src/MasterActions.h src/MasterActionsEast.h src/MasterActionsNorth.h src/MasterActionsSouth.h src/MasterActionsWest.h src/MasterGui.h src/MasterMenus.h src/MasterStatusBar.h src/MasterToolBars.h src/MasterToolBtns.h src/MirrorChar.h src/MiscHelpers.h src/ModTemplate.h src/ModifyCMakeLists.h src/ModifyManifest.h src/MsgDirDat.h src/MsgFieldDat.h src/MsgFileDat.h src/MsgParser.h src/NavigatorGui.h src/NewFileGui.h src/NewFilePage_1.h src/NewFilePage_2.h src/NewFilePage_3.h src/NewFilePage_4.h src/NewProjectGui.h src/NewProjectPage_1.h src/NewProjectPage_2.h src/NewProjectPage_3.h src/NewProjectPage_4.h src/NewRosWsGui.h src/NewRosWsPage_1.h src/OpenProjectGui.h src/OpeningGui.h src/OptionGui.h src/OptionPage_1.h src/OutputGui.h src/PageModAbc.h src/ParseFontConfigXml.h src/PhysicalAttribLog.h src/PkgManagerGui.h src/PkgManagerTabs.h src/ProjPropGui.h src/QXTerm.h src/RFile.h src/RProcess.h src/RTerm.h src/RideEnv.h src/RideFont.h src/RosEnv.h src/RunBtnMenu.h src/RunData.h src/RunPanelGui.h src/RunSetupGui.h src/RunSetupPage_1.h src/RunSetupPage_2.h src/RunSetupPage_3.h src/Saver.h src/SearchType.h src/SearchWidget.h src/SplashScreen.h src/TabGui.h src/TextReplacer.h src/ThemeDat.h src/ThemeTxtElem.h src/Timer.h src/TreeItemIconInit.h src/UnixConsoleText.h src/WindowsConsoleText.h src/XmlMaster.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = src/moc
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += -lX11  
greaterThan(QT_MAJOR_VERSION, 4) {
QT += webkitwidgets
}
