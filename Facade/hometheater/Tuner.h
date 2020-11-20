#ifndef TUNER_H
#define TUNER_H

#include <iostream>
#include <string>

class Amplifier; // forward declaration
class Tuner {
	public:
		Tuner(const std::string &d, Amplifier *a) : description(d), amplifier(a) {}
		void on() { std::cout << description << " on\n"; }
		void off() { std::cout << description << " off\n"; }
		void setFrequency(double f);
		void setAm() { std::cout << description << " setting AM mode\n"; }
		void setFm() { std::cout << description << " setting FM mode\n"; }
		std::string toString() { return description; }
	private:
		std::string description;
		[[maybe_unused]] Amplifier *amplifier;
		double frequency;
};

inline
void
Tuner::setFrequency(double f)
{
	std::cout << description << " setting frequency to " << f << '\n';
	frequency = f;
}

#endif /* TUNER_H */
