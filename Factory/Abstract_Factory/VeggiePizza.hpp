#ifndef VEGGIE_PIZZA_H
#define VEGGIE_PIZZA_H

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include <memory>

class VeggiePizza : public Pizza {
	public:
		VeggiePizza() = default;
		VeggiePizza(std::unique_ptr<PizzaIngredientFactory> ingFact) :
			ingredientFactory(std::move(ingFact)) {}
		void prepare() override;
	private:
		std::unique_ptr<PizzaIngredientFactory> ingredientFactory;
};


inline
void
VeggiePizza::prepare()
{
	std::cout << "Preparing " << name << '\n';
	dough = ingredientFactory->createDough();
	sauce = ingredientFactory->createSauce();
	cheese = ingredientFactory->createCheese();
	veggies = ingredientFactory->createVeggies();
}

#endif /* VEGGIE_PIZZA_H */
