#ifndef VEGGIE_PIZZA_H
#define VEGGIE_PIZZA_H

#include "Pizza.hpp"

class VeggiePizza : public Pizza {
public:
	VeggiePizza();
};

inline
VeggiePizza::VeggiePizza()
{
		name = "Veggie Pizza";
		dough = "Thin Crust Dough";
		sauce = "Marinara sauce";
		toppings.push_back("Grated Regiano Veggie");
		toppings.push_back("Fresh Veggies");
}
#endif /* VEGGIE_PIZZA_H */
