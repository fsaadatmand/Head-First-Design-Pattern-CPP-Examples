#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>

class Screen {
	public:
		Screen(const std::string & d) : description(d) {}
		void up() { std::cout << description << " going up\n"; }
		void down() { std::cout << description << " going down\n"; }
		std::string toString() { return description; }
	private:
		std::string description;
};

#endif /* SCREEN_H */
