#include "Amplifier.h"
#include "Tuner.h"
#include "StreamingPlayer.h"
#include "CDPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"
#include "HomeTheaterFacade.h"

int main()
{

	auto amp = new Amplifier("Amplifier");
	auto tuner = new Tuner("AM/FM Tuner", amp);
	auto player = new StreamingPlayer("Streaming Player", amp);
	[[maybe_unused]] auto cd = new CDPlayer("CD Player", amp);
	auto projector = new Projector("Projector", player);
	auto lights = new TheaterLights("Theater Ceiling Lights");
	auto screen = new Screen("Theater Screen");
	auto popper = new PopcornPopper("Popcorn Popper");

	auto homeTheater =
		new HomeTheaterFacade(amp, tuner, player, projector, screen, lights, popper);

	homeTheater->watchMovie("Children of Men");
	homeTheater->endMovie();


	return 0;
}
