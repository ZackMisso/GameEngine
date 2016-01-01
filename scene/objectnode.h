#ifndef __OBJECTNODE_H__
#define __OBJECTNODE_H__

#include "scenenode.h"
#include <string>

using namespace std;

// TODO :: Add logic to restrict certain nodes for children

class ObjectNode : public SceneNode {
private:
	// instance variables
	string name;
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
};

#endif
