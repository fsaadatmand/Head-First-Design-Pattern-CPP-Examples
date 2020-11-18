#ifndef FORCAST_DISPLAY_H
#define FORCAST_DISPLAY_H

#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
#include <iostream>

class ForcastDisplay : public Observer, public DisplayElement {
	public:
		ForcastDisplay() = default;
		ForcastDisplay(Subject *wd) : weatherData(wd) { weatherData->registerObserver(this); }
		void update(double t, double h, double p) override;
		void display() const override;
	private:
		double currentPressure = 29.92f;
		double prevPressure = 0.0f;
		Subject *weatherData = nullptr;
};

inline
void
ForcastDisplay::update([[maybe_unused]] double t, [[maybe_unused]] double h, double p) {
	prevPressure = currentPressure;
	currentPressure = p;
	display();
}

inline
void
ForcastDisplay::display() const {
	std::cout << "Forcast: ";
		if (currentPressure > prevPressure)
			std::cout << "Improving weather on the way!\n";
		else if (currentPressure == prevPressure)
			std::cout << "Forcast: More of the same\n";
		else if (currentPressure < prevPressure)
			std::cout << "Forcast: Watch out for cooler, rainy weather\n";
}

#endif /* ifndef FORCAST_DISPLAY_H */
