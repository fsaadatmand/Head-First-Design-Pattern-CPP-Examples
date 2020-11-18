#ifndef NY_PIZZA_INGREDIENT_FACTORY_H
#define NY_PIZZA_INGREDIENT_FACTORY_H

#include "Cheese.hpp"
#include "Clams.hpp"
#include "Dough.hpp"
#include "FreshClams.hpp"
#include "Garlic.hpp"
#include "Onion.hpp"
#include "MarinaraSauce.hpp"
#include "Mushroom.hpp"
#include "RedPepper.hpp"
#include "ReggianoCheese.hpp"
#include "Sauce.hpp"
#include "SlicedPepperoni.hpp"
#include "PizzaIngredientFactory.hpp"
#include "Pepperoni.hpp"
#include "ThinCrustDough.hpp"
#include "Veggies.hpp"
#include <memory>
#include <vector>

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
	public:
		std::unique_ptr<Dough> createDough() override { return std::make_unique<ThinCrustDough>(); }
		std::unique_ptr<Sauce> createSauce() override { return std::make_unique<MarinaraSauce>(); }
		std::unique_ptr<Cheese> createCheese() override { return std::make_unique<ReggianoCheese>(); }
		std::vector<std::unique_ptr<Veggies>> createVeggies() override;
		std::unique_ptr<Pepperoni> createPepperoni() override { return std::make_unique<SlicedPepperoni>(); }
		std::unique_ptr<Clams> createClams() override { return std::make_unique<FreshClams>(); }
};

inline
std::vector<std::unique_ptr<Veggies>>
NYPizzaIngredientFactory::createVeggies() {
	std::vector<std::unique_ptr<Veggies>> ret;
	ret.push_back(std::make_unique<Garlic>());
	ret.push_back(std::make_unique<Onion>());
	ret.push_back(std::make_unique<Mushroom>());
	ret.push_back(std::make_unique<RedPepper>());
	return ret;
}
#endif /* NY_PIZZA_INGREDIENT_FACTORY_H */
