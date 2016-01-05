#ifndef __TRANSLATENODE_H__
#define __TRANSLATENODE_H__

#include "scenenode.h"
#include "../math/vec3.h"
#include "traversedata.h"

class TranslateNode : public SceneNode {
private:
	// instance variables
	Vec3 translation;
public:
	// constructor
	TranslateNode();
	TranslateNode(SceneNode* parent);
	TranslateNode(Vec3 trans,SceneNode* parent);
	// traversal
	virtual void traverse(TraverseData* data);
	// debug
	virtual void print();
	// setters
	void setTranslation(Vec3 param);
};

#endif
