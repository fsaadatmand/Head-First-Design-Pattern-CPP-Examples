#ifndef COOLER_SINGLETON_H
#define COOLER_SINGLETON_H

#include "Singleton.hpp"

class CoolerSingleton : public Singleton {
	protected:
		static Singleton *uniqueInstance;
	private:
		CoolerSingleton() : super() {}
};

#endif /* COOLER_SINGLETON_H */
