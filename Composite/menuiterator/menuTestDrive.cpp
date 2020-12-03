#include "Menu.h"
#include "MenuComponent.h"
#include "MenuItem.h"
#include "Waitress.h"
#include <vector>

void deleteItems(std::vector<MenuItem *> &items)
{
	for (auto &item : items)
		delete item;
}

int main()
{
	auto pancakeHouseMenu = Menu("PANCAKE HOUSE MENU", "Breakfast");
	auto dinerMenu = Menu("DINER MENU", "Lunch");
	auto cafeMenu = Menu("CAFE MENU", "Dinner");
	auto dessertMenu = Menu("DESSERT MENU", "Dessert of course!");
	auto coffeeMenu = Menu("COFFEE MENU", "Stuff to go with your afternoon coffee");

	// create head of the tree
	auto allMenus = Menu("ALL MENUS", "All menus combinded");

	// add composites
	allMenus.add(&pancakeHouseMenu);
	allMenus.add(&dinerMenu);
	allMenus.add(&cafeMenu);

	std::vector<MenuItem *> pancakeHouseMenuItems {
		new MenuItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs and toast", true, 2.99),
		new MenuItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99),
		new MenuItem("Blueberry Pancakes", "Pancakes made with fresh blueberries, and blueberry syrup", true, 3.49),
		new MenuItem("Waffles", "Waffles with your choice of blueberries or strawberries", true, 3.59) };

	for (auto &item : pancakeHouseMenuItems)
		pancakeHouseMenu.add(item);

	std::vector<MenuItem *> dinerMenuItems {
		new MenuItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99),
		new MenuItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99),
		new MenuItem("Soup of the day", "A bowl of the soup of the day, with a side of potato salad", false, 3.29),
		new MenuItem("Hot Dog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05),
		new MenuItem("Steamed Veggies and Brown Rice", "Steamed vegetables over brown rice", true, 3.99),
		new MenuItem("Pasta", "Spaghetti with marinara sauce, and a slice of sourdough bread", true, 3.89) };

	for (auto &item : dinerMenuItems)
		dinerMenu.add(item);

	dinerMenu.add(&dessertMenu);

	std::vector<MenuItem *> dessertMenuItems {
		new MenuItem("Apple Pie", "Apple pie with a flakey crust, topped with vanilla icecream", true, 1.59),
		new MenuItem("Cheesecake", "Creamy New York cheesecake, with a chocolate graham crust", true, 1.99),
		new MenuItem("Sorbet", "A scoop of raspberry and a scoop of lime", true, 1.89) };

	for (auto &item : dessertMenuItems) 
		dessertMenu.add(item);

	std::vector<MenuItem *> cafeMenuItems {
		new MenuItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99 ),
		new MenuItem("Soup of the day", "A cup of the soup of the day, with a side salad", false, 3.69),
		new MenuItem("Burrito", "A large burrito, with whole pinto beans, salsa, guacamole", true, 4.29)  };

	for (auto &item : cafeMenuItems)
		cafeMenu.add(item);

	cafeMenu.add(&coffeeMenu);

	std::vector<MenuItem *> coffeeMenuItems {
		new MenuItem("Coffee Cake", "Crumbly cake topped with cinnamon and walnuts", true, 1.59),
		new MenuItem("Bagel", "Flavors include sesame, poppyseed, cinnamon raisin, pumpkin", false, 0.69),
		new MenuItem("Biscotti", "Three almond or hazelnut biscotti cookies", true, 0.89) };

	for (auto &item: coffeeMenuItems)
		coffeeMenu.add(item);

	auto waitress = Waitress(&allMenus);

	waitress.printVegitarianMenu();

	deleteItems(coffeeMenuItems);
	deleteItems(cafeMenuItems);
	deleteItems(dessertMenuItems);
	deleteItems(dinerMenuItems);
	deleteItems(pancakeHouseMenuItems);

	return 0;
}
