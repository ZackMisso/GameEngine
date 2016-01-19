#include "attribnode.h"

AttributeNode::AttributeNode(SceneNode* parent) : SceneNode(parent) {
	type = Attrib;
	normalMode = None;
	renderingMode = Solid;
}

void AttributeNode::traverse(TraverseData* data) {
	data->attributes->push(this);
	for(int i=0;i<children->getSize();i++)
		children->get(i)->traverse(data);
}

void AttributeNode::print() {
	// to be implemented later
}

RenderingMode AttributeNode::getRenderingMode() { return renderingMode; }
NormalMode AttributeNode::getNormalMode() { return normalMode; }

void AttributeNode::setRenderingMode(RenderingMode param) { renderingMode = param; }
void AttributeNode::setNormalMode(NormalMode param) { normalMode = param; }
