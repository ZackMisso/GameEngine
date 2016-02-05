#ifndef __SCENEGRAPH_H__
#define __SCENEGRAPH_H__

#include "scenenode.h"

class SceneGraph {
private:
	// instance variables
	SceneNode *rootNode;
public:
	// constructors
	SceneGraph();
	// destructor
	~SceneGraph();
	// methods
	void clearScene();
	// traversal
	void traversal();
	// debug
	void print();
	// getters
	SceneNode* getRoot();	
};

#endif
