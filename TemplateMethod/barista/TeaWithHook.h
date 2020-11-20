#ifndef TEA_WITH_HOOK_H
#define TEA_WITH_HOOK_H

#include "CaffeineBeverageWithHook.h"
#include <cctype>
#include <iostream>
#include <string>

class TeaWithHook : public CaffeineBeverageWithHook {
	public:
		void brew() override { std::cout << "Steeping the tea\n"; }
		void addCondiments() override { std::cout << "Adding Lemon\n"; }
		bool customerWantCondiment() override;
		std::string getUSerInput();
};

inline
bool
TeaWithHook::customerWantCondiment()
{
	std::string answer = getUSerInput();
	if (std::tolower(answer[0]) == 'y')
		return true;
	return false;
}

inline
std::string
TeaWithHook::getUSerInput()
{
	std::string answer = {};
	std::cout << "Would you like lemon with your tea (y/n)? ";
	if (!std::getline(std::cin, answer))
		std::cerr << "IO error trying to read your answer\n";
	if (answer.empty())
		return "no";
	return answer;
}

#endif /* TEA_WITH_HOOK_H */
