#ifndef ALTERNATING_DINER_MENU_ITERATOR_H
#define ALTERNATING_DINER_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

/*
 * Note: this code is untested yet. To test it your self, have the
 * createIterator member function's return a ref to an AlternatingDinerMenuIterator.
 */

class AlternatingDinerMenuIterator : public Iterator<MenuItem> {
	public:
		AlternatingDinerMenuIterator(std::vector<MenuItem> &i);
		MenuItem* next() override;
		bool hasNext() const override { return iter != items.end(); } // && *iter != nullptr
		void remove() override;
	private:
		std::vector<MenuItem> &items;
		std::vector<MenuItem>::iterator iter;
};

inline
AlternatingDinerMenuIterator::AlternatingDinerMenuIterator(std::vector<MenuItem> &i) :
	items(i), iter(items.begin())
{
	auto epoch_time = std::time(nullptr);
	auto calendar_time = std::gmtime(&epoch_time);
	auto step = calendar_time->tm_wday % 2; // result is 0 or 1
	iter += step;
}

inline
MenuItem*
AlternatingDinerMenuIterator::next()
{
	auto menuItem = &*iter;
	iter += 2;
	return menuItem;
}

inline
void
AlternatingDinerMenuIterator::remove()
{
	std::cerr << "Alternating Diner Menu Iterator does not support remove()";
}

#endif /* ALTERNATING_DINER_MENU_ITERATOR_H */
