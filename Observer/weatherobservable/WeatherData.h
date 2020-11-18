#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include "Subject.h"
#include "Observer.h"
#include <list>

class WeatherData : public Subject {
	public:
		WeatherData() = default;
		void measurementsChanged();
		void setMeasurements(const double &t, const double &h, const double &p);
		double getTemperature() const { return temperature; }
		double getHumidity() const { return humidity; }
		double getPressure() const { return pressure; }
	private:
		double temperature = 0.0f;
		double humidity = 0.0f;
		double pressure = 0.0f;
};

inline
void
WeatherData::measurementsChanged() {
	setChanged();
	notifyObservers(); // pull model
}

inline
void
WeatherData::setMeasurements(const double &t, const double &h, const double &p) {
	temperature = t;
	humidity = h;
	pressure = p;
	measurementsChanged();
}

#endif /* ifndef WEATHER_DATA_H */
