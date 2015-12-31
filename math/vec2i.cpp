#include "vec2i.h"

Vec2i::Vec2i(){
	xpos = 0;
	ypos = 0;
}

Vec2i::Vec2i(int x,int y) {
	xpos = x;
	ypos = y;
}

void Vec2i::negate() {
	xpos = -xpos;
	ypos = -ypos;
}

int Vec2i::magnitude() {
	return xpos*xpos + ypos*ypos;
}

Vec2i Vec2i::operator+(const Vec2i& c) {
	Vec2i tmp;
	tmp.xpos = xpos + c.xpos;
	tmp.ypos = ypos + c.ypos;
	return tmp;
}

Vec2i Vec2i::operator-(const Vec2i& c) {
	Vec2i tmp;
	tmp.xpos = xpos - c.xpos;
	tmp.ypos = ypos - c.ypos;
	return tmp;
}

Vec2i Vec2i::operator*(const int c) {
	Vec2i tmp;
	tmp.xpos = xpos * c;
	tmp.ypos = ypos * c;
	return tmp;
}

Vec2i Vec2i::operator/(const int c) {
	Vec2i tmp;
	tmp.xpos = xpos / c;
	tmp.ypos = ypos / c;
	return tmp;
}
