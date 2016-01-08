#include "soundsub.h"

SoundSubsystem* SoundSubsystem::instance = 0x0;

SoundSubsystem::SoundSubsystem() {
	// to be implemented
}

SoundSubsystem::~SoundSubsystem() {
	// to be implemented
}

SoundSubsystem* SoundSubsystem::GetInstance() {
	return instance;
}

void SoundSubsystem::Initialize() {
	instance = new SoundSubsystem();
}

void SoundSubsystem::Destroy() {
	delete instance;
}

void SoundSubsystem::print() {
	// to be implemented
}
