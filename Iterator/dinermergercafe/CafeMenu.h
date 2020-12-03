#ifndef CAFE_MENU_H
#define CAFE_MENU_H

#include "CafeMenuIterator.h"
#include "Menu.h"
#include "MenuItem.h"
#include "Iterator.h"
#include <map>
#include <memory>
#include <string>
#include <string_view>

class CafeMenu : public Menu {
	public:
		CafeMenu();
		void addItem(std::string_view, std::string_view, bool, double);
		std::unique_ptr<Iterator<MenuItem>> createIterator() {
			return std::make_unique<CafeMenuIterator>(menuItems); }
	private:
		std::map<std::string, MenuItem> menuItems;
};

inline
CafeMenu::CafeMenu()
{
	addItem("Veggie Burger and Air Fries",
			"Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
			true, 3.99);
	addItem("Soup of the day",
			"A cup of the soup of the day, with a side salad",
			false, 3.69);
	addItem("Burrito",
			"A large burrito, with whole pinto beans, salsa, guacamole",
			true, 4.29);
}

inline
void
CafeMenu::addItem(std::string_view name, std::string_view description,
		bool vegitarian, double price)
{
	auto menuItem = MenuItem(name, description, vegitarian, price);
	menuItems[std::string(name)] = menuItem;
}

#endif /* CAFE_MENU_H */
