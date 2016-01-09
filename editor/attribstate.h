#ifndef __ATTRIBUTESTATE_H__
#define __ATTRIBUTESTATE_H__

#include "editorstate.h"

class AttributeState : public EditorState {
public:
	// constructors
	AttributeState(SceneNode* node);
	// methods
	virtual void displayState();
	virtual void displayOptions();
	virtual void reactToOption(int option);
	virtual EditorState reactToTransition(SceneNode* node);
	virtual void handleInput();
};

#endif
