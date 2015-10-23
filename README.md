![Logo](https://github.com/DeepBlue14/ride/blob/master/ide/images/icon.jpg)

#**Ride**
####(**R**OS **I**ntegrated **D**evelopment **E**nvironment)

*Author/Maintainer:* James Kuczynski,  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Undergraduate Researcher,  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[Robotics Laboratory][1],  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[University of Massachusetts Lowell][2].  
*Email:* jkuczyns@cs.uml.edu

=====

###**Index**

- [Project Synopsis](#project-synopsis)
- [Introduction](#introduction)
- [Dependencies](#dependencies)
- [Install](#install)
- [Future Work](#future-work)

###**Project Synopsis**

This project is an IDE **specifically** for [ROS][3].  It has only been in development for several weeks, so many features have not yet been implemented, or have only been partially been implemented.  Features will (or in some cases already do) include templates for various publishers and subscribers, refactoring, reconfiguring non-ros/rosbuild projects to catkin projects, syntax highlighting, code compilation, debugging and execution, etc.


###**Introduction**

RIDE is devided into two main components: the IDE itself, which contains the core elements and UI, tyrannosaurus_lex, the program which handles the code-competion and refactoring backend, AST building, etc., and UTerm, a terminal which can swap UNIX <--> Windows commands.  RIDE may be compiled and run without it.  This program will be intended to run with both ROS 1 and ROS 2. **WARNING: This project is currently pre-alpha, so we do NOT advise attempting to use it yet.** 


###**Dependencies**

This project utalizes *(or will utalize)* the follow libraries:
- [ROS][3] >= electric *(tested with indigo)*
- [QT][4] >= 4 *(tested with 4.8 and 5.5)*
- [C++X11][5]-dev libraries
- [XTerm][6] *(optional)*
- [LLVM/Clang][7]3.6 *(required for tyrannosaurus_lex only)*

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

