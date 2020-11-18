#ifndef CHICAGO_STYLE_PEPPERONI_PIZZA_H
#define CHICAGO_STYLE_PEPPERONI_PIZZA_H

#include "Pizza.hpp"
#include <iostream>

class ChicagoStylePepperoniPizza : public Pizza {
	public:
		ChicagoStylePepperoniPizza ();
		void cut() const override;
};

inline
ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
{
	name = "Chicago Style Pepperoni Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";
	toppings.push_back("Shredded Mozzarella Cheese");
	toppings.push_back("Black Olives");
	toppings.push_back("Spinach");
	toppings.push_back("Eggplant");
	toppings.push_back("Sliced Pepperoni");
}

inline
void
ChicagoStylePepperoniPizza::cut() const
{
	std::cout << "Cutting the pizza into square slices\n";
}

#endif /* CHICAGO_STYLE_PEPPERONI_PIZZA_H */
