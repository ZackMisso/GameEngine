#include "scenegraph.h"
#include "objectnode.h"

SceneGraph::SceneGraph() {
	rootNode = new ObjectNode("world");
}

SceneGraph::~SceneGraph() {
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

void SceneGraph::traversal() {
	//rootNode->traverse();
}

void SceneGraph::print() {
	// implement for debugging purposes
}
