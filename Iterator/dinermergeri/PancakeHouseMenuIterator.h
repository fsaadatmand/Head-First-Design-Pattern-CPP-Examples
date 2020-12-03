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
			items(i), position(items.begin()) {}
		MenuItem* next() override { return &*position++; }
		bool hasNext() const override { return position != items.cend(); }
		void remove() override; 
	private:
		std::list<MenuItem> &items;
		std::list<MenuItem>::iterator position;
};

inline
void
PancakeHouseMenuIterator::remove()
{
	if (items.empty())
		throw std::invalid_argument(
				"You can't remove an item until you've done at least one next()");
	items.erase(position);
}

#endif /* PANCAKE_HOUSE_MENU_ITERATOR_H */
