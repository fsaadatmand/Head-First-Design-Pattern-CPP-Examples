#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>
#include <string>

class Light {
	public:
		Light(const std::string &l) : location(l) { }
		void on();
		void off();
		void dim(int l);
		int getLevel() const { return level; }
	private:
		std::string location;
		int level;
};

inline
void
Light::on()
{
	level = 100;
	std::cout << location << " Light is On\n";
}

inline
void
Light::off()
{
	level = 0;
	std::cout << location << " Light is Off\n";
}

inline
void
Light::dim(int l)
{
	level = l;
	if (level == 0)
		off();
	else
		std::cout << "Light is dimmed to " << level << "%\n";
}

#endif /* LIGHT_H */
