#ifndef MENU_ITERATOR_H
#define MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuComponent.h"
#include <list>
#include <memory>

// This is an 'object adaptor' to the Iterator class, which adapts the C++
// list container's iterator to Java's Iterator interface.

class MenuIterator : public Iterator<MenuComponent> {
	public:
		using menu_component_t = MenuComponent::menu_component_t;
		MenuIterator(std::list<menu_component_t> &mc)
			: components(mc), iter(components.begin()) {}
		menu_component_t next() override { return *iter++; }
		bool hasNext() override { return iter != components.end(); }
		void remove() override {
			throw std::invalid_argument("MenuIterator::remove(): Unsupported Operation"); }
	private:
		std::list<menu_component_t> &components;
		std::list<menu_component_t>::iterator iter; 
};

#endif /* MENU_ITERATOR_H */
