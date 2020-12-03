#ifndef PANCAKE_HOUSE_MENU_H
#define PANCAKE_HOUSE_MENU_H

#include "Menu.h"
#include "MenuItem.h"
#include "PancakeHouseMenuIterator.h"
#include <list>
#include <ostream>
#include <memory>
#include <string>

class PancakeHouseMenu : public Menu {
	public:
		PancakeHouseMenu();
		std::string getMenuDescription() const { return menuDesciption; }
		void addItem(std::string_view, std::string_view, bool, double);
		std::unique_ptr<Iterator<MenuItem>> createIterator() override {
			return std::make_unique<PancakeHouseMenuIterator>(menuItems); }
	private:
		std::string menuDesciption = "Objectville Pancake House Menu";
		std::list<MenuItem> menuItems = {};
};

inline
PancakeHouseMenu::PancakeHouseMenu()
{
	addItem("K&B's Pancake Breakfast", 
			"Pancakes with scrambled eggs and toast", 
			true,
			2.99);

	addItem("Regular Pancake Breakfast", 
			"Pancakes with fried eggs, sausage", 
			false,
			2.99);

	addItem("Blueberry Pancakes",
			"Pancakes made with fresh blueberries",
			true,
			3.49);

	addItem("Waffles",
			"Waffles with your choice of blueberries or strawberries",
			true,
			3.59);
}

inline
void
PancakeHouseMenu::addItem(std::string_view name, std::string_view desciption,
		bool vegitarian, double price)
{
	auto menuItem = MenuItem(name, desciption, vegitarian, price);
	menuItems.push_back(menuItem);
}

inline
std::ostream&
operator<<(std::ostream &os, const PancakeHouseMenu &menu)
{
	os << menu.getMenuDescription();
	return os;
}

#endif /* PANCAKE_HOUSE_MENU_H */
