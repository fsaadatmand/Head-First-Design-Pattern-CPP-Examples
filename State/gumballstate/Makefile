CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = GumballMachine.h HasQuarterState.h NoQuarterState.h SoldOutState.h \
	   SoldState.h State.h
TARGET = gumballMachineTestDrive
OBJ = $(TARGET).o GumballMachine.o HasQuarterState.o NoQuarterState.o \
	  SoldOutState.o SoldState.o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET) $(TARGET2)
