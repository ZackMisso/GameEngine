#include "vec4.h"

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
	// to be implemented
}

void Vec4::negate() {
	// to be implemented
}

// implement the rest
