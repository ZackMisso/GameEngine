#include "GuiManager.h"

GuiManager* GuiManager::instance = 0x0;

GuiManager::GuiManager() {
	// to be implemented
}

GuiManager::~GuiManager() {
	// to be implemented
}

GuiManager* GuiManager::GetInstance() {
	return instance;
}

void GuiManager::Initialize() {
	instance = new GuiManager();
}

void GuiManager::Destroy() {
	delete instance;
}

void GuiManager::print() {
	// to be impelemented if needed
}
