#ifndef __TRIMESH_H__
#define __TRIMESH_H__

#include "../datastructures/array.h"
#include "../physics/vertex.h"
#include "../physics/face.h"
#include "../scene/attribnode.h"

class TriMesh {
private:
	Array<Vertex*> *vertices;
	Array<Face*> *faces;
public:
	TriMesh();
	~TriMesh();
	void calcNormals();
	void addVertex(float *vals);
	void addFace(int *vals);
	void render(AttributeNode* node);
	int numOfVerts();
	int numOfFaces();
};

#endif
