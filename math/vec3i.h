#ifndef __VEC3I_H__
#define __VEC3I_H__

#include "vec2i.h"

class Vec3i {
	// instance variables
	int xpos;
	int ypos;
	int zpos;
	// constructors
	Vec3i();
	Vec3i(int x,Vec2i v);
	Vec3i(Vec2i v,int z);
	Vec3i(int x,int y,int z);
	// methods
	int magnitude();
	// operators
};

#endif
