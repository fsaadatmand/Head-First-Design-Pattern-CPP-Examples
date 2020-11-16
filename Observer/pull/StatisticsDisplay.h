#ifndef STATISTICS_DISPLAY_H
#define STATISTICS_DISPLAY_H

#include "DataObject.h"
#include "DisplayElement.h"
#include "Subject.h"
#include "Observer.h"
#include "WeatherData.h"
#include <iostream>

class StatisticsDisplay : public Observer, public DisplayElement {
	public:
		StatisticsDisplay() = default;
		StatisticsDisplay(Subject *wd) : weatherData(wd)
	                                { weatherData->addObserver(this); }
		void update(Subject *sbj, DataObject *arg) override;
		void display() const override;
	private:
		double minTemp = 200.0f;
		double maxTemp = 0.0f;
		double tempSum = 0.0f;
		int numberOfReadings = 0;
		Subject *weatherData = nullptr;
};

inline
void 
StatisticsDisplay::update(Subject *sbj, [[maybe_unused]] DataObject *arg)
{
	if (auto *wd = dynamic_cast<WeatherData *>(sbj)) { // sbj is not nullptr
		auto temp = wd->getTemperature();
		tempSum += temp;
		++numberOfReadings;
		if (temp < minTemp)
			minTemp = temp;
		if (temp > maxTemp)
			maxTemp = temp;
		display();
	}
}

inline
void
StatisticsDisplay::display() const
{
	std::cout << "Avg/Max/Min Temperature = " <<
		tempSum / numberOfReadings << "/" << maxTemp << "/" << minTemp << '\n';
}

#endif /* ifndef STATISTICS_DISPLAY_H */
