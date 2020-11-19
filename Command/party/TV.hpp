#ifndef TV_H
#define TV_H

#include <iostream>
#include <string>

class TV {
	public:
		TV(const std::string &l) : location(l) { }
		void on() { std::cout << location << " TV is on\n"; }
		void off() { std::cout << location << " TV is off\n"; }
		void setInputChannel();
		void setVolume(int volume) {
			std::cout << location << " TV volume is set to " << volume << '\n'; }
	private:
		std::string location;
		int channel;
};

inline
void
TV::setInputChannel()
{ 
	channel = 3;
	std::cout << location << " TV channel is set for DVD\n";
}

#endif /* TV_H */
