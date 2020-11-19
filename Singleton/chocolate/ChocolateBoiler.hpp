#ifndef CHOCOLATE_BOILER_H
#define CHOCOLATE_BOILER_H

#include <iostream>

class ChocolateBoiler {
	public:
		static ChocolateBoiler* getInstance();
		bool isEmpty() const { return empty; }
		bool isBoiled() const { return boiled; }
		void fill();
		void drain();
		void boil();
	private:
		ChocolateBoiler() = default;
		bool empty = true;
		bool boiled = false;
		static ChocolateBoiler* uniqueInstance;
};

inline
ChocolateBoiler*
ChocolateBoiler::uniqueInstance = nullptr;

inline
ChocolateBoiler*
ChocolateBoiler::getInstance()
{
	if (uniqueInstance == nullptr) {
		std::cout << "Creating unique instance of Chocolate Boiler\n";
		uniqueInstance = new ChocolateBoiler();
	}
	std::cout << "Returning instance of Chocolate Boiler\n";
	return uniqueInstance;
}

inline
void
ChocolateBoiler::fill()
{
	if (isEmpty()) {
		empty = false;
		boiled = false;
		// fill the boiler with milk/chocolate misture
	}
}

inline
void
ChocolateBoiler::drain()
{
	if (!isEmpty() && isBoiled()) {
		// drain the boiled milk and chocolate
		empty = true;
	}
}

inline
void
ChocolateBoiler::boil() {
	if (!isEmpty() && !isBoiled()) {
		// bring the contents to a boil
		boiled = true;
	}
}

#endif /* CHOCOLATE_BOILER_H */
