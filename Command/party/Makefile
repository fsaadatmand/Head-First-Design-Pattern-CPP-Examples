CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = CeilingFanHighCommand.hpp CeilingFan.hpp CeilingFanLowCommand.hpp \
	   CeilingFanMediumCommand.hpp CeilingFanOffCommand.hpp Command.hpp \
	   Hottub.hpp HottubOffCommand.hpp HottubOnCommand.hpp Light.hpp \
	   LightOffCommand.hpp LightOnCommand.hpp MacroCommand.hpp \
	   NoCommand.hpp RemoteControl.hpp Stereo.hpp StereoOffCommand.hpp \
	   StereoOnCommand.hpp TV.hpp TVOffCommand.hpp TVOnCommand.hpp
TARGET = remoteLoader
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
