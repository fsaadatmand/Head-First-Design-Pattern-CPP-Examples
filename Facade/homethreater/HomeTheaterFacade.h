#ifndef HOME_THEATER_FACADE_H
#define HOME_THEATER_FACADE_H

#include "Amplifier.h"
#include "Tuner.h"
#include "StreamingPlayer.h"
#include "CDPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"
#include <iostream>
#include <string>

class HomeTheaterFacade {
	public:
		HomeTheaterFacade(Amplifier *a, Tuner *t, StreamingPlayer *sp, Projector *p,
				Screen *s, TheaterLights *l, PopcornPopper *pp) : amp(a), tuner(t), 
		player(sp),projector(p), screen(s), lights(l), popper(pp) {}
		void watchMovie(const std::string &movie);
		void endMovie();
		void ListenToRadio(double frequency);
		void endRadio();
	private:
		Amplifier *amp;
		Tuner *tuner;
		StreamingPlayer *player;
		[[maybe_unused]] CDPlayer *cd;
		Projector *projector;
		Screen *screen;
		TheaterLights *lights;
		PopcornPopper *popper;
};

inline
void
HomeTheaterFacade::watchMovie(const std::string &movie)
{
	std::cout << "Get ready to watch a movie...\n";
	popper->on();
	popper->pop();
	lights->dim(10);
	screen->down();
	projector->on();
	projector->wideScreenMode();
	amp->on();
	amp->setStreamingPlayer(player);
	amp->setSurroundSound();
	amp->setVolume(5);
	player->on();
	player->play(movie);
}

inline
void 
HomeTheaterFacade::endMovie() {
	std::cout << "Shutting movie theater down...\n";
	popper->off();
	lights->on();
	screen->up();
	projector->off();
	amp->off();
	player->stop();
	player->off();
}
	
inline
void
HomeTheaterFacade::ListenToRadio(double frequency) {
	std::cout << "Tuning in the airwaves...\n";
	tuner->on();
	tuner->setFrequency(frequency);
	amp->on();
	amp->setVolume(5);
	amp->setTuner(tuner);
}

inline
void 
HomeTheaterFacade::endRadio() {
	std::cout << "Shutting down the tuner...\n";
	tuner->off();
	amp->off();
}

#endif /* HOME_THEATER_FACADE_H */
