#include "vec3d.h"
#include <tgmath.h>

Vec3d::Vec3d(){
	xpos = 0.0;
	ypos = 0.0;
	zpos = 0.0;
}

Vec3d::Vec3d(Vec2d v,double z){
	xpos = v.xpos;
	ypos = v.ypos;
	zpos = z;
}

Vec3d::Vec3d(double x,Vec2d v){
	xpos = x;
	ypos = v.xpos;
	zpos = v.ypos;
}

Vec3d::Vec3d(double x,double y,double z){
	xpos = x;
	ypos = y;
	zpos = z;
}

double Vec3d::magnitude(){
	return sqrt(xpos*xpos + ypos*ypos + zpos*zpos);
}

void Vec3d::normalize(){
	double mag = magnitude();
	xpos /= mag;
	ypos /= mag;
	zpos /= mag;
}
