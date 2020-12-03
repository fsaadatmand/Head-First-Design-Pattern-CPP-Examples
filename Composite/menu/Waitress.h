#ifndef WAITRESS_H
#define WAITRESS_H

#include "MenuComponent.h"

class Waitress {
	public:
		using menu_component_t = MenuComponent::menu_component_t;
		Waitress(menu_component_t am) : allMenus(std::move(am)) { }
		void printMenu() { allMenus->print(); }
	private:
		menu_component_t allMenus;
};

#endif /* WAITRESS_H */
