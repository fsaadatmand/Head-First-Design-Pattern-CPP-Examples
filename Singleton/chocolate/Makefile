CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++20
DEPS = ChocolateBoiler.hpp
TARGET = chocolateController
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
