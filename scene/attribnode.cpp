#include "attribnode.h"

AttributeNode::AttributeNode(SceneNode* parent) : SceneNode(parent) {
	// to be implemented
}

void AttributeNode::traverse(TraverseData* data) {
	// to be implemented
}

void AttributeNode::print() {
	// to be implemented
}

RenderingMode AttributeNode::getRenderingMode() { return renderingMode; }
NormalMode AttributeNode::getNormalMode() { return normalMode; }

void AttributeNode::setRenderingMode(RenderingMode param) { renderingMode = param; }
void AttributeNode::setNormalMode(NormalMode param) { normalMode = param; }
