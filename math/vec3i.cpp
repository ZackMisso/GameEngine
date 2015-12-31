#include "vec3i.h"

Vec3i::Vec3i(){
	xpos = 0;
	ypos = 0;
	zpos = 0;
}

Vec3i::Vec3i(Vec2i v,int z){
	xpos = v.xpos;
	ypos = v.ypos;
	zpos = z;
}

Vec3i::Vec3i(int x,Vec2i v){
	xpos = x;
	ypos = v.xpos;
	zpos = v.ypos;
}

Vec3i::Vec3i(int x,int y,int z){
	xpos = x;
	ypos = y;
	zpos = z;
}

int Vec3i::magnitude(){
	return xpos*xpos + ypos*ypos + zpos*zpos;
}
