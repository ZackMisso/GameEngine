#ifndef __SCENENODE_H__
#define __SCENENODE_H__

#include "../datastructures/array.h"
#include "traversedata.h"

// All nodes for the scene graph will extend this class

enum NodeType {Attrib,Geo,Obj,Scl,RotN,Trans,Lgt,Cam,NoN};

class SceneNode {
protected:
	// instance variables
	SceneNode *parent;
	Array<SceneNode*> *children;
	NodeType type;
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
};

#endif
