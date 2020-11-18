#ifndef CHEESE_PIZZA_H
#define CHEESE_PIZZA_H

#include "Pizza.hpp"

class CheesePizza : public Pizza {
public:
	CheesePizza();
};

inline
CheesePizza::CheesePizza()
{
		name = "Cheese Pizza";
		dough = "Thin Crust Dough";
		sauce = "Marinara sauce";
		toppings.push_back("Grated Regiano Cheese");
}

#endif /* CHEESE_PIZZA_H */
