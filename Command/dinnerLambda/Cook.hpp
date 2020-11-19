#ifndef COOK_H
#define COOK_H

#include <iostream>

// Receiver

class Cook {
	public:
		void makeBurger() { std::cout << "Making a burger\n"; }
		void makeFries() { std::cout << "Making fries\n"; }
};

#endif /* COOK_H */
