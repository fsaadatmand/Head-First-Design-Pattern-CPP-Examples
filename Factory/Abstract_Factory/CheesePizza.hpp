#ifndef CHEESE_PIZZA_H
#define CHEESE_PIZZA_H

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include <iostream>
#include <memory>

class CheesePizza : public Pizza {
	public:
		CheesePizza () = default;
		CheesePizza(std::unique_ptr<PizzaIngredientFactory>ingfac) : ingredientFactory(std::move(ingfac)) {}
		void prepare() override;
	private:
		std::unique_ptr<PizzaIngredientFactory> ingredientFactory = nullptr;
};

inline
void
CheesePizza::prepare()
{
	std::cout << "Preparing " + name << '\n';
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
	cheese = ingredientFactory->createCheese();
}

#endif /* CHEESE_PIZZA_H */
