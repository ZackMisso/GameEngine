#include "cameranode.h"

CameraNode::CameraNode() : SceneNode() {
	type = Cam;
	// to be implemented
}

CameraNode::CameraNode(SceneNode* parent) : SceneNode(parent) {
	type = Cam;
	// to be implemented
}

void CameraNode::traverse(TraverseData* data) {
	// to be implemented
}

void CameraNode::print() {
	// to be implemented
}
