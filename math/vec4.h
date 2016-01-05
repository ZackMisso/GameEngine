#ifndef __VEC4_H__
#define __VEC4_H__

#include "vec3.h"
#include "vec2.h"

class Vec4 {
public:
	// instance variables
	float xpos;
	float ypos;
	float zpos;
	float wpos;
	// constructors
	Vec4();
	Vec4(Vec2 v,Vec2 v2);
	Vec4(Vec3 v,float w);
	Vec4(float x,Vec3 v);
	Vec4(float x,float y,float z,float w);
	// methods
	float magnitude();
	void negate();
	void normalize();
	Vec4 copy();
	// debug
	void print();
	// operators
	Vec4 operator+(const Vec4& c);
	Vec4 operator-(const Vec4& c);
	Vec4 operator*(const float c);
	Vec4 operator/(const float c);
	float operator*(const Vec4& c); // dot product
	// possibly implement cross product
};

#endif
