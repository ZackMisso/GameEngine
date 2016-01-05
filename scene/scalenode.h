#ifndef __SCALENODE_H__
#define __SCALENODE_H__

#include "scenenode.h"
#include "traversedata.h"
#include "../math/vec3.h"

class ScaleNode : public SceneNode {
private:
	// instance variables
	Vec3 scale;
public:
	// constructors
	ScaleNode();
	ScaleNode(SceneNode* parent);
	ScaleNode(Vec3 scl,SceneNode* parent);
	// traversal
	virtual void traversal(TraverseData* data);
	// debug
	virtual void print();
	// setters
	void setScale(Vec3 param);
};

#endif
