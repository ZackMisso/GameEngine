#ifndef __TRAVERSEDATA_H__
#define __TRAVERSEDATA_H__

#include "../datastructures/stack.h"
#include "../datastructures/array.h"
#include "../physics/quat.h"

class CameraNode;
class AttributeNode;
class LightNode;
//class Quat;

// the instance variables in this class should never be modified
// during traversal of any node.

// Since all nodes in the SG should have access to all the variables
// in the traverse data instance, I am keeping all instance variables
// as public. This will also reduce overhead of methods calls during
// traversal.

class TraverseData {
public:
	// instance variables
	Stack<AttributeNode*>* attributes;
	Array<LightNode*>* activeLights;
	Quat orientation;
	CameraNode *activeCamera;
	long dt;
	// constructors
	TraverseData();
	// deconstructor
	~TraverseData();
	// modifier methods
	bool addLightToActiveLights(LightNode* light);
	bool containsLight(LightNode* light);
	void replaceActiveLightWihtLight(LightNode* active,LightNode* newLight);
	void removeLight(LightNode *light);
};

#endif
