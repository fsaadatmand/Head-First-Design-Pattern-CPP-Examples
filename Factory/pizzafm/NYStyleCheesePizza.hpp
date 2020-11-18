#ifndef NY_STYLE_CHEESE_PIZZA_H
#define NY_STYLE_CHEESE_PIZZA_H

#include "Pizza.hpp"

class NYStyleCheesePizza : public Pizza {
	public:
		NYStyleCheesePizza();
};

inline
NYStyleCheesePizza::NYStyleCheesePizza() {
	name = "NY Style Sauce and Cheese Pizza";
	dough = "Thin Crust Dough";
	sauce = "Marinara Sauce";
	toppings.push_back("Grated Reggiano Chesse");
}

#endif /* ifndef NY_STYLE_CHEESE_PIZZA_H */
