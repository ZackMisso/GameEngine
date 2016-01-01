#include "filersub.h"

FilerSubsystem::FilerSubsystem() {
	// to be implemented
}

FilerSubsystem::~FilerSubsystem() {
	// to be implemented
}

FilerSubsystem* FilerSubsystem::GetInstance() {
	return instance;
}

void FilerSubsystem::Initialize() {
	instance = new FilerSubsystem();
}

void FilerSubsystem::Destroy() {
	delete instance;
}
