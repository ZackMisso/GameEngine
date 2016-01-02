#ifndef __FACE_H__
#define __FACE_H__

#include "../math/vec3.h"
#include "../math/vec3i.h"
#include "../scene/attribnode.h"
#include "../datastructures/array.h"
#include "../physics/vertex.h"

class Face {
private:
	// instance variables
	Vec3i ind;
	Vec3 norm;
public:
	// construtors
	Face(int *vals);
	//~Face();
	void calculateNorm(Array<Vertex*> *verts);
	void render(AttributeNode *node,Array<Vertex*> *verts);
};

#endif
