#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "Waitress.h"

int main()
{
	auto pancakeHouseMenu = PancakeHouseMenu();
	auto dinerMenu = DinerMenu();

	auto waitress = Waitress(&pancakeHouseMenu, &dinerMenu);

	waitress.printMenu();
	
	return 0;
}
