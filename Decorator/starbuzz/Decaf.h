#ifndef DECAF_H
#define DECAF_H

#include "Beverage.h"

class Decaf : public Beverage {
	public:
		Decaf() { description = "Decaf"; }
		double cost() override { return 1.05; }
};

#endif /* ifndef DECAF_H */
