#ifndef __SCENENODE_H__
#define __SCENENODE_H__

#include "../datastructures/array.h"
#include "traversedata.h"

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
	// children related
	void addChild(SceneNode* node);
	// traversal
	virtual void traverse(TraverseData *data);
	// debug
	virtual void print();
	// getters
	SceneNode *getParent();
	Array<SceneNode*>* getChildren();
	int getId();
	// setters
	void setParent(SceneNode* param);
};

#endif
