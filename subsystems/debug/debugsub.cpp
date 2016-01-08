#include "debugsub.h"

DebugSubsystem* DebugSubsystem::instance = 0x0;

DebugSubsystem::DebugSubsystem() {
	// to be implemented
}

DebugSubsystem::~DebugSubsystem() {
	// to be implemented
}

DebugSubsystem* DebugSubsystem::GetInstance() {
	return instance;
}

void DebugSubsystem::Initialize() {
	instance = new DebugSubsystem();
}

void DebugSubsystem::Destroy() {
	delete instance;
}

void DebugSubsystem::print() {
	// to be implemented maybe
}
