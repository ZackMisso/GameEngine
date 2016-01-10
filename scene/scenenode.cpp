#include "scenenode.h"

SceneNode::SceneNode() {
	parent = 0x0;
	children = 0x0;
	// add logic to get the next id
	sceneId = -1;
}

SceneNode::SceneNode(SceneNode *par) {
	parent = par;
	children = 0x0;
	// add logic to get the next id
	sceneId = -1;
}

SceneNode::~SceneNode() {
	if(children) {
		while(children->getSize()>0)
			delete children->remove(children->getSize()-1);
		delete children;
	}
	// parent will be deleted after its children are deleted.
	// so no logic is needed to delete the parent pointer.
}

void SceneNode::addChild(SceneNode *node) {
	children->add(node);
}

void SceneNode::traverse(TraverseData *data) {
	// does nothing... for now
}

void SceneNode::print() {
	// does nothing... for now
}
