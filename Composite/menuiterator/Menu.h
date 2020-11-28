#ifndef MENU_H
#define MENU_H

#include "Iterator.h"
#include "CompositeIterator.h"
#include "MenuComponent.h"
#include "MenuIterator.h"
#include <iostream>
#include <memory>
#include <string>
#include <string_view>
#include <list>

class Menu : public MenuComponent {
	public:
		Menu(std::string_view n, std::string_view d)
			: name(n), description(d) { }
		menu_component_iterator createIterator() override;
		void add(menu_component_t menuComponent) override {
			menuComponents.push_back(menuComponent); }
		void remove(menu_component_t menuComponent) override {
			menuComponents.remove(menuComponent); }
		std::string getName() const override { return name; }
		std::string getDescription() const override { return description; }
		void print() const override;
	private:
		std::list<menu_component_t> menuComponents;
		menu_component_iterator iterator = nullptr;
		std::string name;
		std::string description;
};

inline
Menu::menu_component_iterator
Menu::createIterator()
{
	if (iterator == nullptr) {
		auto menuIterator = std::make_shared<MenuIterator>(menuComponents);
		iterator = std::make_shared<CompositeIterator>(menuIterator);
	}
	return iterator;
}

inline
void
Menu::print() const
{
	std::cout << '\n' << getName();
	std::cout << ", " << getDescription() << '\n';
	std::cout << "----------------------\n";
	for (const auto &menuComponent : menuComponents)
		menuComponent->print() ;
}

#endif /* MENU_H */
