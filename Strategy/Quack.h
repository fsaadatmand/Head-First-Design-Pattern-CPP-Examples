#ifndef QUACK_H
#define QUACK_H

#include "QuackBehavior.h"
#include <iostream>

class Quack : public QuackBehavior {
	public:
		void quack() override { std::cout << "Quack\n"; }
};

#endif /* ifndef QUACK_H */
