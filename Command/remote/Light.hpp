#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>
#include <string>

class Light {
	public:
		Light(const std::string &l) : location(l) { }
		void on() { std::cout << location << " Light is On\n"; }
		void off() { std::cout << location << " Light is off\n"; }
	private:
		std::string location;
};

#endif /* LIGHT_H */
