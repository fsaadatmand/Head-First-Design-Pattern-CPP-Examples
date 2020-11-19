#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>

class Light {
	public:
		void on() { std::cout << "Light is On\n"; }
		void off() { std::cout << "Light is off\n"; }
};

#endif /* LIGHT_H */
