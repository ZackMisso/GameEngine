#ifndef __OBJECTNODE_H__
#define __OBJECTNODE_H__

#include "scenenode.h"
#include "attribnode.h"
#include "geomnode.h"
#include "scalenode.h"
#include "rotnode.h"
#include "transnode.h"
#include <string>

using namespace std;

// TODO :: Add logic to restrict certain nodes for children

class ObjectNode : public SceneNode {
private:
	// instance variables
	string name;
	GeomNode *geomNode;
	AttributeNode *attriNode;
	ScaleNode *scale;
	RotationNode *orientation;
	TranslateNode *position;
	// methods
	void init();
public:
	// constructors
	ObjectNode();
	ObjectNode(string nam);
	ObjectNode(string nam,SceneNode* par);
	// destructor
	~ObjectNode();
	// traversal
	virtual void traverse();
	// debug
	virtual void print();
	// getter methods
	GeomNode* getGeomNode();
	AttributeNode* getAttributeNode();
	ScaleNode* getScale();
	RotationNode* getOrientation();
	TranslateNode* getPosition();
};

#endif
