CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++2a
DEPS = CompositeIterator.h Iterator.h Makefile MenuComponent.h Menu.h \
	   MenuItem.h MenuIterator.h menuTestDrive.o NullIterator.h Waitress.h
TARGET = menuTestDrive
#TARGET = menuIterTest

OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
