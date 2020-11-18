CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++20
DEPS = Beverage.h CondimentDecorator.h DarkRoast.h Decaf.h Espresso.h \
	   HouseBlend.h Mocha.h Soy.h Whip.h

TARGET = starBuzzCoffee
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
