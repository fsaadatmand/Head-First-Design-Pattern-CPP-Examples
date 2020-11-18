#ifndef SOY_H
#define SOY_H

#include "Beverage.h"
#include "CondimentDecorator.h"
#include <memory>
#include <string>

class Soy : public CondimentDecorator {
	public:
		Soy() = default;
		Soy(std::unique_ptr<Beverage> b) : CondimentDecorator(std::move(b)) {}
		std::string getDescription() const override {
			return beverage->getDescription() + ", Soy"; }
		double cost() override;
};

inline
double
Soy::cost() {
	double cost = beverage->cost();
	switch (beverage->getSize()) {
		case Size::TALL:
			cost += .10;
			break;
		case Size::GRANDE:
			cost += .15;
			break;
		case Size::VENTI:
			cost += .20;
			break;
		default:
			break;
	}
	return cost;
}

#endif /* ifndef SOY_H */
