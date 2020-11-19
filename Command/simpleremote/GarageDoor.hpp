#ifndef GARAGE_DOOR_H
#define GARAGE_DOOR_H

#include <iostream>

class GarageDoor {
	public:
		void up() { std::cout << "Garage Door is Up\n"; }
		void down() { std::cout << "Garage Door is Down\n"; }
		void stop() { std::cout << "Garage Door is Stopped\n"; }
		void lightOn() { std::cout << "Garage Door Light is On\n"; }
		void lightOff() { std::cout << "Garage Door Light is Off\n"; }
};

#endif /* GARAGE_DOOR_H */
