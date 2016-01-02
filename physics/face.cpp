#include "face.h"

Face::Face(int *vals) {
	ind.xpos = vals[0];
	ind.ypos = vals[1];
	ind.zpos = vals[2];
	norm.xpos = 0.0f;
	norm.ypos = 0.0f;
	norm.zpos = 0.0f;
}

void Face::calculateNorm(Array<Vertex*> *verts) {
	// to be implemented
}

void Face::render(AttributeNode *node,Array<Vertex*> *verts) {
	// to be implemented
}
