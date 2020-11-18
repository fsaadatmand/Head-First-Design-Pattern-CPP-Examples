#ifndef CHICAGO_PIZZA_INGREDIENT_FACTORY_H
#define CHICAGO_PIZZA_INGREDIENT_FACTORY_H

#include "BlackOlives.hpp"
#include "Cheese.hpp"
#include "Clams.hpp"
#include "Dough.hpp"
#include "Eggplant.hpp"
#include "FrozenClams.hpp"
#include "MozzarellaCheese.hpp"
#include "RedPepper.hpp"
#include "Sauce.hpp"
#include "SlicedPepperoni.hpp"
#include "PizzaIngredientFactory.hpp"
#include "PlumTomatoSauce.hpp"
#include "Pepperoni.hpp"
#include "RedPepper.hpp"
#include "Spinach.hpp"
#include "ThickCrustDough.hpp"
#include "Veggies.hpp"
#include <memory>
#include <vector>

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
	public:
		std::unique_ptr<Dough> createDough() override { return std::make_unique<ThickCrustDough>(); }
		std::unique_ptr<Sauce> createSauce() override { return std::make_unique<PlumTomatoSauce>(); }
		std::unique_ptr<Cheese> createCheese() override { return std::make_unique<MozzarellaCheese>(); }
		std::vector<std::unique_ptr<Veggies>> createVeggies() override;
		std::unique_ptr<Pepperoni> createPepperoni() override { return std::make_unique<SlicedPepperoni>(); }
		std::unique_ptr<Clams> createClams() override { return std::make_unique<FrozenClams>(); }
};


inline
std::vector<std::unique_ptr<Veggies>>
ChicagoPizzaIngredientFactory::createVeggies() {
	std::vector<std::unique_ptr<Veggies>> ret;
	ret.push_back(std::make_unique<BlackOlives>());
	ret.push_back(std::make_unique<Spinach>());
	ret.push_back(std::make_unique<Eggplant>());
	ret.push_back(std::make_unique<RedPepper>());
	return ret;
}

#endif /* CHICAGO_PIZZA_INGREDIENT_FACTORY_H */
