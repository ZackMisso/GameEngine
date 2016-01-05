#ifndef __ROTATIONNODE_H__
#define __ROTATIONNODE_H__

#include "scenenode.h"
#include "../physics/Quat.h"

class RotationNode : public SceneNode {
private:
	// instance variable
	Quat rotation;
public:
	// constructors
	RotationNode();
	RotationNode(SceneNode* parent);
	RotationNode(Quat rot,SceneNode* parent);
	// traversal
	virtual void traverse(TraverseData* data);
	// debug
	virtual void print();
	// setters
	void setRotation(Quat param);
};

#endif
