#include "Singleton.hpp"

int main()
{
	[[maybe_unused]] volatile Singleton *singleton = Singleton::getInstance();
	return 0;
}
