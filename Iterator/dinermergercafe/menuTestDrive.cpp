#include "CafeMenu.h"
#include "DinerMenu.h"
#include "Menu.h"
#include "PancakeHouseMenu.h"
#include "Waitress.h"
#include <ios>
#include <memory>

int main()
{
	std::map<std::string, std::unique_ptr<Menu>> menus;
	
	menus["BREAKFEAST"] = std::make_unique<PancakeHouseMenu>();
	menus["LUNCH"] = std::make_unique<DinerMenu>();
	menus["DINNER"] = std::make_unique<CafeMenu>();

	auto waitress = Waitress(menus);

	waitress.printMenu();

	return 0;
}
