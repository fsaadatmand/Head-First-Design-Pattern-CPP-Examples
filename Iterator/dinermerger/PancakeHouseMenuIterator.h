#ifndef PANCAKE_HOUSE_MENU_ITERATOR_H
#define PANCAKE_HOUSE_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <list>
#include <vector>

class PancakeHouseMenuIterator : public Iterator {
	public:
		PancakeHouseMenuIterator(std::list<MenuItem> &i) :
			items(i) { position = items.begin();}
		MenuItem next() override { return *position++; }
		bool hasNext() const override { return position != items.cend(); }
	private:
		std::list<MenuItem> &items;
		std::list<MenuItem>::const_iterator position;
};

#endif /* PANCAKE_HOUSE_MENU_ITERATOR_H */
