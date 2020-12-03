#ifndef CAFE_MENU_ITERATOR_H
#define CAFE_MENU_ITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"
#include <map>
#include <stdexcept>

class CafeMenuIterator : public Iterator<MenuItem> {
	public:
		CafeMenuIterator(std::map<std::string, MenuItem> &i) :
			items(i), iter(items.begin()) {}
		MenuItem* next() override { return &iter++->second; }
		bool hasNext() const override { return iter != items.end(); } 
		void remove() override;
	private:
		std::map<std::string, MenuItem> &items;
		std::map<std::string, MenuItem>::iterator iter;
};

inline
void
CafeMenuIterator::remove()
{
	if (items.empty())
		throw std::invalid_argument(
				"You can't remove an item until you've done at least one next()");
	items.erase(iter);
}

#endif /* CAFE_MENU_ITERATOR_H */
