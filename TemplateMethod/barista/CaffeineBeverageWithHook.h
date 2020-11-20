#ifndef CAFFEINE_BEVERAGEWITH_HOOK_H
#define CAFFEINE_BEVERAGEWITH_HOOK_H

#include <iostream>

class CaffeineBeverageWithHook {
	public:
		virtual ~CaffeineBeverageWithHook() = default;
		virtual void prepareRecipe() final;
	protected:
		virtual void brew() = 0;
		virtual void addCondiments() = 0;
		virtual bool customerWantCondiment() { return true; }
		void boilWater() { std::cout << "Boiling water\n"; }
		void pourInCup() { std::cout << "Pouring into cup\n"; }
};

inline
void
CaffeineBeverageWithHook::prepareRecipe()
{
	boilWater();
	brew();
	pourInCup();
	if (customerWantCondiment())
		addCondiments();
}



#endif /* CAFFEINE_BEVERAGEWITH_HOOK_H */
