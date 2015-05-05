#############################################################################
# Makefile for building: dist/Debug/GNU-Linux-x86/Hazel
# Generated by qmake (2.01a) (Qt 4.8.6) on: Tue May 5 16:01:07 2015
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
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lX11 -lQtGui -lQtCore -lpthread 
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

SOURCES       = src/File.cpp \
		src/Highlighter.cpp \
		src/MasterActions.cpp \
		src/MasterGui.cpp \
		src/MasterMenus.cpp \
		src/MasterTabs.cpp \
		src/MasterToolBars.cpp \
		src/NewFileGui.cpp \
		src/NewProjectGui.cpp \
		src/NewProjectPage_1.cpp \
		src/NewProjectPage_2.cpp \
		src/NewProjectPage_3.cpp \
		src/OpeningGui.cpp \
		src/Terminal.cpp \
		src/main.cpp src/moc/moc_File.cpp \
		src/moc/moc_Highlighter.cpp \
		src/moc/moc_MasterActions.cpp \
		src/moc/moc_MasterGui.cpp \
		src/moc/moc_MasterMenus.cpp \
		src/moc/moc_MasterTabs.cpp \
		src/moc/moc_MasterToolBars.cpp \
		src/moc/moc_NewFileGui.cpp \
		src/moc/moc_NewProjectGui.cpp \
		src/moc/moc_NewProjectPage_1.cpp \
		src/moc/moc_NewProjectPage_2.cpp \
		src/moc/moc_NewProjectPage_3.cpp \
		src/moc/moc_OpeningGui.cpp \
		src/moc/moc_Terminal.cpp
OBJECTS       = build/Debug/GNU-Linux-x86/File.o \
		build/Debug/GNU-Linux-x86/Highlighter.o \
		build/Debug/GNU-Linux-x86/MasterActions.o \
		build/Debug/GNU-Linux-x86/MasterGui.o \
		build/Debug/GNU-Linux-x86/MasterMenus.o \
		build/Debug/GNU-Linux-x86/MasterTabs.o \
		build/Debug/GNU-Linux-x86/MasterToolBars.o \
		build/Debug/GNU-Linux-x86/NewFileGui.o \
		build/Debug/GNU-Linux-x86/NewProjectGui.o \
		build/Debug/GNU-Linux-x86/NewProjectPage_1.o \
		build/Debug/GNU-Linux-x86/NewProjectPage_2.o \
		build/Debug/GNU-Linux-x86/NewProjectPage_3.o \
		build/Debug/GNU-Linux-x86/OpeningGui.o \
		build/Debug/GNU-Linux-x86/Terminal.o \
		build/Debug/GNU-Linux-x86/main.o \
		build/Debug/GNU-Linux-x86/moc_File.o \
		build/Debug/GNU-Linux-x86/moc_Highlighter.o \
		build/Debug/GNU-Linux-x86/moc_MasterActions.o \
		build/Debug/GNU-Linux-x86/moc_MasterGui.o \
		build/Debug/GNU-Linux-x86/moc_MasterMenus.o \
		build/Debug/GNU-Linux-x86/moc_MasterTabs.o \
		build/Debug/GNU-Linux-x86/moc_MasterToolBars.o \
		build/Debug/GNU-Linux-x86/moc_NewFileGui.o \
		build/Debug/GNU-Linux-x86/moc_NewProjectGui.o \
		build/Debug/GNU-Linux-x86/moc_NewProjectPage_1.o \
		build/Debug/GNU-Linux-x86/moc_NewProjectPage_2.o \
		build/Debug/GNU-Linux-x86/moc_NewProjectPage_3.o \
		build/Debug/GNU-Linux-x86/moc_OpeningGui.o \
		build/Debug/GNU-Linux-x86/moc_Terminal.o
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
QMAKE_TARGET  = Hazel
DESTDIR       = dist/Debug/GNU-Linux-x86/
TARGET        = dist/Debug/GNU-Linux-x86/Hazel

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
	@$(CHK_DIR_EXISTS) build/Debug/GNU-Linux-x86/Hazel1.0.0 || $(MKDIR) build/Debug/GNU-Linux-x86/Hazel1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) build/Debug/GNU-Linux-x86/Hazel1.0.0/ && $(COPY_FILE) --parents src/File.h src/Highlighter.h src/MasterActions.h src/MasterGui.h src/MasterMenus.h src/MasterTabs.h src/MasterToolBars.h src/NewFileGui.h src/NewProjectGui.h src/NewProjectPage_1.h src/NewProjectPage_2.h src/NewProjectPage_3.h src/OpeningGui.h src/Terminal.h build/Debug/GNU-Linux-x86/Hazel1.0.0/ && $(COPY_FILE) --parents src/File.cpp src/Highlighter.cpp src/MasterActions.cpp src/MasterGui.cpp src/MasterMenus.cpp src/MasterTabs.cpp src/MasterToolBars.cpp src/NewFileGui.cpp src/NewProjectGui.cpp src/NewProjectPage_1.cpp src/NewProjectPage_2.cpp src/NewProjectPage_3.cpp src/OpeningGui.cpp src/Terminal.cpp src/main.cpp build/Debug/GNU-Linux-x86/Hazel1.0.0/ && (cd `dirname build/Debug/GNU-Linux-x86/Hazel1.0.0` && $(TAR) Hazel1.0.0.tar Hazel1.0.0 && $(COMPRESS) Hazel1.0.0.tar) && $(MOVE) `dirname build/Debug/GNU-Linux-x86/Hazel1.0.0`/Hazel1.0.0.tar.gz . && $(DEL_FILE) -r build/Debug/GNU-Linux-x86/Hazel1.0.0


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

compiler_moc_header_make_all: src/moc/moc_File.cpp src/moc/moc_Highlighter.cpp src/moc/moc_MasterActions.cpp src/moc/moc_MasterGui.cpp src/moc/moc_MasterMenus.cpp src/moc/moc_MasterTabs.cpp src/moc/moc_MasterToolBars.cpp src/moc/moc_NewFileGui.cpp src/moc/moc_NewProjectGui.cpp src/moc/moc_NewProjectPage_1.cpp src/moc/moc_NewProjectPage_2.cpp src/moc/moc_NewProjectPage_3.cpp src/moc/moc_OpeningGui.cpp src/moc/moc_Terminal.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) src/moc/moc_File.cpp src/moc/moc_Highlighter.cpp src/moc/moc_MasterActions.cpp src/moc/moc_MasterGui.cpp src/moc/moc_MasterMenus.cpp src/moc/moc_MasterTabs.cpp src/moc/moc_MasterToolBars.cpp src/moc/moc_NewFileGui.cpp src/moc/moc_NewProjectGui.cpp src/moc/moc_NewProjectPage_1.cpp src/moc/moc_NewProjectPage_2.cpp src/moc/moc_NewProjectPage_3.cpp src/moc/moc_OpeningGui.cpp src/moc/moc_Terminal.cpp
src/moc/moc_File.cpp: src/File.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/File.h -o src/moc/moc_File.cpp

src/moc/moc_Highlighter.cpp: src/Highlighter.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/Highlighter.h -o src/moc/moc_Highlighter.cpp

src/moc/moc_MasterActions.cpp: src/NewFileGui.h \
		src/Highlighter.h \
		src/File.h \
		src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h \
		src/MasterActions.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/MasterActions.h -o src/moc/moc_MasterActions.cpp

src/moc/moc_MasterGui.cpp: src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h \
		src/MasterActions.h \
		src/NewFileGui.h \
		src/Highlighter.h \
		src/File.h \
		src/MasterToolBars.h \
		src/OpeningGui.h \
		src/MasterMenus.h \
		src/MasterGui.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/MasterGui.h -o src/moc/moc_MasterGui.cpp

src/moc/moc_MasterMenus.cpp: src/MasterActions.h \
		src/NewFileGui.h \
		src/Highlighter.h \
		src/File.h \
		src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h \
		src/MasterMenus.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/MasterMenus.h -o src/moc/moc_MasterMenus.cpp

src/moc/moc_MasterTabs.cpp: src/MasterTabs.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/MasterTabs.h -o src/moc/moc_MasterTabs.cpp

src/moc/moc_MasterToolBars.cpp: src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h \
		src/MasterActions.h \
		src/NewFileGui.h \
		src/Highlighter.h \
		src/File.h \
		src/MasterToolBars.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/MasterToolBars.h -o src/moc/moc_MasterToolBars.cpp

src/moc/moc_NewFileGui.cpp: src/NewFileGui.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/NewFileGui.h -o src/moc/moc_NewFileGui.cpp

src/moc/moc_NewProjectGui.cpp: src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h \
		src/NewProjectGui.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/NewProjectGui.h -o src/moc/moc_NewProjectGui.cpp

src/moc/moc_NewProjectPage_1.cpp: src/NewProjectPage_1.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/NewProjectPage_1.h -o src/moc/moc_NewProjectPage_1.cpp

src/moc/moc_NewProjectPage_2.cpp: src/NewProjectPage_2.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/NewProjectPage_2.h -o src/moc/moc_NewProjectPage_2.cpp

src/moc/moc_NewProjectPage_3.cpp: src/NewProjectPage_3.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/NewProjectPage_3.h -o src/moc/moc_NewProjectPage_3.cpp

src/moc/moc_OpeningGui.cpp: src/OpeningGui.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/OpeningGui.h -o src/moc/moc_OpeningGui.cpp

src/moc/moc_Terminal.cpp: src/Terminal.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) src/Terminal.h -o src/moc/moc_Terminal.cpp

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

build/Debug/GNU-Linux-x86/File.o: src/File.cpp src/File.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/File.o src/File.cpp

build/Debug/GNU-Linux-x86/Highlighter.o: src/Highlighter.cpp src/Highlighter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Highlighter.o src/Highlighter.cpp

build/Debug/GNU-Linux-x86/MasterActions.o: src/MasterActions.cpp src/MasterActions.h \
		src/NewFileGui.h \
		src/Highlighter.h \
		src/File.h \
		src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/MasterActions.o src/MasterActions.cpp

build/Debug/GNU-Linux-x86/MasterGui.o: src/MasterGui.cpp src/MasterGui.h \
		src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h \
		src/MasterActions.h \
		src/NewFileGui.h \
		src/Highlighter.h \
		src/File.h \
		src/MasterToolBars.h \
		src/OpeningGui.h \
		src/MasterMenus.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/MasterGui.o src/MasterGui.cpp

build/Debug/GNU-Linux-x86/MasterMenus.o: src/MasterMenus.cpp src/MasterMenus.h \
		src/MasterActions.h \
		src/NewFileGui.h \
		src/Highlighter.h \
		src/File.h \
		src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/MasterMenus.o src/MasterMenus.cpp

build/Debug/GNU-Linux-x86/MasterTabs.o: src/MasterTabs.cpp src/MasterTabs.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/MasterTabs.o src/MasterTabs.cpp

build/Debug/GNU-Linux-x86/MasterToolBars.o: src/MasterToolBars.cpp src/MasterToolBars.h \
		src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h \
		src/MasterActions.h \
		src/NewFileGui.h \
		src/Highlighter.h \
		src/File.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/MasterToolBars.o src/MasterToolBars.cpp

build/Debug/GNU-Linux-x86/NewFileGui.o: src/NewFileGui.cpp src/NewFileGui.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/NewFileGui.o src/NewFileGui.cpp

build/Debug/GNU-Linux-x86/NewProjectGui.o: src/NewProjectGui.cpp src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/NewProjectGui.o src/NewProjectGui.cpp

build/Debug/GNU-Linux-x86/NewProjectPage_1.o: src/NewProjectPage_1.cpp src/NewProjectPage_1.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/NewProjectPage_1.o src/NewProjectPage_1.cpp

build/Debug/GNU-Linux-x86/NewProjectPage_2.o: src/NewProjectPage_2.cpp src/NewProjectPage_2.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/NewProjectPage_2.o src/NewProjectPage_2.cpp

build/Debug/GNU-Linux-x86/NewProjectPage_3.o: src/NewProjectPage_3.cpp src/NewProjectPage_3.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/NewProjectPage_3.o src/NewProjectPage_3.cpp

build/Debug/GNU-Linux-x86/OpeningGui.o: src/OpeningGui.cpp src/OpeningGui.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/OpeningGui.o src/OpeningGui.cpp

build/Debug/GNU-Linux-x86/Terminal.o: src/Terminal.cpp src/Terminal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/Terminal.o src/Terminal.cpp

build/Debug/GNU-Linux-x86/main.o: src/main.cpp src/MasterGui.h \
		src/NewProjectGui.h \
		src/NewProjectPage_1.h \
		src/NewProjectPage_2.h \
		src/NewProjectPage_3.h \
		src/MasterActions.h \
		src/NewFileGui.h \
		src/Highlighter.h \
		src/File.h \
		src/MasterToolBars.h \
		src/OpeningGui.h \
		src/MasterMenus.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main.o src/main.cpp

build/Debug/GNU-Linux-x86/moc_File.o: src/moc/moc_File.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_File.o src/moc/moc_File.cpp

build/Debug/GNU-Linux-x86/moc_Highlighter.o: src/moc/moc_Highlighter.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Highlighter.o src/moc/moc_Highlighter.cpp

build/Debug/GNU-Linux-x86/moc_MasterActions.o: src/moc/moc_MasterActions.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_MasterActions.o src/moc/moc_MasterActions.cpp

build/Debug/GNU-Linux-x86/moc_MasterGui.o: src/moc/moc_MasterGui.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_MasterGui.o src/moc/moc_MasterGui.cpp

build/Debug/GNU-Linux-x86/moc_MasterMenus.o: src/moc/moc_MasterMenus.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_MasterMenus.o src/moc/moc_MasterMenus.cpp

build/Debug/GNU-Linux-x86/moc_MasterTabs.o: src/moc/moc_MasterTabs.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_MasterTabs.o src/moc/moc_MasterTabs.cpp

build/Debug/GNU-Linux-x86/moc_MasterToolBars.o: src/moc/moc_MasterToolBars.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_MasterToolBars.o src/moc/moc_MasterToolBars.cpp

build/Debug/GNU-Linux-x86/moc_NewFileGui.o: src/moc/moc_NewFileGui.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_NewFileGui.o src/moc/moc_NewFileGui.cpp

build/Debug/GNU-Linux-x86/moc_NewProjectGui.o: src/moc/moc_NewProjectGui.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_NewProjectGui.o src/moc/moc_NewProjectGui.cpp

build/Debug/GNU-Linux-x86/moc_NewProjectPage_1.o: src/moc/moc_NewProjectPage_1.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_NewProjectPage_1.o src/moc/moc_NewProjectPage_1.cpp

build/Debug/GNU-Linux-x86/moc_NewProjectPage_2.o: src/moc/moc_NewProjectPage_2.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_NewProjectPage_2.o src/moc/moc_NewProjectPage_2.cpp

build/Debug/GNU-Linux-x86/moc_NewProjectPage_3.o: src/moc/moc_NewProjectPage_3.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_NewProjectPage_3.o src/moc/moc_NewProjectPage_3.cpp

build/Debug/GNU-Linux-x86/moc_OpeningGui.o: src/moc/moc_OpeningGui.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_OpeningGui.o src/moc/moc_OpeningGui.cpp

build/Debug/GNU-Linux-x86/moc_Terminal.o: src/moc/moc_Terminal.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_Terminal.o src/moc/moc_Terminal.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

