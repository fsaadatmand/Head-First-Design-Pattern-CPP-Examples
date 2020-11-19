#ifndef HOTTUB_H
#define HOTTUB_H

#include <iostream>

class Hottub {
	public:
		void on() { on_state = true; }
		void off() { on_state = false; }
		void bubblesOn() { if (on_state) std::cout << "Hottub is bubbling\n"; }
		void bubblesOff() { if (on_state) std::cout << "Hottub is not bubbling\n"; }
		void jetsOn() { if (on_state) std::cout << "Hottub jets are On\n"; }
		void jetsOff() { if (on_state) std::cout << "Hottub jets are Off\n"; }
		void setTemperature(int t) { temperature = t; }
		void heat();
		void cool();
	private:
		bool on_state;
		int temperature;
};

inline
void
Hottub::heat()
{
	temperature = 105;
	std::cout << "Hottub is heating to a steaming " << temperature << " degrees\n";
}

inline
void
Hottub::cool()
{
	temperature = 98;
	std::cout << "Hottub is cooling to " << temperature << " degrees\n";
}

#endif /* HOTTUB_H */
