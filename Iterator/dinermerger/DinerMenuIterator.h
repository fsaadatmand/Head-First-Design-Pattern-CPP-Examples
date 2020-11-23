#ifndef DINER_MENU_ITERATOR_H
#define DINER_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <array>

class DinerMenuIterator : public Iterator {
	public:
		static constexpr size_t MAX_ITEMS = 6;
		DinerMenuIterator(std::array<MenuItem, MAX_ITEMS> &i) : items(i) {}
		MenuItem next() override { return items[position++]; };
		bool hasNext() const override { return items.size() > position; } 
	private:
		std::array<MenuItem, MAX_ITEMS> &items;
		std::array<MenuItem, MAX_ITEMS>::size_type position = 0;
};

#endif /* DINER_MENU_ITERATOR_H */
