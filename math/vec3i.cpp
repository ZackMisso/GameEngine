#include "vec3i.h"
#include <iostream>

using namespace std;

Vec3i::Vec3i() {
	xpos = 0;
	ypos = 0;
	zpos = 0;
}

Vec3i::Vec3i(Vec2i v,int z) {
	xpos = v.xpos;
	ypos = v.ypos;
	zpos = z;
}

Vec3i::Vec3i(int x,Vec2i v) {
	xpos = x;
	ypos = v.xpos;
	zpos = v.ypos;
}

Vec3i::Vec3i(int x,int y,int z) {
	xpos = x;
	ypos = y;
	zpos = z;
}

void Vec3i::negate() {
	xpos = -xpos;
	ypos = -ypos;
	zpos = -zpos;
}

int Vec3i::magnitude() {
	return xpos*xpos + ypos*ypos + zpos*zpos;
}

Vec3i Vec3i::copy() {
	Vec3i tmp(xpos,ypos,zpos);
	return tmp;
}

void Vec3i::print() {
	cout << "X :: " << xpos << " Y :: " << ypos << " Z :: " << zpos << endl;
}

Vec3i Vec3i::operator+(const Vec3i& c) {
	Vec3i tmp;
	tmp.xpos = xpos + c.xpos;
	tmp.ypos = ypos + c.ypos;
	tmp.zpos = zpos + c.zpos;
	return tmp;
}

Vec3i Vec3i::operator-(const Vec3i& c) {
	Vec3i tmp;
	tmp.xpos = xpos - c.xpos;
	tmp.ypos = ypos - c.ypos;
	tmp.zpos = zpos - c.zpos;
	return tmp;
}

Vec3i Vec3i::operator*(const int c) {
	Vec3i tmp;
	tmp.xpos = xpos * c;
	tmp.ypos = ypos * c;
	tmp.zpos = zpos * c;
	return tmp;
}

Vec3i Vec3i::operator/(const int c) {
	Vec3i tmp;
	tmp.xpos = xpos / c;
	tmp.ypos = ypos / c;
	tmp.zpos = zpos / c;
	return tmp;
}
