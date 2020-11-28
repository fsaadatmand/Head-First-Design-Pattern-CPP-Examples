#ifndef NULL_ITERATOR_H
#define NULL_ITERATOR_H

#include "Iterator.h"
#include "MenuComponent.h"
#include <memory>
#include <stdexcept>

class NullIterator : public Iterator<MenuComponent> {
	public:
		MenuComponent::menu_component_t next() override { return nullptr; }
		bool hasNext() override { return false; }
		void remove() override {
			throw std::invalid_argument("NullIterator::remove(): Unsupported Operation"); }
};

#endif /* NULL_ITERATOR_H */
