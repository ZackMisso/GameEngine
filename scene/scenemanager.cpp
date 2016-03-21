#include "scenemanager.h"

SceneManager::SceneManager() {
	graph = new SceneGraph();
}

SceneManager::~SceneManager() {
	delete graph;
}

void SceneManager::renderScene() {
	graph->traversal();
}

SceneNode* SceneManager::getSceneRoot() {
	return graph->getRoot();
}
