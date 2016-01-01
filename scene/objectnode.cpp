#include "objectnode.h"
#include <iostream>

using namespace std;

ObjectNode::ObjectNode() : SceneNode() {
	name = "";
}

ObjectNode::ObjectNode(string nam) : SceneNode() {
	name = nam;
}

ObjectNode::ObjectNode(string nam,SceneNode* par) : SceneNode(par) {
	name = nam;
}

ObjectNode::~ObjectNode() {
	// does nothing for now
}

void ObjectNode::traverse() {
	// does nothing for now
}

void ObjectNode::print() {
	cout << "ObjectNode :: " << name << endl;
}
