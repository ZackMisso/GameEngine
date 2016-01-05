#include "transnode.h"
#include <iostream>

using namespace std;

TranslateNode::TranslateNode() {
	translation.xpos = 0.0f;
	translation.ypos = 0.0f;
	translation.zpos = 0.0f;
}

TranslateNode::TranslateNode(SceneNode *parent) : SceneNode(parent) {
	translation.xpos = 0.0f;
	translation.ypos = 0.0f;
	translation.zpos = 0.0f;
}

TranslateNode::TranslateNode(Vec3 trans,SceneNode *parent) : SceneNode(parent) {
	translation = trans;
}

void TranslateNode::traverse(TraverseData* data) {
	// to be implemented
}

void TranslateNode::print() {
	cout << "Translation Node:" << endl;
	translation.print();
}

void TranslateNode::setTranslation(Vec3 param) { translation = param; }
