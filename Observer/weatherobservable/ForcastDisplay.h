#ifndef FORCAST_DISPLAY_H
#define FORCAST_DISPLAY_H

#include "DataObject.h"
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
#include "WeatherData.h"
#include <iostream>

class ForcastDisplay : public Observer, DisplayElement {
	public:
		ForcastDisplay() = default;
		ForcastDisplay(Subject *sbj) : observable(sbj) { observable->addObserver(this); }
		void update(Subject *sbj, DataObject *arg = nullptr) override;
		void display() const override;
	private:
		double currentPressure = 29.92f;
		double prevPressure = 0.0f;
		Subject *observable = nullptr;
};

inline
void
ForcastDisplay::update(Subject *sbj, [[maybe_unused]] DataObject *arg)
{
	if (auto *wd = dynamic_cast<WeatherData *>(sbj)) { // sbj is not nullptr
		prevPressure = currentPressure;
		currentPressure =  wd->getPressure();
		display();
	}
}

inline
void
ForcastDisplay::display() const
{
	std::cout << "Forcast: ";
		if (currentPressure > prevPressure)
			std::cout << "Improving weather on the way!\n";
		else if (currentPressure == prevPressure)
			std::cout << "Forcast: More of the same\n";
		else if (currentPressure < prevPressure)
			std::cout << "Forcast: Watch out for cooler, rainy weather\n";
}

#endif /* ifndef FORCAST_DISPLAY_H */
