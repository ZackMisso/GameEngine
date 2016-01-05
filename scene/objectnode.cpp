#include "objectnode.h"
#include <iostream>

using namespace std;

ObjectNode::ObjectNode() : SceneNode() {
	name = "";
	init();
}

ObjectNode::ObjectNode(string nam) : SceneNode() {
	name = nam;
	init();
}

ObjectNode::ObjectNode(string nam,SceneNode* par) : SceneNode(par) {
	name = nam;
	init();
}

void ObjectNode::init() {
	geomNode = 0x0;
	attriNode = 0x0;
	scale = 0x0;
	orientation = 0x0;
	position = 0x0;
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

GeomNode* ObjectNode::getGeomNode() { return geomNode; }
AttributeNode* ObjectNode::getAttributeNode() { return attriNode; }
ScaleNode* ObjectNode::getScale() { return scale; }
RotationNode* ObjectNode::getOrientation() { return orientation; }
TranslateNode* ObjectNode::getPosition() { return position; }
