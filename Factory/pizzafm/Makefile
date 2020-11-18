CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = ChicagoPizzaStore.hpp ChicagoStyleCheesePizza.hpp \
	   ChicagoStyleClamPizza.hpp ChicagoStylePepperoniPizza.hpp \
	   ChicagoStyleVeggiePizza.hpp NYPizzaStore.hpp NYStyleCheesePizza.hpp \
	   NYStyleClamPizza.hpp NYStylePepperoniPizza.hpp NYStyleVeggiePizza.hpp \
	   Pizza.hpp PizzaStore.hpp
TARGET = pizzaTestDrive
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
