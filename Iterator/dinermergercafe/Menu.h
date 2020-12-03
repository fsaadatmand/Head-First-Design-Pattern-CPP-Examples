#ifndef MENU_H
#define MENU_H

#include "Iterator.h"
#include "MenuItem.h"
#include <algorithm>
#include <map>
#include <memory>

class Menu {
	public:
		using menus_map = std::map<std::string, std::unique_ptr<Menu>>;
	 	virtual ~Menu () = default;
		virtual std::unique_ptr<Iterator<MenuItem>> createIterator() = 0;
};

#endif /* MENU_H */
