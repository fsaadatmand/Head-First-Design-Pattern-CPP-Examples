#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

#include "Subject.h"
#include "Observer.h"
#include <list>

class WeatherData : public Subject {
	public:
		WeatherData() = default;
		void registerObserver(Observer *o) override { observers.push_back(o); }
		void removeObserver(Observer *o) override;
		void notifyObservers() override;
		void measurementChanged() { notifyObservers(); }
		void setMeasurements(const double &t, const double &h, const double &p);
	private:
		double temperature = 0.0f;
		double humidity = 0.0f;
		double pressure = 0.0f;
		std::list<Observer *> observers = {};
};

inline
void
WeatherData::removeObserver(Observer *o) {
	if (!observers.empty())
		std::erase(observers, o); // std::erase is C++20 addition
}

inline
void
WeatherData::notifyObservers() {
	for (auto o : observers)
		o->update(temperature, humidity, pressure);
}

inline
void 
WeatherData::setMeasurements(const double &t, const double &h, const double &p) {
	temperature = t;
	humidity = h;
	pressure = p;
	measurementChanged();
}

#endif /* ifndef WEATHER_DATA_H */
