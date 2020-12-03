#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include "MenuComponent.h"
#include <string>
#include <iostream>
#include <string_view>

class MenuItem : public MenuComponent {
	public:
		MenuItem(std::string_view n, std::string_view d, bool v, double p)
			: name(n), description(d), vegetarian(v), price(p) { }
		std::string getName() const override { return name; }
		std::string getDescription() const override { return description; }
		bool isVegetarian() const override { return vegetarian; }
		double getPrice() const override { return price; }
		void print() const override;
	private:
		std::string name;
		std::string description;
		bool vegetarian = false;
		double price = 0.0;
};

inline
void
MenuItem::print() const
{
	std::cout << "   " << getName();
	if (isVegetarian())
		std::cout << "(v)";
	std::cout << ", " << getPrice() << '\n';
	std::cout << "     --" << getDescription() << '\n';
}

#endif /* MENU_ITEM_H */
