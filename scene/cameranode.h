#ifndef __CAMERANODE_H__
#define __CAMERANODE_H__

#include "scenenode.h"
#include "traversedata.h"

class CameraNode : SceneNode {
private:
	// instance variables
public:
	CameraNode();
	CameraNode(SceneNode* parent);
	// traversal
	virtual void traverse(TraverseData* data);
	// debug
	virtual void print();
};

#endif
