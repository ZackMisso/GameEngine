#include "vec2i.h"

Vec2i::Vec2i(){
	xpos = 0;
	ypos = 0;
}

Vec2i::Vec2i(int x,int y){
	xpos = x;
	ypos = y;
}

int Vec2i::magnitude(){
	return xpos*xpos + ypos*ypos;
}
