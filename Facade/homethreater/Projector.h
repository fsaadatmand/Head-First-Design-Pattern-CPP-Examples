#ifndef PROJECTOR_H
#define PROJECTOR_H

#include "StreamingPlayer.h"
#include <iostream>
#include <string>

class Projector {
	public:
		Projector(const std::string d, StreamingPlayer *p) : description(d), player(p) {}
		void on() { std::cout << description << " on\n"; }
		void off() { std::cout << description << " off\n"; }
		void wideScreenMode() { std::cout << description << " in widescreen mode (16x9 aspect ratio)\n"; }
		void tvMode() { std::cout << description << " in tv mode (4x3 aspect ratio)\n"; }
		std::string toString() { return description; }
	private:
		std::string description;
		[[maybe_unused]] StreamingPlayer *player;
};

#endif /* PROJECTOR_H */
