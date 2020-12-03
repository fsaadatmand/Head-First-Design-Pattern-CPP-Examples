#ifndef WAITRESS_H
#define WAITRESS_H

#include "Menu.h"
#include "Iterator.h"
#include <iostream>
#include <memory>

class Waitress {
	public:
		Waitress(Menu *phm, Menu *dm) :
			pancakeHouseMenu(phm), dinerMenu(dm) {}
		void printMenu();
		void printMenu(Iterator<MenuItem> *iteator) const;
	private:
		Menu *pancakeHouseMenu;
		Menu *dinerMenu;
};

inline
void
Waitress::printMenu()
{
		auto pancakeIterator = pancakeHouseMenu->createIterator();
		auto dinerIterator = dinerMenu->createIterator();

		std::cout << "MENU\n----\nBREAKFAST\n";
		printMenu(pancakeIterator.get());
		std::cout << "\nLUNCH\n";
		printMenu(dinerIterator.get());
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
