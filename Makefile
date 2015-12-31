#
#	This is a Makefile for OS X El Capitan 10.11
#

#LOCAL = /usr/local
#OPT = /usr/local

CC = clang++
CFLAGS = -std=c++11
GLFW_LIBS = -lglfw3
FRAMEWORKS = -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo
LIBS = $(GLFW_LIBS) $(FRAMEWORKS)

.o:
	$(CC) $(CFLAGS) -c -o $*.o $<

.cpp.o:
	$(CC) $(CFLAGS) -c -o $*.o $<

.cxx.o:
	$(CC) $(CFLAGS) -c -o $*.o $<

ALL.O = main.o test.o \
	math/vec2.o math/vec2d.o math/vec2i.o math/vec3.o math/vec3d.o math/vec3i.o math/mat4.o \
	physics/quat.o physics/transformation.o

engine: $(ALL.O)
	$(CC) $(CFLAGS) -o $@ $(ALL.O) $(LIBS)

tst:
	clang++ -o bin/test test.cpp -lglfw3 -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo

clean_tst:
	rm -f $(ALL.0) bin/test

clean_engine:
	rm -f $(ALL.O) bin/engine
