#include "scalenode.h"
#include <iostream>

using namespace std;

ScaleNode::ScaleNode() : SceneNode() {
	scale.xpos = 1.0f;
	scale.ypos = 1.0f;
	scale.zpos = 1.0f;
}

ScaleNode::ScaleNode(SceneNode* parent) : SceneNode(parent) {
	scale.xpos = 1.0f;
	scale.ypos = 1.0f;
	scale.zpos = 1.0f;
}

ScaleNode::ScaleNode(Vec3 scl,SceneNode* parent) : SceneNode(parent) {
	scale = scl;
}

void ScaleNode::traversal(TraverseData* data) {
	// to be implemented
}

void ScaleNode::print() {
	cout << "Scale Node:" << endl;
	scale.print();
}

void ScaleNode::setScale(Vec3 param) { scale = param; }
