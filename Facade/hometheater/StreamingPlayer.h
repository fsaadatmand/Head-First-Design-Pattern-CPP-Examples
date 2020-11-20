#ifndef STREAMING_PLAYER_H
#define STREAMING_PLAYER_H

#include <iostream>
#include <string>
#include <string_view>

class Amplifier;
class StreamingPlayer {
	public:
		StreamingPlayer(const std::string &d, Amplifier *a) : description(d), amplifier(a) {}
		void on() { std::cout << description << " on\n"; }
		void off() { std::cout << description << " off\n"; }
		void play(const std::string &m);
		void play(int chapter);
		void stop();
		void pause() { std::cout << description + " paused \"" + movie + "\"\n"; }
		void setTwoChannelAudio() { std::cout << description << " set two channel audio\n"; }
		void setSurroundAudio() { std::cout << description << " set surround audio\n"; }
		std::string toString() { return description; }
	private:
		std::string description;
		int currentChapter;
		[[maybe_unused]] Amplifier *amplifier;
		std::string movie;
};

inline
void
StreamingPlayer::stop()
{
	currentChapter = 0;
	std::cout << description << " stopped \"" << movie << "\"\n";
}

inline
void
StreamingPlayer::play(const std::string &m) {
	movie = m;
	currentChapter = 0;
	std::cout << description + " playing \"" + movie + "\"\n";
}

inline
void
StreamingPlayer::play(int chapter)
{
	if (!movie.empty()) {
		std::cout << description + " can't play chapter " << chapter << " no movie selected\n";
	} else {
		currentChapter = chapter;
		std::cout << description + " playing chapter " << currentChapter << " of \"" + movie + "\"\n";
	}
}

#endif /* STREAMING_PLAYER_H */
