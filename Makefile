#
#	This is a Makefile for OS X El Capitan 10.11
#

#LOCAL = /usr/local
#OPT = /usr/local

#CC = clang++ -std=c++11

tst:
	clang++ -o test main.cpp -lglfw3 -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo

clean_tst:
	rm test
