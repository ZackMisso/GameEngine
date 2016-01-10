#include "geomnode.h"
#include "attribnode.h"

GeomNode::GeomNode() : SceneNode() {
	mesh = 0x0;
}

GeomNode::GeomNode(TriMesh *shape,SceneNode* parent) : SceneNode(parent) {
	mesh = shape;
}

GeomNode::GeomNode(TriMesh *shape) : SceneNode() {
	mesh = shape;
}

GeomNode::~GeomNode() {
	if(mesh)
		delete mesh;
}

void GeomNode::traverse(TraverseData *data) {
	if(mesh)
		mesh->render(data->currentAttr);
	for(int i=0;i<children->getSize();i++)
		children->get(i)->traverse(data);
}

void GeomNode::print() {
	// to be implemented if needed
}
