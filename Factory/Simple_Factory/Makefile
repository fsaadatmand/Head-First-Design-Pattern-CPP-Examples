CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = CheesePizza.hpp ClamPizza.hpp PepperoniPizza.hpp Pizza.hpp PizzaStore.hpp \
        SimplePizzaFactory.hpp VeggiePizza.hpp
TARGET = pizzaTestDrive
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
