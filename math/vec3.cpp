#include "vec3.h"
#include <tgmath.h>

Vec3::Vec3() {
	xpos = 0.0f;
	ypos = 0.0f;
	zpos = 0.0f;
}

Vec3::Vec3(Vec2 v,float z) {
	xpos = v.xpos;
	ypos = v.ypos;
	zpos = z;
}

Vec3::Vec3(float x,Vec2 v) {
	xpos = x;
	ypos = v.xpos;
	zpos = v.ypos;
}

Vec3::Vec3(float x,float y,float z) {
	xpos = x;
	ypos = y;
	zpos = z;
}

float Vec3::magnitude() {
	return sqrtf(xpos*xpos + ypos*ypos + zpos*zpos);
}

void Vec3::negate(){
	xpos = -xpos;
	ypos = -ypos;
	zpos = -zpos;
}

void Vec3::normalize() {
	float mag = magnitude();
	xpos /= mag;
	ypos /= mag;
	zpos /= mag;
}

Vec3 Vec3::operator+(const Vec3& c) {
	Vec3 tmp;
	tmp.xpos = xpos + c.xpos;
	tmp.ypos = ypos + c.ypos;
	tmp.zpos = zpos + c.zpos;
	return tmp;
}

Vec3 Vec3::operator-(const Vec3& c) {
	Vec3 tmp;
	tmp.xpos = xpos - c.xpos;
	tmp.ypos = ypos - c.ypos;
	tmp.zpos = zpos - c.zpos;
	return tmp;
}

Vec3 Vec3::operator*(const float c) {
	Vec3 tmp;
	tmp.xpos = xpos * c;
	tmp.ypos = ypos * c;
	tmp.zpos = zpos * c;
	return tmp;
}

Vec3 Vec3::operator/(const float c) {
	Vec3 tmp;
	tmp.xpos = xpos / c;
	tmp.ypos = ypos / c;
	tmp.zpos = zpos / c;
	return tmp;
}
