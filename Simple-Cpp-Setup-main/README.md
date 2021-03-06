#What I have read
##Level 1

[x] Install a compiler 
[x] Use a IDE 
[x] Use GIT 
[x] Use a debugger 
[x] Use a formatting tool 
[x] Use a static analysers 
[x] Naming 
[x] Stack vs Heap 
[x] Consistency in style 
_____________________
##NOTES PERSO Level 1: 
###Naming:
	note : - out apres les var non const (varOut)

###Stack & Heap
	note : - never use new (heap -> leak de memoire possible)
	       -if you need to have something allocated on the heap, use a std::unique_ptr or a std::shared_ptr that will handle the new and the delete for you
_______________________________________________________
_______________________________________________________

#What I have read
##Level 2

[x] Make it work, then make it good
[x] Prefer free functions 
[x] Design cohesive classes 
[x] Use structs to group data 
[x] Write small functions
[x] DRY: Don't repeat yourself
[x] Enums
[x] Split problems in small pieces
[x] Composition over Inheritance
____________________
#Assignements

[x] Guess the number 
[x] Hangman 
[x] Adding a menu
[ ] Noughts and Crosses
[ ] Connect 4
[ ] Adding test
[ ] An AI for Hangman
[ ] Going further














# Simple-Cpp-Setup

Welcome to this minimalist C++ project!

## If you use the Dev Container

If you install [ms-vscode-remote.remote-containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers) and [Docker](https://www.docker.com/products/docker-desktop), you will be able to run your code inside a Linux container (kind of like a virtual machine, but faster). Also, you will get static analyzers, code formatters and useful extensions installed out of the box! It is a great option to get started with C++ quickly.

(Unfortunately, if you want to do GUI applications they don't work well from within a container and you might have to do a proper setup on your own desktop instead. But for simple command-line applications this works amazingly well!)

NB: the container might take a while to build the first time.

### Compiling

You need to install [CMake](https://cmake.org/download/).

To use CMake I recommend this VS Code extension : [ms-vscode.cmake-tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools). You will need to setup the extension with a compiler. Here is [the tutorial](https://code.visualstudio.com/docs/cpp/cmake-linux). It is based on Linux but at the bottom of the page you will find the explanations to adapt it for [Windows](https://code.visualstudio.com/docs/cpp/config-msvc) and [Mac](https://code.visualstudio.com/docs/cpp/config-clang-mac).

Alternatively you can just create a *build* folder at the root of this project, open a terminal and run `cmake ..`; chances are it will detect what compiler you have installed and generate the appropriate Makefile / Visual Studio solution / Xcode project.

### Auto-formatting

[Check this out](https://julesfouchy.github.io//Learn--Clean-Code-With-Cpp/lessons/formatting-tool) to learn why you would want to use a code formatter and how to do it.

### Static analysis

[Check this out](https://julesfouchy.github.io/Learn--Clean-Code-With-Cpp/lessons/static-analysis-and-sanitizers) to learn why you would want to use static analysis and how to do it.
