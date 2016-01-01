#include "vec3d.h"
#include <tgmath.h>
#include <iostream>

using namespace std;

Vec3d::Vec3d() {
	xpos = 0.0;
	ypos = 0.0;
	zpos = 0.0;
}

Vec3d::Vec3d(Vec2d v,double z) {
	xpos = v.xpos;
	ypos = v.ypos;
	zpos = z;
}

Vec3d::Vec3d(double x,Vec2d v) {
	xpos = x;
	ypos = v.xpos;
	zpos = v.ypos;
}

Vec3d::Vec3d(double x,double y,double z) {
	xpos = x;
	ypos = y;
	zpos = z;
}

double Vec3d::magnitude() {
	return sqrt(xpos*xpos + ypos*ypos + zpos*zpos);
}

void Vec3d::negate() {
	xpos = -xpos;
	ypos = -ypos;
	zpos = -zpos;
}

void Vec3d::normalize() {
	double mag = magnitude();
	xpos /= mag;
	ypos /= mag;
	zpos /= mag;
}

Vec3d Vec3d::copy() {
	Vec3d tmp(xpos,ypos,zpos);
	return tmp;
}

void Vec3d::print() {
	cout << "X :: " << xpos << " Y :: " << ypos << " Z :: " << zpos << endl;
}

Vec3d Vec3d::operator+(const Vec3d& c) {
	Vec3d tmp;
	tmp.xpos = xpos + c.xpos;
	tmp.ypos = ypos + c.ypos;
	tmp.zpos = zpos + c.zpos;
	return tmp;
}

Vec3d Vec3d::operator-(const Vec3d& c) {
	Vec3d tmp;
	tmp.xpos = xpos - c.xpos;
	tmp.ypos = ypos - c.ypos;
	tmp.zpos = zpos - c.zpos;
	return tmp;
}

Vec3d Vec3d::operator*(const double c) {
	Vec3d tmp;
	tmp.xpos = xpos * c;
	tmp.ypos = ypos * c;
	tmp.zpos = zpos * c;
	return tmp;
}

Vec3d Vec3d::operator/(const double c) {
	Vec3d tmp;
	tmp.xpos = xpos / c;
	tmp.ypos = ypos / c;
	tmp.zpos = zpos / c;
	return tmp;
}
