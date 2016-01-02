#include "trimesh.h"

TriMesh::TriMesh() {
	vertices = new Array<Vertex*>();
	faces = new Array<Face*>();
}

TriMesh::~TriMesh() {
	while(vertices->getSize())
		delete vertices->remove(vertices->getSize()-1);
	while(faces->getSize())
		delete faces->remove(faces->getSize()-1);
	delete vertices;
	delete faces;
}

void TriMesh::calcNormals() {
	// to be implemented
}

void TriMesh::addVertex(float *vals) {
	// to be implemented
}

void TriMesh::addFace(int *vals) {
	// to be implemented
}

void TriMesh::render(AttributeNode* node) {
	// to be implemented
}

int TriMesh::numOfVerts() {
	return vertices->getSize();
}

int TriMesh::numOfFaces() {
	return faces->getSize();
}
