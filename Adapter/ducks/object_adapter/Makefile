CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = DuckAdapter.hpp Duck.hpp MallardDuck.hpp SimpleRandom.hpp \
	   TurkeyAdapter.hpp Turkey.hpp WildTurkey.hpp challenge/Drone.hpp \
	   challenge/DroneAdapter.hpp challenge/SuperDrone.hpp
TARGET = duckTestDrive
TARGET2 = turkeyTestDrive
OBJ = $(TARGET).o
OBJ2 = $(TARGET2).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

$(TARGET2): $(OBJ2)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET) $(TARGET2)
