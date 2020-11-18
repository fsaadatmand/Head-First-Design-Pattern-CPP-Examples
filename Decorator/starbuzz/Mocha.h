#ifndef MOCHA_H
#define MOCHA_H

#include "Beverage.h"
#include "CondimentDecorator.h"
#include <memory>
#include <string>

class Mocha : public CondimentDecorator {
	public:
		Mocha() = default;
		Mocha(std::unique_ptr<Beverage> b) : CondimentDecorator(std::move(b)) {}
		std::string getDescription() const override {
			return beverage->getDescription() + ", Mocha"; }
		double cost() override;
};

inline
double
Mocha::cost() {
	double cost = beverage->cost();
	switch (beverage->getSize()) {
		case Size::TALL:
			cost += .15;
			break;
		case Size::GRANDE:
			cost += .20;
			break;
		case Size::VENTI:
			cost += .25;
			break;
		default:
			break;
	}
	return cost;
}

#endif /* ifndef MOCHA_H */
