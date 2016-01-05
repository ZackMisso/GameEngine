#include "vec4.h"
#include <tgmath.h>
#include <iostream>

using namespace std;

Vec4::Vec4() {
	xpos = 0.0f;
	ypos = 0.0f;
	zpos = 0.0f;
	wpos = 0.0f;
}

Vec4::Vec4(Vec2 v,Vec2 v2) {
	xpos = v.xpos;
	ypos = v.ypos;
	zpos = v2.xpos;
	wpos = v2.ypos;
}

Vec4::Vec4(Vec3 v,float w) {
	xpos = v.xpos;
	ypos = v.ypos;
	zpos = v.zpos;
	wpos = w;
}

Vec4::Vec4(float x,Vec3 v) {
	xpos = x;
	ypos = v.xpos;
	zpos = v.ypos;
	wpos = v.zpos;
}

Vec4::Vec4(float x,float y,float z,float w) {
	xpos = x;
	ypos = y;
	zpos = z;
	wpos = w;
}

float Vec4::magnitude() {
	return sqrtf(xpos*xpos + ypos*ypos + zpos*zpos + wpos*wpos);
}

void Vec4::negate() {
	xpos = -xpos;
	ypos = -ypos;
	zpos = -zpos;
	wpos = -wpos;
}

void Vec4::normalize() {
	float mag = magnitude();
	xpos /= mag;
	ypos /= mag;
	zpos /= mag;
	wpos /= mag;
}

Vec4 Vec4::copy() {
	Vec4 tmp(xpos,ypos,zpos,wpos);
	return tmp;
}

void Vec4::print() {
	cout << "X :: " << xpos << " Y :: " << ypos << " Z :: " << zpos << " W :: " << wpos << endl;
}

Vec4 Vec4::operator+(const Vec4& c) {
	Vec4 tmp;
	tmp.xpos = xpos + c.xpos;
	tmp.ypos = ypos + c.ypos;
	tmp.zpos = zpos + c.zpos;
	tmp.wpos = wpos + c.wpos;
	return tmp;
}

Vec4 Vec4::operator-(const Vec4& c) {
	Vec4 tmp;
	tmp.xpos = xpos + c.xpos;
	tmp.ypos = ypos + c.ypos;
	tmp.zpos = zpos + c.zpos;
	tmp.wpos = wpos + c.wpos;
	return tmp;
}

Vec4 Vec4::operator*(const float c) {
	Vec4 tmp;
	tmp.xpos = xpos * c;
	tmp.ypos = ypos * c;
	tmp.zpos = zpos * c;
	tmp.wpos = wpos * c;
	return tmp;
}

Vec4 Vec4::operator/(const float c) {
	Vec4 tmp;
	tmp.xpos = xpos / c;
	tmp.ypos = ypos / c;
	tmp.zpos = zpos / c;
	tmp.wpos = wpos / c;
	return tmp;
}

float Vec4::operator*(const Vec4& c) {
	return xpos*c.xpos + ypos*c.ypos + zpos*c.zpos + wpos*c.wpos;
}
