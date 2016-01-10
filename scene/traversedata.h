#ifndef __TRAVERSEDATA_H__
#define __TRAVERSEDATA_H__

class AttributeNode;

// the instance variables in this class should never be modified
// during traversal of any node.

// Since all nodes in the SG should have access to all the variables
// in the traverse data instance, I am keeping all instance variables
// as public. This will also reduce overhead of methods calls during
// traversal.

class TraverseData {
public:
	// instance variables
	AttributeNode *currentAttr;
	// constructors
	TraverseData();
};

#endif
