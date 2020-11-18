#ifndef PEPPERONI_PIZZA_H
#define PEPPERONI_PIZZA_H

#include "Pizza.hpp"
#include "Pizza.hpp"

class PepperoniPizza : Pizza { 
	public:
		PepperoniPizza() = default;
		PepperoniPizza(std::unique_ptr<PizzaIngredientFactory> infac) : ingredientFactory(std::move(infac)) {}
		void prepare() override;
	private:
		std::unique_ptr<PizzaIngredientFactory> ingredientFactory{nullptr};
};

inline
void
PepperoniPizza::prepare()
{
	std::cout << "Preparing " << name << '\n';
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
	cheese = ingredientFactory->createCheese();
	veggies = ingredientFactory->createPepperonis();
	pepperoni = ingredientFactory->createPepperoni();
}


#endif /* PEPPERONI_PIZZA_H */
