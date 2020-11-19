#include "Duck.hpp"
#include "Turkey.hpp"
#include "WildTurkey.hpp"
#include "WildTurkeyAdapter.hpp"
#include "MallardDuck.hpp"
#include "MallardDuckAdapter.hpp"
#include "WildTurkey.hpp"

#include <iostream>

void testDuck(Duck *duck) {
	duck->quack();
	duck->fly();
}

void testTurkey(Turkey *turkey) {
	turkey->gobble();
	turkey->fly();
}

int main()
{
	auto turkey = WildTurkey();
	std::cout << "The Turkey says...\n";
	turkey.gobble();
	turkey.fly();

	auto wildTurkeyAdapter = WildTurkeyAdapter(); // instantiate adapter
	std::cout << "\nThe TurkeyAdaptor says...\n";
	testDuck(&wildTurkeyAdapter); // pass it as Duck

	auto mallardDuckAdapter = MallardDuckAdapter(); // instantiate
	std::cout << "\nThe DuckAdaptor says...\n";
	for (int i = 0; i < 10; ++i)
		testTurkey(&mallardDuckAdapter); // pass it as Turkey
	
	return 0;
}
