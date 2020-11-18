#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string_view>
#include <vector>

class Pizza {
	public:
		virtual ~Pizza() = default;
		virtual void prepare();
		virtual void bake() const { std::cout << "Bake for 25 minutes at 350\n"; }
		virtual void cut() const { std::cout << "Cutting the pizza into diagonal slices\n"; }
		virtual void box() const { std::cout << "place pizza in offical PizzaStore box\n"; }
		void setName(std::string_view n) { name = n; }
		std::string getName() const {return name;}
		//std::string toString() { /* code to print pizza here */ }
	protected:
		std::string name = {};
		std::string dough = {};
		std::string sauce = {};
		std::vector<std::string> toppings = {};
};

inline
void
Pizza::prepare()
{
	std::cout << "Preparing " << name << '\n';
	std::cout << "Tossing dough...\n";
	std::cout << "Adding sauce...\n";
	std::cout << "Adding toppings: \n";
	for (const auto &topping : toppings)
		std::cout << "   " + topping << '\n';
}

#endif /* ifndef PIZZA_H */
