CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = CeilingFanHighCommand.hpp CeilingFan.hpp CeilingFanLowCommand.hpp \
       CeilingFanMediumCommand.hpp CeilingFanOffCommand.hpp Command.hpp \
       Light.hpp LightOffCommand.hpp LightOnCommand.hpp NoCommand.hpp \
       RemoteControlWithUndo.hpp

TARGET = remoteLoader
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
