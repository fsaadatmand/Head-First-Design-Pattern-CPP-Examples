#ifndef HOUSE_BLEND_H
#define HOUSE_BLEND_H

#include "Beverage.h"

class HouseBlend : public Beverage {
	public:
		HouseBlend() { description = "HouseBlend"; }
		double cost() override { return .89; }
};

#endif /* ifndef HOUSE_BLEND_H */
