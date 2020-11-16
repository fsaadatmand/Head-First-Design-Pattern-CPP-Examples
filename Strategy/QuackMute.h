#ifndef QUAK_MUTE_H
#define QUAK_MUTE_H

#include "QuackBehavior.h"
#include <iostream>

class QuackMute : public QuackBehavior {
	void quack() override { std::cout << "<< Silence >>\n"; }
};

#endif /* ifndef QUAK_MUTE_H */
