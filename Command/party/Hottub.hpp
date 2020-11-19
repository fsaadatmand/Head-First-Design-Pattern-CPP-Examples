#ifndef HOTTUB_H
#define HOTTUB_H

#include <iostream>

class Hottub {
	public:
		void on() { on_state = true; }
		void off() { on_state = false; }
		void circulate() {
			if (on_state) std::cout << "Hottub is bubbling\n"; }
		void jetsOn() { std::cout << "Hottub jets are On\n"; }
		void jetsOff() { std::cout << "Hottub jets are Off\n"; }
		void setTemperature(const int &temp);
	private:
		bool on_state;
		int temperature;
};

inline
void
Hottub::setTemperature(const int &temp)
{
	if (temp > temperature)
		std::cout << "Hottub is heating to a steaming " << temp << " degrees\n";
	else
		std::cout << "Hottub is cooling to " << temp << " degrees\n";
	temperature = temp;
}

#endif /* HOTTUB_H */
