#ifndef PIZZA_INGREDIENT_FACTORY_H
#define PIZZA_INGREDIENT_FACTORY_H

#include "Cheese.hpp"
#include "Clams.hpp"
#include "Dough.hpp"
#include "Pepperoni.hpp"
#include "Sauce.hpp"
#include "Veggies.hpp"
#include "memory"
#include <memory>
#include <vector>

class PizzaIngredientFactory {
	public:
		virtual ~PizzaIngredientFactory() = default;
		virtual std::unique_ptr<Dough> createDough() = 0;
		virtual std::unique_ptr<Sauce> createSauce() = 0;
		virtual std::unique_ptr<Cheese> createCheese() = 0;
		virtual std::vector<std::unique_ptr<Veggies>> createVeggies() = 0;
		virtual std::unique_ptr<Pepperoni> createPepperoni() = 0;
		virtual std::unique_ptr<Clams> createClams() = 0;
};

#endif /* PIZZA_INGREDIENT_FACTORY_H */
