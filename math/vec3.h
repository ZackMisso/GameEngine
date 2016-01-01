#ifndef __VEC3_H__
#define __VEC3_H__

#include "vec2.h"

class Vec3 {
public:
	// instance variables
	float xpos;
	float ypos;
	float zpos;
	// constructors
	Vec3();
	Vec3(Vec2 v,float z);
	Vec3(float x,Vec2 v);
	Vec3(float x,float y,float z);
	// methods
	float magnitude();
	void negate();
	void normalize();
	Vec3 copy();
	// debug
	void print();
	// operators
	Vec3 operator+(const Vec3& c);
	Vec3 operator-(const Vec3& c);
	Vec3 operator*(const float c);
	Vec3 operator/(const float c);
	float operator*(const Vec3& c); // dot product
	Vec3 operator/(const Vec3& c); // cross product
};

#endif
