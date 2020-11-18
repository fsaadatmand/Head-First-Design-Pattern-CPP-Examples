#ifndef WHIP_H
#define WHIP_H

#include "Beverage.h"
#include "CondimentDecorator.h"
#include <string>
#include <memory>

class Whip : public CondimentDecorator {
	public:
		Whip() = default;
		Whip(std::unique_ptr<Beverage> b) : CondimentDecorator(std::move(b)) { }
		std::string getDescription() const override {
			return beverage->getDescription() + ", Whip"; }
		double cost() override;
};

inline
double
Whip::cost() {
	double cost = beverage->cost();
	switch (beverage->getSize()) {
		case Size::TALL:
			cost += .05;
			break;
		case Size::GRANDE:
			cost += .10;
			break;
		case Size::VENTI:
			cost += .15;
			break;
		default:
			break;
	}
	return cost;
}

#endif /* ifndef WHIP_H */
