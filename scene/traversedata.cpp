#include "traversedata.h"
#include "attribnode.h"

TraverseData::TraverseData() {
	currentAttr = 0x0;
}

AttributeNode* TraverseData::getCurrentAttr() { return currentAttr; }
