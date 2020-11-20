#ifndef POPCORN_POPPER_H
#define POPCORN_POPPER_H

#include <iostream>
#include <string>

class PopcornPopper {
	public:
		PopcornPopper(const std::string &d) : description(d) {}
		void on() { std::cout << description << " on\n"; }
		void off() { std::cout << description << " off\n"; }
		void pop() { std::cout << description << " popping popcorn\n"; }
		std::string toString() { return description; }
	private:
		std::string description;
};

#endif /* POPCORN_POPPER_H */
