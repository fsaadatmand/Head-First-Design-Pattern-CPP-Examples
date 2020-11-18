CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = BlackOlives.hpp Cheese.hpp CheesePizza.hpp ChicagoPizzaIngredientFactory.hpp \
	   ChicagoPizzaStore.hpp ClamPizza.hpp Clams.hpp Dough.hpp Eggplant.hpp \
	   FreshClams.hpp FrozenClams.hpp Garlic.hpp Makefile MarinaraSauce.hpp \
	   MozzarellaCheese.hpp Mushroom.hpp NYPizzaIngredientFactory.hpp NYPizzaStore.hpp \
	   Onion.hpp ParmesanCheese.hpp Pepperoni.hpp PepperoniPizza.hpp Pizza.hpp \
	   PizzaIngredientFactory.hpp PizzaStore.hpp PlumTomatoSauce.hpp RedPepper.hpp \
	   ReggianoCheese.hpp Sauce.hpp SlicedPepperoni.hpp Spinach.hpp ThickCrustDough.hpp \
	   ThinCrustDough.hpp VeggiePizza.hpp Veggies.hpp
TARGET = pizzaTestDrive
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
