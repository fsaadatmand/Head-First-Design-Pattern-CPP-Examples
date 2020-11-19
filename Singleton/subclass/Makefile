CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++20
DEPS = CoolerSingleton.hpp HotterSingleton.hpp Singleton.hpp
TARGET = singleTestDrive
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
