#ifndef WAITRESS_H
#define WAITRESS_H

#include "Menu.h"
#include "Iterator.h"
#include <iostream>
#include <memory>

class Waitress {
	public:
		Waitress(Menu::menus_map &m) : menus(m) { }
		void printMenu();
		void printMenu(Iterator<MenuItem> *iteator) const;
	private:
		Menu::menus_map &menus;
};

inline
void
Waitress::printMenu()
{
	std::cout << "MENU\n----";
	for (const auto &[name, menu] : menus) {
		std::cout << '\n' << name << '\n';
		auto iter = menu->createIterator();
		printMenu(iter.get());
	}
}

inline
void
Waitress::printMenu(Iterator<MenuItem> *iteator) const
{
	while (iteator->hasNext()) {
		auto menuItem = iteator->next();
		std::cout << menuItem->getName() << ", ";
		std::cout << menuItem->getPrice() << " -- ";
		std::cout << menuItem->getDescription() << '\n';
	}
}

#endif /* WAITRESS_H */
