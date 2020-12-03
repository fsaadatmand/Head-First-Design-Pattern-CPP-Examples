#ifndef COMPOSITE_ITERATOR_H
#define COMPOSITE_ITERATOR_H

#include "Iterator.h"
#include "MenuComponent.h"
#include <iterator>
#include <memory>
#include <stack>
#include <stdexcept>


class CompositeIterator : public Iterator<MenuComponent> {
	public:
		using menu_component_t = MenuComponent::menu_component_t;
		using menu_component_iterator = MenuComponent::menu_component_iterator;
		CompositeIterator(menu_component_iterator iterator) { stack.push(iterator); }
		menu_component_t next() override;
		bool hasNext() override;
		void remove() override {
			throw std::invalid_argument("CompositeIterator::remove(): Unsupported Operation"); }
	private:
		std::stack<menu_component_iterator> stack;
};

inline
CompositeIterator::menu_component_t
CompositeIterator::next()
{
	if (!hasNext()) // exit condition
		return nullptr;
	menu_component_iterator iterator = stack.top();
	menu_component_t component = iterator->next();
	stack.push(component->createIterator()); // recur
	return component;
}

inline
bool
CompositeIterator::hasNext()
{
	if (stack.empty()) // exist condition
		return false;
	menu_component_iterator iterator = stack.top();
	if (!iterator->hasNext()) {
		stack.pop(); // pop to satisfy the exist condition
		return hasNext(); // recur
	}
	return true;
}

#endif /* COMPOSITE_ITERATOR_H */
