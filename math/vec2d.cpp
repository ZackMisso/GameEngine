#include "vec2d.h"
#include <math.h>

Vec2d::Vec2d(){
	xpos = 0.0;
	ypos = 0.0;
}

Vec2d:Vec2d(double x,double y){
	xpos = x;
	ypos = y;
}

void Vec2d::normalize(){
	double mag = magnitude();
	xpos /= mag;
	ypos /= mag;
}

double Vec2d::magnitude(){
	return sqrt(xpos*xpos + ypos*ypos);
}
