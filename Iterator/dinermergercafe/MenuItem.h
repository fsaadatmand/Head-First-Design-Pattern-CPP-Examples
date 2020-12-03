#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <string>
#include <ostream>

class MenuItem {
	public:
		MenuItem() = default;
		MenuItem(std::string_view n, std::string_view d, bool v, double p) :
			name(n), desciption(d), vegitarian(v), price(p) {}
		std::string getName() const { return name; }
		std::string getDescription() const { return desciption; }
		bool isVegitarian() const { return vegitarian; }
		double getPrice() const { return price; }
	private:
		std::string name = {};
		std::string desciption = {};
		bool vegitarian = false;
		double price = 0.0;
};

inline
std::ostream&
operator<<(std::ostream &os, const MenuItem &item)
{
	os << item.getName() << ", $" << item.getPrice() << "\n   "
	   <<item.getDescription();
	return os;
}

#endif /* MENU_ITEM_H */
