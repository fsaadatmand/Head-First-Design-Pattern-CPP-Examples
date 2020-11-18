#ifndef PIZZA_H
#define PIZZA_H

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Veggies.hpp"
#include "Pepperoni.hpp"
#include "Clams.hpp"
#include <iostream>
#include <memory>
#include <ostream>
#include <string>
#include <sstream>
#include <vector>

class Pizza {
	friend std::ostream& operator<<(std::ostream &os, const Pizza &pizza); // replaces toString() from Java
	public:
		virtual ~Pizza() = default;
		virtual void prepare() = 0;
		virtual void bake() const { std::cout << "Bake for 25 minutes at 350\n"; }
		virtual void cut() const { std::cout << "Cutting the pizza into diagonal slices\n"; }
		virtual void box() const { std::cout << "Place pizza in offical PizzaStore box\n"; }
		void setName(const std::string &n) { name = n; }
		std::string getName() const { return name; }
	protected:
		std::string name;
		std::unique_ptr<Dough> dough;
		std::unique_ptr<Sauce> sauce;
		std::unique_ptr<Cheese> cheese;
		std::vector<std::unique_ptr<Veggies>> veggies;
		std::unique_ptr<Pepperoni> pepperoni;
		std::unique_ptr<Clams> clam;
};

inline
 std::ostream&
 operator<<(std::ostream &os, const Pizza &pizza)
{
	std::string str;
	std::stringstream result(str);
	os << "---- " << pizza.getName() << " ----\n";
	if (pizza.dough != nullptr)
		os << pizza.dough->toString() << '\n';
	if (pizza.sauce != nullptr)
		os << pizza.sauce->toString() << '\n';
	if (pizza.cheese != nullptr)
		os << pizza.cheese->toString() << '\n';
	if (!pizza.veggies.empty()) {
		for (decltype (pizza.veggies.size()) i = 0; i < pizza.veggies.size(); ++i) {
			os << pizza.veggies[i]->toString();
			if (i < pizza.veggies.size() - 1) {
				os << ", ";
			}
		}
		os << '\n';
	}
	if (pizza.clam != nullptr)
		os << pizza.clam->toString() << '\n';
	if (pizza.pepperoni != nullptr)
		os << pizza.pepperoni->toString() << '\n';
	return os;
}

#endif /* ifndef PIZZA_H */
