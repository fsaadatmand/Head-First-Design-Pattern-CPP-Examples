#ifndef THEATER_LIGHTS_H
#define THEATER_LIGHTS_H

#include <iostream>
#include <string>

class TheaterLights {
	public:
		TheaterLights(const std::string &d) : description(d) {}
		void on() { std::cout << description << " on\n"; }
		void off() { std::cout << description << " off\n"; }
		void dim(int level) { std::cout << description << " dimming to " << level << "%\n"; }
	private:
		std::string description;
};

#endif /* THEATER_LIGHTS_H */
