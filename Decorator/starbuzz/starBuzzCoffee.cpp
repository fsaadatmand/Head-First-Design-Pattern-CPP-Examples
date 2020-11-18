#include "Beverage.h"
#include "CondimentDecorator.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"

#include <iostream>
#include <memory>

int main() {
	std::unique_ptr<Beverage> beverage = std::make_unique<Espresso>();
	std::cout << beverage->getDescription() << " $" << beverage->cost() << '\n';

	std::unique_ptr<Beverage> beverage2 = std::make_unique<DarkRoast>();
	beverage2 = std::make_unique<Mocha>(std::move(beverage2));
	beverage2 = std::make_unique<Mocha>(std::move(beverage2));
	beverage2 = std::make_unique<Whip>(std::move(beverage2));
	std::cout << beverage2->getDescription() << " $" << beverage2->cost() << '\n';

	std::cout <<"\nChanging beverage size:\n";
	std::unique_ptr<Beverage> beverage3 = std::make_unique<HouseBlend>();
	beverage3 = std::make_unique<Soy>(std::move(beverage3));
	beverage3 = std::make_unique<Mocha>(std::move(beverage3));
	beverage3 = std::make_unique<Whip>(std::move(beverage3));
	// Tall
	beverage3->setSize(Beverage::Size::TALL);
	std::cout << beverage3->getSizeString() << ' ' << 
		beverage3->getDescription() << " $" << beverage3->cost() << '\n';
	// Grande (default)
	beverage3->setSize(Beverage::Size::GRANDE);
	std::cout << beverage3->getSizeString() << ' ' << 
		beverage3->getDescription() << " $" << beverage3->cost() << '\n';
	// Venti
	beverage3->setSize(Beverage::Size::VENTI);
	std::cout << beverage3->getSizeString() << ' ' << 
		beverage3->getDescription() << " $" << beverage3->cost() << '\n';
	return 0;
}
