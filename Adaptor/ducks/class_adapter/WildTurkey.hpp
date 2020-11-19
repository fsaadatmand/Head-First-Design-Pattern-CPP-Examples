#ifndef WILD_TURKEY_H
#define WILD_TURKEY_H

#include "Turkey.hpp"
#include <iostream>

class WildTurkey : public Turkey {
	public:
		void gobble() override { std::cout << "Gobble, gooble\n"; }
		void fly() override { std::cout << "I'm flying a short distance\n"; }
};

#endif /* WILD_TURKEY_H */
