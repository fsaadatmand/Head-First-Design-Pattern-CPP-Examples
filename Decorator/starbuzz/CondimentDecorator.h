#ifndef CONDIMENT_DECORATOR_H
#define CONDIMENT_DECORATOR_H

#include "Beverage.h"
#include <memory>
#include <string>

class CondimentDecorator : public Beverage {
	public:
		CondimentDecorator() = default;
		CondimentDecorator(std::unique_ptr<Beverage> b) : beverage(std::move(b)) {}
		virtual std::string getDescription() const override 
		                                         { return "Unknown Condiment"; }
		// Overridding setSize, getSize and getSizeStr ensures they are propagated to
		// the wrapped beverage
		void setSize(Size s) override { beverage->setSize(s); }
		Beverage::Size getSize() const override { return beverage->getSize(); }
		std::string getSizeString() const override { return beverage->getSizeString(); }
	protected:
		std::unique_ptr<Beverage> beverage = nullptr;
};

#endif /* ifndef CONDIMENT_DECORATOR_H */
