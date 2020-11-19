#include "Singleton.hpp"

int main()
{
	[[maybe_unused]] Singleton *singleton = Singleton::getInstance();
	return 0;
}
