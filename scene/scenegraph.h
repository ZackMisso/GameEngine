#ifndef __SCENEGRAPH_H__
#define __SCENEGRAPH_H__

#include "scenenode.h"

// Singleton Class

class SceneGraph {
private:
	// instance variables
	SceneNode *rootNode;
	static SceneGraph *instance;
	// constructors
	SceneGraph();
public:
	// destructor
	~SceneGraph();
	// creation
	static SceneGraph* GetInstance();
	static void Initialize();
	static void Destroy();
	// traversal
	void traversal();
	// debug
	void print();
};

SceneGraph* SceneGraph::instance = 0x0;

#endif
