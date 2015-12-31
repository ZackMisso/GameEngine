#ifndef __VEC3D_H__
#define __VEC3D_H__

#include "vec2d.h"

class Vec3d {
public:
	// instance variables
	double xpos;
	double ypos;
	double zpos;
	// constructors
	Vec3d();
	Vec3d(Vec2d v,double z);
	Vec3d(double x,Vec2d v);
	Vec3d(double x,double y,double z);
	// methods
	double magnitude();
	void normalize();
	// operators
};

#endif
