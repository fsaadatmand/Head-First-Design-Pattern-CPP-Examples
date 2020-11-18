#ifndef CLAM_PIZZA_H
#define CLAM_PIZZA_H

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include <iostream>
#include <memory>

class ClamPizza : public Pizza { 
	public:
		ClamPizza() = default;
		ClamPizza(std::unique_ptr<PizzaIngredientFactory> infac) : ingredientFactory(std::move(infac)) {}
		void prepare() override;
	private:
		std::unique_ptr<PizzaIngredientFactory> ingredientFactory{nullptr};
};

inline
void
ClamPizza::prepare()
{
	std::cout << "Preparing " << name << '\n';
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
	cheese = ingredientFactory->createCheese();
	clam = ingredientFactory->createClams();
}

#endif /* CLAM_PIZZA_H */
