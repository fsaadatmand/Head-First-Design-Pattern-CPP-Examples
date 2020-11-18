#ifndef NY_STYLE_PEPPERONI_PIZZA_H
#define NY_STYLE_PEPPERONI_PIZZA_H

#include "Pizza.hpp"

class NYStylePepperoniPizza : public Pizza
{
public:
	NYStylePepperoniPizza();
};

inline
NYStylePepperoniPizza::NYStylePepperoniPizza()
{
	name = "NY Style Pepperoni Pizza";
	dough = "Thin Crust Dough";
	sauce = "Marinara Sauce";

	toppings.push_back("Grated Reggiano Cheese");
	toppings.push_back("Sliced Pepperoni");
	toppings.push_back("Garlic");
	toppings.push_back("Onion");
	toppings.push_back("Mushrooms");
	toppings.push_back("Red Pepper");
}

#endif /* NY_STYLE_PEPPERONI_PIZZA_H */
