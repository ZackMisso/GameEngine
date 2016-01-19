#include "rotnode.h"
#include <iostream>

using namespace std;

RotationNode::RotationNode() : SceneNode() {
	type = RotN;
	rotation.v.xpos = 1.0f;
	rotation.v.ypos = 0.0f;
	rotation.v.zpos = 0.0f;
}

RotationNode::RotationNode(SceneNode* parent) : SceneNode(parent) {
	type = RotN;
	rotation.v.xpos = 1.0f;
	rotation.v.ypos = 0.0f;
	rotation.v.zpos = 0.0f;
}

RotationNode::RotationNode(Quat rot,SceneNode* parent) : SceneNode(parent) {
	type = RotN;
	rotation = rot;
}

void RotationNode::traverse(TraverseData *data) {
	// to be implemented
}

void RotationNode::print() {
	cout << "Printing Quaternion:" << endl;
	rotation.print();
}

void RotationNode::setRotation(Quat param) {
	rotation = param;
}
