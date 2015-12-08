![Logo](https://github.com/DeepBlue14/rqt_ide/blob/master/ide/res/images/icon.jpg)

#**rqt_ide**
*An integrated development environment for ROS*

*Author/Maintainer:* James Kuczynski,  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Undergraduate Researcher,  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Robotics Laboratory][1],  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[University of Massachusetts Lowell][2].  
*Email:* jkuczyns@cs.uml.edu

=====

###**Index**

- [Project Synopsis](#project-synopsis)
- [Introduction](#introduction)
- [Modules](#modules)
  - [core](#core) *(core components)*
  - [configure](#configure) *(ROS-ification/migration)*
  - [tyrannosaurus_lex](#tyrannosaurus_lex) *(auto-suggest)*
  - [parsnip](#parsnip) *(refactor)*
  - [project_apollo](#project_apollo) *(build/run/debug)*
  - [console_color_text](#console-color-text)
  - [uterm](#uterm) *(universal OS terminal)*
  - [bell](#bell) *(custom language)*
- [Dependencies](#dependencies)
- [Install](#install)
- [Future Work](#future-work)

###**Project Synopsis**

This project is an IDE **specifically** for [ROS][3].  It has only been in development for several weeks, so many features have not yet been implemented, or have only been partially been implemented.  Features will (or in some cases already do) include templates for various publishers and subscribers, refactoring, reconfiguring non-ros/rosbuild projects to catkin projects, syntax highlighting, code compilation, debugging and execution, etc.


###**Introduction**

rqt_ide is devided into several main components: the IDE itself, which contains the core elements and UI, tyrannosaurus_lex, the program which handles the code-competion and refactoring backend, AST building, etc., Output-South, which enables effortless compilation and execution of ROS executable types, and UTerm, a cross-shell terminal which can swap UNIX <--> Windows commands.  rqt_ide may be compiled and run without it.  This program will be intended to run with both ROS 1 and ROS 2.
**WARNING: This project is currently pre-alpha, so we do NOT advise attempting to use it yet.** 


###**Modules**

This project is divided into a series of modules to facilitate easier testing, modification, etc.  This section will probably not be of interest to you unless you wish to modifiy the program.


####**core**

This module contains the core components of the IDE.


####**configure**

This module implements automated or assistive migration (the later case is the only option currently for make projects) from make, cmake, or rosbuild projects to catkin-style ROS packages.  It also supports partial migration from catkin to the ROS2 format.


####**tyrannosaurus_lex**

Tyrannosaurus Lex is an auto-suggest program for the IDE.


####**parsnip**

This module consists of a refactoring program.


####**project_apollo**

This module handles the various types of execution--rosrun, launch, as well as "regular" executions.


####**console_color_text**

This module handles the colorization of text printed out to the terminal(s).  This module can be used as a stand-alone library as well.  It currently supports the following languages:
- C++
- Java
- Ruby
- Lua
- BASH


####**uterm**

UTerm stands for **U**niversal **Term**inal.  It is a terminal emulator which will translate Windows and UNIX commands.  For example, if you are running it on Windows, and enter a UNIX command, it will run the appropriate Windows variant of this same command.  The reverse senario will also work.


####**bell**

This module is my attempt to create my own computer language--more for fun then any practical reason.  The grammer takes (in my opinion) the best of C++ and Java.  my trans-compiler converts the Bell files to C++, so it can use any existing C/C++ library.


###**Dependencies**

This project utalizes *(or will utalize)* the follow libraries:
- [ROS][3] >= electric *(tested with indigo)*
- [QT][4] >= 4 *(tested with 4.8 and 5.5)*
- [C++X11][5]-dev libraries
- [XTerm][6] *(optional)*
- [LLVM/Clang][7] 3.6 *(required for tyrannosaurus_lex only)*


###**Install**

This project is currently pre-alpha, so no installation instructions have been included yet.


###**Future Work**

Since the project is currently pre-alpha, this section is redundent at for the time being.


<!--links-->

[1]: http://robotics.cs.uml.edu/
[2]: http://www.uml.edu/
[3]: http://www.ros.org/
[4]: http://www.qt.io/
[5]: http://en.wikipedia.org/wiki/C%2B%2B11
[6]: http://invisible-island.net/xterm/
[7]: http://llvm.org/

