#include "scenegraph.h"
#include "objectnode.h"

SceneGraph::SceneGraph() {
	rootNode = new ObjectNode("world");
}

SceneGraph::~SceneGraph() {
	clearScene();
	delete rootNode;
}

void SceneGraph::clearScene() {
	// to be implemented
}

void SceneGraph::traversal() {
	//rootNode->traverse();
}

void SceneGraph::print() {
	// implement for debugging purposes
}

SceneNode* SceneGraph::getRoot() { return rootNode; }
