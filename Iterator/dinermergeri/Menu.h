#ifndef MENU_H
#define MENU_H

#include "Iterator.h"
#include "MenuItem.h"
#include <memory>

class Menu {
	public:
	 	virtual ~Menu () = default;
		virtual std::unique_ptr<Iterator<MenuItem>> createIterator() = 0;
};

#endif /* MENU_H */
