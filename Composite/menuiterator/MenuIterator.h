#ifndef MENU_ITERATOR_H
#define MENU_ITERATOR_H

#include <iterator>
#include "Iterator.h"
#include "MenuComponent.h"
#include <list>
#include <memory>

// This is an 'object adaptor' to the Iterator class, which adapts the  c++
// list container's iterator to Java's Iterator interface.

class MenuIterator : public Iterator<MenuComponent> {
	public:
		using menu_component_t = MenuComponent::menu_component_t;
		MenuIterator(std::list<menu_component_t> &mc)
			: components(mc), iter(components.begin()) { componentPtr = *iter; }
		menu_component_t next() override;
		bool hasNext() override { return iter != components.end(); }
		void remove() override {
			throw std::invalid_argument("MenuIterator::remove(): Unsupported Operation"); }
	private:
		std::list<menu_component_t> &components;
		std::list<menu_component_t>::iterator iter; 
		menu_component_t componentPtr = nullptr;
};

inline
MenuIterator::menu_component_t
MenuIterator::next()
{
	componentPtr = *iter;
	++iter;
	return componentPtr;
}

#endif /* MENU_ITERATOR_H */
