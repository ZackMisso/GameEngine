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

#ALL.O = main.o test.o \

ALL.O = main.o \
	math/vec2.o math/vec2d.o math/vec2i.o math/vec3.o math/vec3d.o math/vec3i.o math/vec4.o math/mat4.o \
	physics/quat.o physics/transformation.o physics/vertex.o physics/face.o physics/trimesh.o physics/quadmesh.o \
	subsystems/memory/memsub.o subsystems/memory/heap.o subsystems/memory/ffheap.o \
	subsystems/file/filersub.o subsystems/file/meshreader.o subsystems/file/scenereader.o subsystems/file/scenewriter.o \
	subsystems/thread/threadsub.o \
	subsystems/debug/debugsub.o \
	scene/scenenode.o scene/scenegraph.o scene/objectnode.o scene/attribnode.o scene/geomnode.o scene/lightnode.o \
	scene/rotnode.o scene/transnode.o scene/scalenode.o scene/cameranode.o scene/scenemanager.o \
	editor/sceneeditor.o editor/editorstate.o editor/objectstate.o editor/rotstate.o editor/scalestate.o editor/transstate.o \
	editor/attribstate.o editor/geomstate.o editor/lightstate.o editor/camerastate.o \
	gui/guimanager.o \
	gameplay/entity.o \
	tests/scenegraphone.o

engine: $(ALL.O)
	$(CC) $(CFLAGS) -o bin/$@ $(ALL.O) $(LIBS)

tst:
	clang++ -o bin/test test.cpp -lglfw3 -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo

clean_tst:
	rm -f $(ALL.0) bin/test

clean_engine:
	rm -f $(ALL.O) bin/engine
