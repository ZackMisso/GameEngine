#include "memsub.h"

MemorySubsystem::MemorySubsystem() {
	// to be implemented
}

MemorySubsystem::~MemorySubsystem() {
	// to be implemented
}

MemorySubsystem* MemorySubsystem::GetInstance() {
	return instance;
}

void MemorySubsystem::Initialize() {
	instance = new MemorySubsystem();
}

void MemorySubsystem::Destroy() {
	delete instance;
}

void MemorySubsystem::print() { 
	// to be implemented
}
