#ifndef __VERTEX_H__
#define __VERTEX_H__

#include "../math/vec3.h"

class Vertex {
private:
	// instance variables
	Vec3 pos;
	Vec3 norm;
public:
	// constructors
	Vertex(float *vals);
	//~Vertex();
	// getter methods
	Vec3 getPos();
	Vec3 getNorm();
	// norm mathods
	void addToNorm(Vec3 nor);
	void normalizeNorm();
};

#endif
