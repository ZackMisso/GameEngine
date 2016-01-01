#include "vec2.h"
#include <tgmath.h>
#include <iostream>

using namespace std;

Vec2::Vec2() {
	xpos = 0.0f;
	ypos = 0.0f;
}

Vec2::Vec2(float x,float y) {
	xpos = x;
	ypos = y;
}

void Vec2::normalize() {
	float mag = magnitude();
	xpos /= mag;
	ypos /= mag;
}

void Vec2::negate() {
	xpos = -xpos;
	ypos = -ypos;
}

float Vec2::magnitude() {
	return sqrtf(xpos*xpos + ypos*ypos);
}

Vec2 Vec2::copy() {
	Vec2 tmp(xpos,ypos);
	return tmp;
}

void Vec2::print() {
	cout << "X :: " << xpos << " Y :: " << ypos << endl;
}

Vec2 Vec2::operator+(const Vec2& c) {
	Vec2 tmp;
	tmp.xpos = xpos + c.xpos;
	tmp.ypos = ypos + c.ypos;
	return tmp;
}

Vec2 Vec2::operator-(const Vec2& c) {
	Vec2 tmp;
	tmp.xpos = xpos - c.xpos;
	tmp.ypos = ypos - c.ypos;
	return tmp;
}

Vec2 Vec2::operator*(const float c) {
	Vec2 tmp;
	tmp.xpos = xpos * c;
	tmp.ypos = ypos * c;
	return tmp;
}

Vec2 Vec2::operator/(const float c) {
	Vec2 tmp;
	tmp.xpos = xpos / c;
	tmp.ypos = ypos / c;
	return tmp;
}
