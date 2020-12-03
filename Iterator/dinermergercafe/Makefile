CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++2a
DEPS = AlternatingDinerMenuIterator.h CafeMenu.h CafeMenuIterator.h \
	   DinerMenu.h DinerMenuIterator.h Iterator.h Makefile Menu.h MenuItem.h \
	   PancakeHouseMenu.h PancakeHouseMenuIterator.h Waitress.h
TARGET = menuTestDrive

OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
