#############################################################################
# Makefile for building: dist/Debug/GNU-Linux-x86/OutputUi
# Generated by qmake (2.01a) (Qt 4.8.6) on: Wed Dec 2 20:53:05 2015
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -Inbproject -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -Isrc/moc -Inbproject -I.
LINK          = g++
LFLAGS        = -m64
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-Linux-x86/

####### Files

SOURCES       = src/AbstractOutputToolBar.cpp \
		src/BuildDisplay.cpp \
		src/DebugGui.cpp \
		src/DebugToolbar.cpp \
		src/HtmlColorFactory.cpp \
		src/OutputToolbar.cpp \
		src/OutputUi.cpp \
		src/RosEnv.cpp \
		src/RunDisplay.cpp \
		src/RunToolbar.cpp \
		src/SigTextEdit.cpp \
		src/main.cpp src/moc/moc_AbstractOutputToolBar.cpp \
		src/moc/moc_BuildDisplay.cpp \
		src/moc/moc_DebugGui.cpp \
		src/moc/moc_DebugToolbar.cpp \
		src/moc/moc_OutputToolBar.cpp \
		src/moc/moc_OutputUi.cpp \
		src/moc/moc_RunDisplay.cpp \
		src/moc/moc_RunToolbar.cpp \
		src/moc/moc_SigTextEdit.cpp
OBJECTS       = build/Debug/GNU-Linux-x86/AbstractOutputToolBar.o \
		build/Debug/GNU-Linux-x86/BuildDisplay.o \
		build/Debug/GNU-Linux-x86/DebugGui.o \
		build/Debug/GNU-Linux-x86/DebugToolbar.o \
		build/Debug/GNU-Linux-x86/HtmlColorFactory.o \
		build/Debug/GNU-Linux-x86/OutputToolbar.o \
		build/Debug/GNU-Linux-x86/OutputUi.o \
		build/Debug/GNU-Linux-x86/RosEnv.o \
		build/Debug/GNU-Linux-x86/RunDisplay.o \
		build/Debug/GNU-Linux-x86/RunToolbar.o \
		build/Debug/GNU-Linux-x86/SigTextEdit.o \
		build/Debug/GNU-Linux-x86/main.o \
		build/Debug/GNU-Linux-x86/moc_AbstractOutputToolBar.o \
		build/Debug/GNU-Linux-x86/moc_BuildDisplay.o \
		build/Debug/GNU-Linux-x86/moc_DebugGui.o \
		build/Debug/GNU-Linux-x86/moc_DebugToolbar.o \
		build/Debug/GNU-Linux-x86/moc_OutputToolBar.o \
		build/Debug/GNU-Linux-x86/moc_OutputUi.o \
		build/Debug/GNU-Linux-x86/moc_RunDisplay.o \
		build/Debug/GNU-Linux-x86/moc_RunToolbar.o \
		build/Debug/GNU-Linux-x86/moc_SigTextEdit.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Debug.pro
QMAKE_TARGET  = OutputUi
DESTDIR       = dist/Debug/GNU-Linux-x86/
TARGET        = dist/Debug/GNU-Linux-x86/OutputUi

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Debug.mk $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Debug/GNU-Linux-x86/ || $(MKDIR) dist/Debug/GNU-Linux-x86/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

qttmp-Debug.mk: nbproject/qt-Debug.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist: 
	@$(CHK_DIR_EXISTS) build/Debug/GNU-Linux-x86/OutputUi1.0.0 || $(MKDIR) build/Debug/GNU-Linux-x86/OutputUi1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/Debug/GNU-Linux-x86/OutputUi1.0.0/ && $(COPY_FILE) --parents src/AbstractOutputToolBar.h src/BuildDisplay.h src/DebugGui.h src/DebugToolbar.h src/HtmlColorFactory.h src/OutputToolBar.h src/OutputUi.h src/RosEnv.h src/RunDisplay.h src/RunToolbar.h src/SigTextEdit.h build/Debug/GNU-Linux-x86/OutputUi1.0.0/ && $(COPY_FILE) --parents src/AbstractOutputToolBar.cpp src/BuildDisplay.cpp src/DebugGui.cpp src/DebugToolbar.cpp src/HtmlColorFactory.cpp src/OutputToolbar.cpp src/OutputUi.cpp src/RosEnv.cpp src/RunDisplay.cpp src/RunToolbar.cpp src/SigTextEdit.cpp src/main.cpp build/Debug/GNU-Linux-x86/OutputUi1.0.0/ && (cd `dirname build/Debug/GNU-Linux-x86/OutputUi1.0.0` && $(TAR) OutputUi1.0.0.tar OutputUi1.0.0 && $(COMPRESS) OutputUi1.0.0.tar) && $(MOVE) `dirname build/Debug/GNU-Linux-x86/OutputUi1.0.0`/OutputUi1.0.0.tar.gz . && $(DEL_FILE) -r build/Debug/GNU-Linux-x86/OutputUi1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Debug.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: src/moc/moc_AbstractOutputToolBar.cpp src/moc/moc_BuildDisplay.cpp src/moc/moc_DebugGui.cpp src/moc/moc_DebugToolbar.cpp src/moc/moc_OutputToolBar.cpp src/moc/moc_OutputUi.cpp src/moc/moc_RunDisplay.cpp src/moc/moc_RunToolbar.cpp src/moc/moc_SigTextEdit.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) src/moc/moc_AbstractOutputToolBar.cpp src/moc/moc_BuildDisplay.cpp src/moc/moc_DebugGui.cpp src/moc/moc_DebugToolbar.cpp src/moc/moc_OutputToolBar.cpp src/moc/moc_OutputUi.cpp src/moc/moc_RunDisplay.cpp src/moc/moc_RunToolbar.cpp src/moc/moc_SigTextEdit.cpp
src/moc/moc_AbstractOutputToolBar.cpp: src/RosEnv.h \
		src/AbstractOutputToolBar.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/AbstractOutputToolBar.h -o src/moc/moc_AbstractOutputToolBar.cpp

src/moc/moc_BuildDisplay.cpp: src/SigTextEdit.h \
		src/RunDisplay.h \
		src/RunToolbar.h \
		src/RosEnv.h \
		src/BuildDisplay.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/BuildDisplay.h -o src/moc/moc_BuildDisplay.cpp

src/moc/moc_DebugGui.cpp: src/DebugGui.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/DebugGui.h -o src/moc/moc_DebugGui.cpp

src/moc/moc_DebugToolbar.cpp: src/RosEnv.h \
		src/DebugToolbar.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/DebugToolbar.h -o src/moc/moc_DebugToolbar.cpp

src/moc/moc_OutputToolBar.cpp: src/RosEnv.h \
		src/OutputToolBar.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/OutputToolBar.h -o src/moc/moc_OutputToolBar.cpp

src/moc/moc_OutputUi.cpp: src/BuildDisplay.h \
		src/SigTextEdit.h \
		src/RunDisplay.h \
		src/RunToolbar.h \
		src/RosEnv.h \
		src/OutputToolBar.h \
		src/DebugToolbar.h \
		src/OutputUi.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/OutputUi.h -o src/moc/moc_OutputUi.cpp

src/moc/moc_RunDisplay.cpp: src/SigTextEdit.h \
		src/RunToolbar.h \
		src/RosEnv.h \
		src/RunDisplay.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/RunDisplay.h -o src/moc/moc_RunDisplay.cpp

src/moc/moc_RunToolbar.cpp: src/RosEnv.h \
		src/RunToolbar.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/RunToolbar.h -o src/moc/moc_RunToolbar.cpp

src/moc/moc_SigTextEdit.cpp: src/SigTextEdit.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/SigTextEdit.h -o src/moc/moc_SigTextEdit.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

build/Debug/GNU-Linux-x86/AbstractOutputToolBar.o: src/AbstractOutputToolBar.cpp src/AbstractOutputToolBar.h \
		src/RosEnv.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/AbstractOutputToolBar.o src/AbstractOutputToolBar.cpp

build/Debug/GNU-Linux-x86/BuildDisplay.o: src/BuildDisplay.cpp src/BuildDisplay.h \
		src/SigTextEdit.h \
		src/RunDisplay.h \
		src/RunToolbar.h \
		src/RosEnv.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/BuildDisplay.o src/BuildDisplay.cpp

build/Debug/GNU-Linux-x86/DebugGui.o: src/DebugGui.cpp src/DebugGui.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/DebugGui.o src/DebugGui.cpp

build/Debug/GNU-Linux-x86/DebugToolbar.o: src/DebugToolbar.cpp src/DebugToolbar.h \
		src/RosEnv.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/DebugToolbar.o src/DebugToolbar.cpp

build/Debug/GNU-Linux-x86/HtmlColorFactory.o: src/HtmlColorFactory.cpp src/HtmlColorFactory.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/HtmlColorFactory.o src/HtmlColorFactory.cpp

build/Debug/GNU-Linux-x86/OutputToolbar.o: src/OutputToolbar.cpp src/OutputToolBar.h \
		src/RosEnv.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/OutputToolbar.o src/OutputToolbar.cpp

build/Debug/GNU-Linux-x86/OutputUi.o: src/OutputUi.cpp src/OutputUi.h \
		src/BuildDisplay.h \
		src/SigTextEdit.h \
		src/RunDisplay.h \
		src/RunToolbar.h \
		src/RosEnv.h \
		src/OutputToolBar.h \
		src/DebugToolbar.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/OutputUi.o src/OutputUi.cpp

build/Debug/GNU-Linux-x86/RosEnv.o: src/RosEnv.cpp src/RosEnv.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/RosEnv.o src/RosEnv.cpp

build/Debug/GNU-Linux-x86/RunDisplay.o: src/RunDisplay.cpp src/RunDisplay.h \
		src/SigTextEdit.h \
		src/RunToolbar.h \
		src/RosEnv.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/RunDisplay.o src/RunDisplay.cpp

build/Debug/GNU-Linux-x86/RunToolbar.o: src/RunToolbar.cpp src/RunToolbar.h \
		src/RosEnv.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/RunToolbar.o src/RunToolbar.cpp

build/Debug/GNU-Linux-x86/SigTextEdit.o: src/SigTextEdit.cpp src/SigTextEdit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/SigTextEdit.o src/SigTextEdit.cpp

build/Debug/GNU-Linux-x86/main.o: src/main.cpp src/OutputUi.h \
		src/BuildDisplay.h \
		src/SigTextEdit.h \
		src/RunDisplay.h \
		src/RunToolbar.h \
		src/RosEnv.h \
		src/OutputToolBar.h \
		src/DebugToolbar.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main.o src/main.cpp

build/Debug/GNU-Linux-x86/moc_AbstractOutputToolBar.o: src/moc/moc_AbstractOutputToolBar.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_AbstractOutputToolBar.o src/moc/moc_AbstractOutputToolBar.cpp

build/Debug/GNU-Linux-x86/moc_BuildDisplay.o: src/moc/moc_BuildDisplay.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_BuildDisplay.o src/moc/moc_BuildDisplay.cpp

build/Debug/GNU-Linux-x86/moc_DebugGui.o: src/moc/moc_DebugGui.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_DebugGui.o src/moc/moc_DebugGui.cpp

build/Debug/GNU-Linux-x86/moc_DebugToolbar.o: src/moc/moc_DebugToolbar.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_DebugToolbar.o src/moc/moc_DebugToolbar.cpp

build/Debug/GNU-Linux-x86/moc_OutputToolBar.o: src/moc/moc_OutputToolBar.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_OutputToolBar.o src/moc/moc_OutputToolBar.cpp

build/Debug/GNU-Linux-x86/moc_OutputUi.o: src/moc/moc_OutputUi.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_OutputUi.o src/moc/moc_OutputUi.cpp

build/Debug/GNU-Linux-x86/moc_RunDisplay.o: src/moc/moc_RunDisplay.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_RunDisplay.o src/moc/moc_RunDisplay.cpp

build/Debug/GNU-Linux-x86/moc_RunToolbar.o: src/moc/moc_RunToolbar.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_RunToolbar.o src/moc/moc_RunToolbar.cpp

build/Debug/GNU-Linux-x86/moc_SigTextEdit.o: src/moc/moc_SigTextEdit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_SigTextEdit.o src/moc/moc_SigTextEdit.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
