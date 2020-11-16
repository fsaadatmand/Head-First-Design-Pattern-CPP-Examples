#ifndef FLY_NOWAY_H
#define FLY_NOWAY_H

#include "FlyBehavior.h"
#include <iostream>

class FlyNoWay : public FlyBehavior {
	public:
		void fly() override { std::cout << "I can't fly\n"; }
};

#endif /* ifndef FLY_NOWAY_H */
