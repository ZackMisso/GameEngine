#ifndef __SCENENODE_H__
#define __SCENENODE_H__

#include "../datastructures/array.h"

// All nodes for the scene graph will extend this class

class SceneNode {
private:
	// instance variables
	SceneNode *parent;
	Array<SceneNode*> *children;
	int sceneId;
public:
	// constructors and destructors
	SceneNode();
	SceneNode(SceneNode* par);
	~SceneNode();
	// traversal
	virtual void traverse();
	// debug
	virtual void print();
	// getters
	int getId();
};

#endif
