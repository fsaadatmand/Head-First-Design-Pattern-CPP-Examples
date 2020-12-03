#ifndef PANCAKE_HOUSE_MENU_ITERATOR_H
#define PANCAKE_HOUSE_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <iostream>
#include <list>
#include <stdexcept>
#include <vector>

class PancakeHouseMenuIterator : public Iterator<MenuItem> {
	public:
		PancakeHouseMenuIterator(std::list<MenuItem> &i) :
			items(i), iter(items.begin()) {}
		MenuItem* next() override { return &*iter++; }
		bool hasNext() const override { return iter != items.cend(); }
		void remove() override; 
	private:
		std::list<MenuItem> &items;
		std::list<MenuItem>::iterator iter;
};

inline
void
PancakeHouseMenuIterator::remove()
{
	if (items.empty())
		throw std::invalid_argument(
				"You can't remove an item until you've done at least one next()");
	items.erase(iter);
}

#endif /* PANCAKE_HOUSE_MENU_ITERATOR_H */
