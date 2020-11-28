#include "Menu.h"
#include "MenuComponent.h"
#include "MenuItem.h"
#include "Waitress.h"
#include <memory>

int main()
{
	auto pancakeHouseMenu = std::make_shared<Menu>("PANCAKE HOUSE MENU", "Breakfast");
	auto dinerMenu = std::make_shared<Menu>("DINER MENU", "Lunch");
	auto cafeMenu = std::make_shared<Menu>("CAFE MENU", "Dinner");
	auto dessertMenu = std::make_shared<Menu>("DESSERT MENU", "Dessert of course!");
	auto coffeeMenu = std::make_shared<Menu>("COFFEE MENU", "Stuff to go with your afternoon coffee");

	// create head of the tree
	auto allMenus = std::make_shared<Menu>("ALL MENUS", "All menus combinded");

	// add composites
	allMenus->add(pancakeHouseMenu);
	allMenus->add(dinerMenu);
	allMenus->add(cafeMenu);

	// add leaves (menu items) here
	pancakeHouseMenu->add(std::make_shared<MenuItem>(
				"K&B's Pancake Breakfast", 
				"Pancakes with scrambled eggs and toast", 
				true,
				2.99));
	pancakeHouseMenu->add(std::make_shared<MenuItem>(
				"Regular Pancake Breakfast", 
				"Pancakes with fried eggs, sausage", 
				false,
				2.99));
	pancakeHouseMenu->add(std::make_shared<MenuItem>(
				"Blueberry Pancakes",
				"Pancakes made with fresh blueberries, and blueberry syrup",
				true,
				3.49));
	pancakeHouseMenu->add(std::make_shared<MenuItem>(
				"Waffles",
				"Waffles with your choice of blueberries or strawberries",
				true,
				3.59));

	dinerMenu->add(std::make_shared<MenuItem>(
				"Vegetarian BLT",
				"(Fakin') Bacon with lettuce & tomato on whole wheat", 
				true, 
				2.99));
	dinerMenu->add(std::make_shared<MenuItem>(
				"BLT",
				"Bacon with lettuce & tomato on whole wheat", 
				false, 
				2.99));
	dinerMenu->add(std::make_shared<MenuItem>(
				"Soup of the day",
				"A bowl of the soup of the day, with a side of potato salad", 
				false, 
				3.29));
	dinerMenu->add(std::make_shared<MenuItem>(
				"Hot Dog",
				"A hot dog, with saurkraut, relish, onions, topped with cheese",
				false, 
				3.05));
	dinerMenu->add(std::make_shared<MenuItem>(
				"Steamed Veggies and Brown Rice",
				"Steamed vegetables over brown rice", 
				true, 
				3.99));

	dinerMenu->add(std::make_shared<MenuItem>(
				"Pasta",
				"Spaghetti with marinara sauce, and a slice of sourdough bread",
				true, 
				3.89));

	dinerMenu->add(dessertMenu);

	dessertMenu->add(std::make_shared<MenuItem>(
				"Apple Pie",
				"Apple pie with a flakey crust, topped with vanilla icecream",
				true,
				1.59));

	dessertMenu->add(std::make_shared<MenuItem>(
				"Cheesecake",
				"Creamy std::make_shared<York cheesecake, with a chocolate graham crust",
				true,
				1.99));
	dessertMenu->add(std::make_shared<MenuItem>(
				"Sorbet",
				"A scoop of raspberry and a scoop of lime",
				true,
				1.89));

	cafeMenu->add(std::make_shared<MenuItem>(
				"Veggie Burger and Air Fries",
				"Veggie burger on a whole wheat bun, lettuce, tomato, and fries",
				true, 
				3.99));
	cafeMenu->add(std::make_shared<MenuItem>(
				"Soup of the day",
				"A cup of the soup of the day, with a side salad",
				false, 
				3.69));
	cafeMenu->add(std::make_shared<MenuItem>(
				"Burrito",
				"A large burrito, with whole pinto beans, salsa, guacamole",
				true, 
				4.29));

	cafeMenu->add(coffeeMenu);

	coffeeMenu->add(std::make_shared<MenuItem>(
				"Coffee Cake",
				"Crumbly cake topped with cinnamon and walnuts",
				true,
				1.59));
	coffeeMenu->add(std::make_shared<MenuItem>(
				"Bagel",
				"Flavors include sesame, poppyseed, cinnamon raisin, pumpkin",
				false,
				0.69));
	coffeeMenu->add(std::make_shared<MenuItem>(
				"Biscotti",
				"Three almond or hazelnut biscotti cookies",
				true,
				0.89));

	auto waitress = Waitress(allMenus);

	waitress.printVegitarianMenu();

	return 0;
}
