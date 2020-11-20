#ifndef AMPLIFIER_H
#define AMPLIFIER_H

#include "Tuner.h"
#include "StreamingPlayer.h"
#include <iostream>
#include <string>

class Amplifier {
	public:
		Amplifier(const std::string &d) : description(d) {}
		void on() { std::cout << description << " on\n"; }
		void off() { std::cout << description << " off\n"; }
		void setStereoSound() { std::cout << description << " stereo mode on\n"; }
		void setSurroundSound() { std::cout << description << " surround sound on (5 speakers, 1 subwoofer)\n"; }
		void setVolume(int level) { std::cout << description << " setting volume to " << level << '\n'; }
		void setTuner(Tuner *t);
		void setStreamingPlayer(StreamingPlayer *p);
		std::string toString() { return description; }
	private:
		std::string description;
		Tuner *tuner = nullptr;
		StreamingPlayer *player = nullptr;
};

inline
void
Amplifier::setTuner(Tuner *t)
{
	std::cout << description << " setting tuner to " << player << '\n';
	tuner = t;
}

inline
void
Amplifier::setStreamingPlayer(StreamingPlayer *p)
{
	std::cout << description << " setting Streaming player to " << player << '\n';
	player = p;
}

#endif /* AMPLIFIER_H */
