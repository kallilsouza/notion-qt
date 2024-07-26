#!/bin/sh

make clean
qmake
make

g++ notion.o -o notion -lQt5Core -lQt5Gui -lQt5Widgets -lQt5WebEngineWidgets
