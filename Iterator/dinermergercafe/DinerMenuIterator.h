#ifndef DINER_MENU_ITERATOR_H
#define DINER_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <array>
#include <iostream>
#include <stdexcept>

class DinerMenuIterator : public Iterator<MenuItem> {
	public:
		static constexpr size_t MAX_ITEMS = 6;
		DinerMenuIterator(std::array<MenuItem, MAX_ITEMS> &i) : items(i) {}
		MenuItem* next() override { return &items[position++]; };
		bool hasNext() const override { return items.size() > position; } 
		void remove() override;
	private:
		std::array<MenuItem, MAX_ITEMS> &items;
		std::array<MenuItem, MAX_ITEMS>::size_type position = 0;
};

inline
void
DinerMenuIterator::remove()
{
	if (items.empty())
		throw std::invalid_argument(
				"You can't remove an item until you've done at least one next()");
	if (!items.empty()) {
		for (auto i = position - 1; i < items.size() - 1; ++i)
			items[i] = items[i + 1]; // move items 1 position to the right
		items[items.size() - 1] =  {}; // clear the last item
	}
}

#endif /* DINER_MENU_ITERATOR_H */
