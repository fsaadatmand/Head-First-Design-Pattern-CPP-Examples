#ifndef MALLARD_DUCK_H
#define MALLARD_DUCK_H

#include "Duck.hpp"
#include <iostream>

class MallardDuck : public Duck {
	public:
		void quack() override { std::cout << "Quack\n"; }
		void fly() override { std::cout << "I'm flying\n"; }
};

#endif /* MALLARD_DUCK_H */
