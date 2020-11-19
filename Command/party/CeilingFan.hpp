#ifndef CEILING_FAN_H
#define CEILING_FAN_H

#include <iostream>
#include <string>
#include <string_view>

class CeilingFan {
	public:
		enum class Speed { OFF, LOW, MEDIUM, HIGH };
		CeilingFan (std::string_view l) : location(l) { }
		void high();
		void medium();
		void low();
		void off();
		std::string getSpeedStr() const;
		Speed getSpeed() const { return speed; }
	private:
		std::string location;
		Speed speed = Speed::OFF;
};

inline
void
CeilingFan::high()
{
	speed = Speed::HIGH;
	std::cout << location << " ceiling fan set to high\n";
}

inline
void
CeilingFan::medium()
{
	speed = Speed::MEDIUM;
	std::cout << location << " ceiling fan set to medium\n";
}
	
inline
void
CeilingFan::low()
{
	speed = Speed::LOW;
	std::cout << location << " ceiling fan set to low\n";
}

inline
void
CeilingFan::off()
{
	speed = Speed::OFF;
	std::cout << location << " ceiling fan set to Off\n";
}

inline
std::string
CeilingFan::getSpeedStr() const
{
	std::string result;
	switch (speed) {
		case Speed::HIGH:
			result = "high";
			break;
		case Speed::MEDIUM:
			result = "medium";
			break;
		case Speed::LOW:
			result = "low";
			break;
		case Speed::OFF:
			result = "off";
			break;
		default:
			result = "error";
			break;
	}
	return result;
}

#endif /* CEILING_FAN_H */
