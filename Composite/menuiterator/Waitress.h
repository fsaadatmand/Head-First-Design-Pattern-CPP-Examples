#ifndef WAITRESS_H
#define WAITRESS_H

#include "CompositeIterator.h"
#include "Iterator.h"
#include "MenuComponent.h"
#include <iostream>
#include <memory>
#include <stdexcept>

class Waitress {
	public:
		using menu_component_t = MenuComponent::menu_component_t;
		using menu_component_iterator = MenuComponent::menu_component_iterator;
		Waitress(menu_component_t am) : allMenus(am) {}
		void printMenu() { allMenus->print(); }
		void printVegitarianMenu();
	private:
		menu_component_t allMenus;
};

inline
void
Waitress::printVegitarianMenu()
{
	menu_component_iterator iterator = allMenus->createIterator();
	std::cout << "\nVEGETARIAN\n----\n";
	while (iterator->hasNext()) {
		auto menuComponent = iterator->next();
		try {
			if (menuComponent->isVegetarian())
				menuComponent->print();
		} catch (std::invalid_argument e) { }
	}
}

#endif /* WAITRESS_H */
