#ifndef TEA_H
#define TEA_H

#include "CaffeineBeverage.h"
#include <iostream>

class Tea : public CaffeineBeverage {
	public:
		void brew() override { std::cout << "Steeping the tea\n"; }
		void addCondiments() override { std::cout << "Adding Lemon\n"; }
};

#endif /* TEA_H */
