#ifndef CD_PLAYER_H
#define CD_PLAYER_H

#include "Amplifier.h"
#include "Tuner.h"
#include <iostream>
#include <string>

class CDPlayer {
	public:
		CDPlayer(const std::string &d, Amplifier *a) : description(d), amplifier(a) {}
		void on() { std::cout << description << " on\n"; }
		void off() { std::cout << description << " off\n"; }
		void eject();
		void play(const std::string &m);
		void play(int chapter);
		void stop();
		void pause() { std::cout << description << " paused \"" << title << "\"\n"; }
		std::string toString() { return description; }
	private:
		std::string description;
		std::string title;
		int currentTrack = 0;
		[[maybe_unused]] Amplifier *amplifier = nullptr;
};

inline
void
CDPlayer::eject()
{
	title = nullptr;
	std::cout << description << " eject\n";
}

inline
void
CDPlayer::play(const std::string &t)
{
	title = t;
	currentTrack = 0;
	std::cout << description << " playing \"" << title << "\"\n";
}

inline
void 
CDPlayer::play(int track)
{
	if (!title.empty())
		std::cout << description << " can't play track " << currentTrack << ", no cd inserted\n";
	else {
		currentTrack = track;
		std::cout << description << " playing track " << currentTrack << '\n';
	}
}

inline
void
CDPlayer::stop()
{
	currentTrack = 0;
	std::cout << description << " stopped\n";
}

#endif /* CD_PLAYER_H */
