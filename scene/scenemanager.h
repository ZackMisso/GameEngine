#ifndef __SCENEMANAGER_H__
#define __SCENEMANAGER_H__

#include "scenegraph.h"

class SceneManager {
private:
	SceneGraph* graph;
public:
	// constructor
	SceneManager();
	// deconstructor
	~SceneManager();
	// render
	void renderScene();
	// SceneGraph methods
	SceneNode* getSceneRoot();
};

#endif
