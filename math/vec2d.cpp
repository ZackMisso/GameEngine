#include "vec2d.h"
#include <tgmath.h>

Vec2d::Vec2d() {
	xpos = 0.0;
	ypos = 0.0;
}

Vec2d::Vec2d(double x,double y) {
	xpos = x;
	ypos = y;
}

void Vec2d::negate() {
	xpos = -xpos;
	ypos = -ypos;
}

void Vec2d::normalize() {
	double mag = magnitude();
	xpos /= mag;
	ypos /= mag;
}

double Vec2d::magnitude() {
	return sqrt(xpos*xpos + ypos*ypos);
}

Vec2d Vec2d::operator+(const Vec2d& c) {
	Vec2d tmp;
	tmp.xpos = xpos + c.xpos;
	tmp.ypos = ypos + c.ypos;
	return tmp;
}

Vec2d Vec2d::operator-(const Vec2d& c) {
	Vec2d tmp;
	tmp.xpos = xpos - c.ypos;
	tmp.ypos = ypos - c.ypos;
	return tmp;
}

Vec2d Vec2d::operator*(const double c) {
	Vec2d tmp;
	tmp.xpos = xpos * c;
	tmp.ypos = ypos * c;
	return tmp;
}

Vec2d Vec2d::operator/(const double c) {
	Vec2d tmp;
	tmp.xpos = xpos / c;
	tmp.ypos = ypos / c;
	return tmp;
}
