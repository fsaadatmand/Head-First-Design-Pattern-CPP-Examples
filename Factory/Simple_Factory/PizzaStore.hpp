#ifndef PIZZA_STORE_H
#define PIZZA_STORE_H

#include "SimplePizzaFactory.hpp"
#include "Pizza.hpp"
#include <memory>
#include <string>
#include <string_view>

class PizzaStore
{
	public:
		PizzaStore() = default;
		PizzaStore(std::unique_ptr<SimplePizzaFactory> f) : factory(std::move(f)) {}
		std::unique_ptr<Pizza> orderPizza(std::string_view type);
	private:
		std::unique_ptr<SimplePizzaFactory> factory = nullptr;
};

inline
std::unique_ptr<Pizza>
PizzaStore::orderPizza(std::string_view type)
{
	auto pizza = factory->createPizza(type);
	pizza->prepare();
	pizza->bake(); 
	pizza->cut();
	pizza->box();
	return pizza; // local object is about to be destoryed, thus std:move is not needed
}
#endif /* PIZZA_STORE_H */
