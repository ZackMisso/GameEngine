#include "filersub.h"

FilerSubsystem* FilerSubsystem::instance = 0x0;

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
