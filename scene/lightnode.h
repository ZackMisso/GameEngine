#ifndef __LIGHTNODE_H__
#define __LIGHTNODE_H__

#include "scenenode.h"
#include "../math/vec4.h"
#include "../math/vec3.h"

class LightNode : public SceneNode {
private:
	// instance variables
	Vec4 ambient;
	Vec4 diffuse;
	Vec4 specular;
	float w;
	bool isOn;
public:
	// constructors
	LightNode();
	LightNode(SceneNode* parent);
	LightNode(SceneNode* parent,Vec4 a,Vec4 d,Vec4 s,float val);
	// traversal
	virtual void traverse(TraverseData* data);
	// debug
	virtual void print();
	// methods
	void applyLight(int light,Vec3 pos);
	static void deApplyAll();
	// getters
	Vec4 getAmbient();
	Vec4 getDiffuse();
	Vec4 getSpecular();
	float getW();
	bool getIsOn();
	// setters
	void setAmbient(Vec4 param);
	void setDiffuse(Vec4 param);
	void setSpecular(Vec4 param);
	void setAmbient(float xval,float yval,float zval,float wval);
	void setDiffuse(float xval,float yval,float zval,float wval);
	void setSpecular(float xval,float yval,float zval,float wval);
	void setW(float param);
	void setIsOn(bool param);
};

#endif
