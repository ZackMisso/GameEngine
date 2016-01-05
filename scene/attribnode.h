#ifndef __ATTRIBUTENODE_H__
#define __ATTRIBUTENODE_H__

#include "scenenode.h"
#include "traversedata.h"

enum RenderingMode {Shaded,Wireframe,Solid,Point};
enum NormalMode {V,F,None};

class AttributeNode : public SceneNode{
private:
	// instance variables
	RenderingMode renderingMode;
	NormalMode normalMode;
public:
	// constructors
	AttributeNode(SceneNode *parent);
	// traversal
	virtual void traverse(TraverseData *data);
	// debug
	virtual void print();
	// getters
	RenderingMode getRenderingMode();
	NormalMode getNormalMode();
	// setters
	void setRenderingMode(RenderingMode param);
	void setNormalMode(NormalMode param);
};

#endif
