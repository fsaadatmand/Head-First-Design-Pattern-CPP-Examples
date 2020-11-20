#ifndef COFFE_H
#define COFFE_H

#include "CaffeineBeverage.h"
#include <iostream>

class Coffe : public CaffeineBeverage {
	public:
		void brew() override { std::cout << "Dripping Coffe through filter\n"; }
		void addCondiments() override { std::cout << "Adding Sugar and Milk\n"; }
};

#endif /* COFFE_H */
