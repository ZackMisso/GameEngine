#include "traversedata.h"
#include "attribnode.h"
#include "cameranode.h"
#include "lightnode.h"
//#include "../physics/quat.h"

TraverseData::TraverseData() {
	attributes = new Stack<AttributeNode*>();
	activeLights = new Array<LightNode*>();
	orientation();
	activeCamera = 0x0;
	dt = 0;
}

TraverseData::~TraverseData() {
	while(attributes->hasNext())
		attributes->pop();
	while(activeLights->getSize())
		activeLights->removeLast();
	delete attributes;
	delete activeLights;
}

bool TraverseData::addLightToActiveLights(LightNode* light) {
	if(activeLights->getSize()==8 || containsLight(light))
		return false;
	activeLights->add(light);
	return true;
}

bool TraverseData::containsLight(LightNode* light) {
	return activeLights->contains(light)
}

void TraverseData::replaceActiveLightWithiLight(LightNode* active,LightNode* newLight) {
	for(int i=0;i<activeLights->getSize();i++)
		if(activeLights->get(i) == active)
			activeLights->replace(i,newLight);
}

void TraverseData::removeLight(LightNode* light) {
	for(int i=0;i<activeLights->getSize();i++)
		if(activeLights->get(i)==light)
			activeLights->remove(i);
}
