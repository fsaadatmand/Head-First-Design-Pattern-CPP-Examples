#ifndef DARK_ROAST_H
#define DARK_ROAST_H

#include "Beverage.h"

class DarkRoast : public Beverage {
	public:
		DarkRoast() { description = "DarkRoast"; }
		double cost() override { return .99; }
};

#endif /* ifndef DARK_ROAST_H */
