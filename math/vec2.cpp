#include "vec2.h"
#include <tgmath.h>

Vec2::Vec2(){
	xpos = 0.0f;
	ypos = 0.0f;
}

Vec2::Vec2(float x,float y){
	xpos = x;
	ypos = y;
}

void Vec2::normalize(){
	float mag = magnitude();
	xpos /= mag;
	ypos /= mag;
}

float Vec2::magnitude(){
	return sqrtf(xpos*xpos + ypos*ypos);
}
