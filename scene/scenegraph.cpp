#include "scenegraph.h"
#include "objectnode.h"

SceneGraph* SceneGraph::instance = 0x0;

SceneGraph::SceneGraph() {
	rootNode = new ObjectNode("world");
}

SceneGraph::~SceneGraph() {
	clearScene();
	delete rootNode;
}

SceneGraph* SceneGraph::GetInstance() {
	return instance;
}

void SceneGraph::Initialize() {
	instance = new SceneGraph();
}

void SceneGraph::Destroy() {
	delete instance;
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
