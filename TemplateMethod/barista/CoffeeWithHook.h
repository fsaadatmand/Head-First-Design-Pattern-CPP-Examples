#ifndef COFFEE_WITH_HOOK_H
#define COFFEE_WITH_HOOK_H

#include "CaffeineBeverageWithHook.h"
#include <cctype>
#include "istream"
#include <iostream>
#include <string>

class CoffeeWithHook : public CaffeineBeverageWithHook {
	public:
		void brew() override { std::cout << "Dripping Coffee through filter\n"; }
		void addCondiments() override { std::cout << "Adding Sugar and Milk\n"; }
		bool customerWantCondiment() override;
		std::string getUSerInput();
};

inline
bool
CoffeeWithHook::customerWantCondiment()
{
	std::string answer = getUSerInput();
	if (std::tolower(answer[0]) == 'y')
		return true;
	return false;
}

inline
std::string
CoffeeWithHook::getUSerInput()
{
	std::string answer = {};
	std::cout << "Would you like milk and sugar with your coffee (y/n)? ";
	if (!std::getline(std::cin, answer))
		std::cerr << "IO error trying to read your answer\n";
	if (answer.empty())
		return "no";
	return answer;
}

#endif /* COFFEE_WITH_HOOK_H */
