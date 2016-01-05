#ifndef __TRAVERSEDATA_H__
#define __TRAVERSEDATA_H__

//#include "attribnode.h"
class AttributeNode;

// the instance variables in this class should never be modified
// during traversal of any node

class TraverseData {
private:
	// instance variables
	AttributeNode *currentAttr;
public:
	// constructors
	TraverseData();
	// getters
	AttributeNode* getCurrentAttr();
};

#endif
