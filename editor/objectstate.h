#ifndef __OBJECTSTATE_H__
#define __OBJECTSTATE_H__

#include "editorstate.h"

class ObjectState : public EditorState {
public:
	// constructors
	ObjectState(SceneNode* node);
	// methods
	virtual void displayState();	
	virtual void displayOptions();
	virtual void reactToOption(int option);
	virtual EditorState reactToTransition(SceneNode* node);
	virtual void handleInput();
};

#endif
