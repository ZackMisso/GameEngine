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
	// does all normal calculations
	for(int i=0;i<faces->getSize();i++)
		faces->get(i)->calculateNorm(vertices);
	for(int i=0;i<vertices->getSize();i++)
		vertices->get(i)->normalizeNorm();
}

void TriMesh::addVertex(float *vals) {
	vertices->add(new Vertex(vals));
}

void TriMesh::addFace(int *vals) {
	faces->add(new Face(vals));
}

void TriMesh::render(AttributeNode* node) {
	// I will change this once I figure out how to incorporate shaders into the
	// scene graph, but for now all lighting will be handled by GL_LIGHTs
	if(node && node->getRenderingMode() == Shaded) {
		// Gotta import OpenGl... gonna be done in attribute node class
		//glEnable(GL_LIGHTING);
		//glEnable(GL_LIGHT0);
		//glEnable(GL_LIGHT1);
		//glEnable(GL_LIGHT2);
		//glEnable(GL_LIGHT3);
		//glEnable(GL_LIGHT4);
		//glEnable(GL_LIGHT5);
		//glEnable(GL_LIGHT6);
		//glEnable(GL_LIGHT7);
	}
	for(int i=0;i<faces->getSize();i++)
		faces->get(i)->render(node,vertices);
	if(node && node->getRenderingMode() == Shaded) {
		//glDisable(GL_LIGHTING);
		//glDisable(GL_LIGHT0);
		//glDisable(GL_LIGHT1);
		//glDisable(GL_LIGHT2);
		//glDisable(GL_LIGHT3);
		//glDisable(GL_LIGHT4);
		//glDisable(GL_LIGHT5);
		//glDisable(GL_LIGHT6);
		//glDisable(GL_LIGHT7);
	}
}

int TriMesh::numOfVerts() {
	return vertices->getSize();
}

int TriMesh::numOfFaces() {
	return faces->getSize();
}
