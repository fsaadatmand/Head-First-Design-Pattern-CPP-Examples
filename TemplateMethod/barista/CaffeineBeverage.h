#ifndef CAFFEINE_BEVERAGE_H
#define CAFFEINE_BEVERAGE_H

#include <iostream>

class CaffeineBeverage {
	public:
		virtual ~CaffeineBeverage() = default;
		virtual void prepareRecipe() final;
	protected:
		virtual void brew() = 0;
		virtual void addCondiments() = 0;
		void boilWater() { std::cout << "Boiling water\n"; }
		void pourInCup() { std::cout << "Pouring into cup\n"; }
};

inline
void
CaffeineBeverage::prepareRecipe()
{
	boilWater();
	brew();
	pourInCup();
	addCondiments();
}

#endif /* CAFFEINE_BEVERAGE_H */
