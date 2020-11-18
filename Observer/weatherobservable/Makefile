CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++20
DEPS = CurrentConditionsDisplay.h DataObject.h DisplayElement.h \
       ForcastDisplay.h HeatIndex.h Observer.h StatisticsDisplay.h \
	   Subject.h WeatherData.h

TARGET = weatherStation
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
