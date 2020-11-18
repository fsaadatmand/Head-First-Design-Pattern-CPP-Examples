#ifndef CHICAGO_STYLE_CHEESE_PIZZA_H
#define CHICAGO_STYLE_CHEESE_PIZZA_H

#include "Pizza.hpp"
#include <iostream>

class ChicagoStyleCheesePizza : public Pizza {
	public:
		ChicagoStyleCheesePizza();
		void cut() const override;
};

inline
ChicagoStyleCheesePizza::ChicagoStyleCheesePizza() {
	name = "Chicago Style Deep Dish Cheese Pizza";
	dough = "Extra Thick Crust Dough";
	sauce = "Plum Tomato Sauce";
	toppings.push_back("Shredded Mozzarella Cheese");
}

inline
void 
ChicagoStyleCheesePizza::cut() const
{
	std::cout << "cutting the pizza into square slices\n";
}
	
#endif /* ifndef CHICAGO_STYLE_CHEESE_PIZZA_H */
