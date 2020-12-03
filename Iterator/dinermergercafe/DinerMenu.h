#ifndef DINER_MENU_H
#define DINER_MENU_H

#include "DinerMenuIterator.h"
#include "Menu.h"
#include "MenuItem.h"
#include <array>
#include <iostream>
#include<memory>
#include <ostream>
#include <string>

class DinerMenu : public Menu {
	public:
		DinerMenu();
		std::string getMenuDescription() const { return menuDesciption; }
		void addItem(std::string_view, std::string_view, bool, double);
		std::unique_ptr<Iterator<MenuItem>> createIterator() {
			return std::make_unique<DinerMenuIterator>(menuItems); }
	private:
		static constexpr std::size_t MAX_ITEMS = 6;
		std::size_t numberOfItems = 0;
		std::array<MenuItem, MAX_ITEMS> menuItems; // NOTE: MenuItem must have a default constructor
		std::string menuDesciption = "Objectville Diner Menu";
};

inline
DinerMenu::DinerMenu()
{
	addItem("Vegetarian BLT",
			"(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
	addItem("BLT",
			"Bacon with lettuce & tomato on whole wheat", false, 2.99);
	addItem("Soup of the day",
			"Soup of the day, with a side of potato salad", false, 3.29);
	addItem("Hotdog",
			"A hot dog, with sauerkraut, relish, onions, topped with cheese",
			false, 3.05);
	addItem("Steamed Veggies and Brown Rice",
			"Steamed vegetables over brown rice", true, 3.99);
	addItem("Pasta",
			"Spaghetti with Marinara Sauce, and a slice of sourdough bread",
			true, 3.89);
}

inline
void
DinerMenu::addItem(std::string_view name, std::string_view desciption,
		bool vegitarian, double price)
{
	auto menuItem = MenuItem(name, desciption, vegitarian, price);
	if (numberOfItems >= MAX_ITEMS)
		std::cerr << "Sorry, menu is full! Can't add item to men\n";
	else
		menuItems[numberOfItems++] = menuItem;
}

inline
std::ostream&
operator<<(std::ostream &os, const DinerMenu &menu)
{
	os << menu.getMenuDescription();
	return os;
}

#endif /* DINER_MENU_H */
