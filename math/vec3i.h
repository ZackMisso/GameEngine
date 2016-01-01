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
	void negate();
	int magnitude();
	Vec3i copy();
	// debug
	void print();
	// operators
	Vec3i operator+(const Vec3i& c);
	Vec3i operator-(const Vec3i& c);
	Vec3i operator*(const int c);
	Vec3i operator/(const int c);
};

#endif
