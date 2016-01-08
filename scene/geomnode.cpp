#include "geomnode.h"
//#include "scenenode.h"

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
	// fix the linker error here
	if(mesh)
		delete mesh;
}

void GeomNode::traverse(TraverseData *data) {
	//if(mesh)
	//	mesh->render(data->getCurrentAttr());
	//Array<SceneNode*>* chd = getChildren();
	//for(int i=0;i<chd->getSize();i++)
	//	chd->get(i)->traverse(data);
}

void GeomNode::print() {
	// to be implemented if needed
}
