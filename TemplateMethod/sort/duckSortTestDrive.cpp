#include "Duck.h"
#include <algorithm>
#include <iostream>
#include <vector>

void display(const std::vector<Duck> &ducks)
{
	for (const auto &duck : ducks)
		std::cout << duck << '\n';
}

int main()
{
	std::vector<Duck> ducks = { Duck("Daffy", 8), 
		                        Duck("Dewey", 2),
								Duck("Howard", 7),
								Duck("Louie", 2),
								Duck("Donald", 10),
								Duck("Huey", 2) };

	std::cout << "Before sorting:\n";
	display(ducks);

	std::sort(ducks.begin(), ducks.end()); 

	std::cout << "\nAfter sorting:\n";
	display(ducks);
	
	return 0;
}
