#ifndef __LIGHTNODE_H__
#define __LIGHTNODE_H__

#include "scenenode.h"
#include "../math/vec4.h"

class LightNode : public SceneNode {
private:
	// instance variables
	Vec4 ambient;
	Vec4 diffuse;
	Vec4 specular;
	float w;
	bool isOn;
public:
	// to be implemented
};

#endif
