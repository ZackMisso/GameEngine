#include "threadsub.h"

ThreadSubsystem::ThreadSubsystem() {
	// to be implemented
}

ThreadSubsystem::~ThreadSubsystem() {
	// to be implemented
}

ThreadSubsystem* ThreadSubsystem::GetInstance() {
	return instance;
}

void ThreadSubsystem::Initialize() {
	instance = new ThreadSubsystem();
}

void ThreadSubsystem::Destroy() {
	delete instance;
}

void ThreadSubsystem::print() {
	// to be implemented
}
