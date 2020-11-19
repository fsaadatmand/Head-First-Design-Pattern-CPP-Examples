#ifndef STEREO_H
#define STEREO_H

#include <iostream>
#include <string>

class Stereo {
public:
	Stereo(const std::string &l) : location(l) { }
	void on() { std::cout << location << " stereo is On\n"; }
	void off() { std::cout << location << " stereo is Off\n"; }
	void setCD() { std::cout << location << " stereo is set for CD input\n"; }
	void setDVD() { std::cout << location << " stereo is set for DVD input\n"; }
	void setRadio() { std::cout << location << " stereo is set for Radio\n"; }
	void setVolume(int volume) { std::cout << location << " stereo volume is set to " << std::to_string(volume) << '\n'; }
private:
	std::string location;
};

#endif /* STEREO_H */
