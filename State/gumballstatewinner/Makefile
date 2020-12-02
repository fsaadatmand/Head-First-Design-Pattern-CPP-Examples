CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = GumballMachine.h HasQuarterState.h NoQuarterState.h SoldOutState.h \
	   SimpleRandom.h SoldState.h State.h WinnerState.h
TARGET = gumballMachineTestDrive
OBJ = $(TARGET).o GumballMachine.o HasQuarterState.o NoQuarterState.o \
	  SimpleRandom.o SoldOutState.o SoldState.o WinnerState.o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET) $(TARGET2)
