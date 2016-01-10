#include "lightnode.h"

LightNode::LightNode() : SceneNode() {
	ambient.xpos = 0.0f;
	ambient.ypos = 0.0f;
	ambient.zpos = 0.0f;
	ambient.wpos = 1.0f;
	diffuse.xpos = 1.0f;
	diffuse.ypos = 1.0f;
	diffuse.zpos = 1.0f;
	diffuse.wpos = 1.0f;
	specular.xpos = 1.0f;
	specular.ypos = 1.0f;
	specular.zpos = 1.0f;
	specular.wpos = 1.0f;
	w = 1.0f;
	isOn = false;
}

LightNode::LightNode(SceneNode* parent) : SceneNode(parent) {
	ambient.xpos = 0.0f;
	ambient.ypos = 0.0f;
	ambient.zpos = 0.0f;
	ambient.wpos = 1.0f;
	diffuse.xpos = 1.0f;
	diffuse.ypos = 1.0f;
	diffuse.zpos = 1.0f;
	diffuse.wpos = 1.0f;
	specular.xpos = 1.0f;
	specular.ypos = 1.0f;
	specular.zpos = 1.0f;
	specular.wpos = 1.0f;
	w = 1.0f;
	isOn = false;
}

LightNode::LightNode(SceneNode* parent,Vec4 a,Vec4 d,Vec4 s,float val) {
	ambient = a;
	diffuse = d;
	specular = s;
	w = val;
	isOn = false;
}

void LightNode::traverse(TraverseData* data) {
	// does nothing because lights are processed before SG traversal.
	// Also light nodes do not have children so this method does nothing.
}

void LightNode::print() {
	// to be implemented
}

void LightNode::applyLight(int light,Vec3 pos) {
	/* GLfloat lpos[4];
	lpos[0] = pos.xpos;
	lpos[1] = pos.ypos;
	lpos[2] = pos.zpos;
	lpos[3] = w;

	GLfloat lam[4];
	lam[0] = ambient.xpos;
	lam[1] = ambient.ypos;
	lam[2] = ambient.zpos;
	lam[3] = ambient.wpos;

	GLfloat ldif[4];
	ldif[0] = diffuse.xpos;
	ldif[1] = diffuse.ypos;
	ldif[2] = diffuse.zpos;
	ldif[3] = diffuse.wpos;

	GLfloat lspe[4];
	lspe[0] = specular.xpos;
	lspe[1] = specular.ypos;
	lspe[2] = specular.zpos;
	lspe[3] = specular.wpos;
	
	switch(light) {
		case 0: {
			glLightfv(GL_LIGHT0,GL_AMBIENT,lam);
			glLightfv(GL_LIGHT0,GL_DIFFUSE,ldif);
			glLightfv(GL_LIGHT0,GL_SPECULAR,lspe);
			glLightfv(GL_LIGHT0,GL_POSITION,lpos);
			break;
		}
		case 1: {
			glLightfv(GL_LIGHT1,GL_AMBIENT,lam);
			glLightfv(GL_LIGHT1,GL_DIFFUSE,ldif);
			glLightfv(GL_LIGHT1,GL_SPECULAR,lspe);
			glLightfv(GL_LIGHT1,GL_POSITION,lpos);
			break;
		}
		case 2: {
			glLightfv(GL_LIGHT2,GL_AMBIENT,lam);
			glLightfv(GL_LIGHT2,GL_DIFFUSE,ldif);
			glLightfv(GL_LIGHT2,GL_SPECULAR,lspe);
			glLightfv(GL_LIGHT2,GL_POSITION,lpos);
			break;
		}
		case 3: {
			glLightfv(GL_LIGHT3,GL_AMBIENT,lam);
			glLightfv(GL_LIGHT3,GL_DIFFUSE,ldif);
			glLightfv(GL_LIGHT3,GL_SPECULAR,lspe);
			glLightfv(GL_LIGHT3,GL_POSITION,lpos);
			break;
		}
		case 4: {
			glLightfv(GL_LIGHT4,GL_AMBIENT,lam);
			glLightfv(GL_LIGHT4,GL_DIFFUSE,ldif);
			glLightfv(GL_LIGHT4,GL_SPECULAR,lspe);
			glLightfv(GL_LIGHT4,GL_POSITION,lpos);
			break;
		}
		case 5: {
			glLightfv(GL_LIGHT5,GL_AMBIENT,lam);
			glLightfv(GL_LIGHT5,GL_DIFFUSE,ldif);
			glLightfv(GL_LIGHT5,GL_SPECULAR,lspe);
			glLightfv(GL_LIGHT5,GL_POSITION,lpos);
			break;
		}
		case 6: {
			glLightfv(GL_LIGHT6,GL_AMBIENT,lam);
			glLightfv(GL_LIGHT6,GL_DIFFUSE,ldif);
			glLightfv(GL_LIGHT6,GL_SPECULAR,lspe);
			glLightfv(GL_LIGHT6,GL_POSITION,lpos);
			break;
		}
		case 7: {
			glLightfv(GL_LIGHT7,GL_AMBIENT,lam);
			glLightfv(GL_LIGHT7,GL_DIFFUSE,ldif);
			glLightfv(GL_LIGHT7,GL_SPECULAR,lspe);
			glLightfv(GL_LIGHT7,GL_POSITION,lpos);
			break;
		}
		default:
			break;
	} */
}

void LightNode::deApplyAll() {
	/*GLfloat tmp[4];
	tmp[0] = 0.0f;
	tmp[1] = 0.0f;
	tmp[2] = 0.0f;
	tmp[3] = 1.0f;
	
	glLightfv(GL_LIGHT0,GL_AMBIENT,tmp);
	glLightfv(GL_LIGHT0,GL_DIFFUSE,tmp);
	glLightfv(GL_LIGHT0,GL_SPECULAR,tmp);
	glLightfv(GL_LIGHT0,GL_POSITION,tmp);

	glLightfv(GL_LIGHT1,GL_AMBIENT,tmp);
	glLightfv(GL_LIGHT1,GL_DIFFUSE,tmp);
	glLightfv(GL_LIGHT1,GL_SPECULAR,tmp);
	glLightfv(GL_LIGHT1,GL_POSITION,tmp);

	glLightfv(GL_LIGHT2,GL_AMBIENT,tmp);
	glLightfv(GL_LIGHT2,GL_DIFFUSE,tmp);
	glLightfv(GL_LIGHT2,GL_SPECULAR,tmp);
	glLightfv(GL_LIGHT2,GL_POSITION,tmp);

	glLightfv(GL_LIGHT3,GL_AMBIENT,tmp);
	glLightfv(GL_LIGHT3,GL_DIFFUSE,tmp);
	glLightfv(GL_LIGHT3,GL_SPECULAR,tmp);
	glLightfv(GL_LIGHT3,GL_POSITION,tmp);

	glLightfv(GL_LIGHT4,GL_AMBIENT,tmp);
	glLightfv(GL_LIGHT4,GL_DIFFUSE,tmp);
	glLightfv(GL_LIGHT4,GL_SPECULAR,tmp);
	glLightfv(GL_LIGHT4,GL_POSITION,tmp);

	glLightfv(GL_LIGHT5,GL_AMBIENT,tmp);
	glLightfv(GL_LIGHT5,GL_DIFFUSE,tmp);
	glLightfv(GL_LIGHT5,GL_SPECULAR,tmp);
	glLightfv(GL_LIGHT5,GL_POSITION,tmp);

	glLightfv(GL_LIGHT6,GL_AMBIENT,tmp);
	glLightfv(GL_LIGHT6,GL_DIFFUSE,tmp);
	glLightfv(GL_LIGHT6,GL_SPECULAR,tmp);
	glLightfv(GL_LIGHT6,GL_POSITION,tmp);

	glLightfv(GL_LIGHT7,GL_AMBIENT,tmp);
	glLightfv(GL_LIGHT7,GL_DIFFUSE,tmp);
	glLightfv(GL_LIGHT7,GL_SPECULAR,tmp);
	glLightfv(GL_LIGHT7,GL_POSITION,tmp); */
}

Vec4 LightNode::getAmbient() { return ambient; }
Vec4 LightNode::getDiffuse() { return diffuse; }
Vec4 LightNode::getSpecular() { return specular; }
float LightNode::getW() { return w; }
bool LightNode::getIsOn() { return isOn; }

void LightNode::setAmbient(Vec4 param) { ambient = param; }
void LightNode::setDiffuse(Vec4 param) { diffuse = param; }
void LightNode::setSpecular(Vec4 param) { specular = param; }
void LightNode::setW(float param) { w = param; }
void LightNode::setIsOn(bool param) { isOn = param; }

void LightNode::setAmbient(float xval,float yval,float zval,float wval) {
	ambient.xpos = xval;
	ambient.ypos = yval;
	ambient.zpos = zval;
	ambient.wpos = wval;
}

void LightNode::setDiffuse(float xval,float yval,float zval,float wval) {
	diffuse.xpos = xval;
	diffuse.ypos = yval;
	diffuse.zpos = zval;
	diffuse.wpos = wval;
}

void LightNode::setSpecular(float xval,float yval,float zval,float wval) {
	specular.xpos = xval;
	specular.ypos = yval;
	specular.zpos = zval;
	specular.wpos = wval;
}
