CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = CeilingFan.hpp CeilingFanOffCommand.hpp CeilingFanOnCommand.hpp \
       Command.hpp GarageDoorDownCommand.hpp GarageDoor.hpp \
       GarageDoorUpCommand.hpp Light.hpp LightOffCommand.hpp \
       LightOnCommand.hpp NoCommand.hpp RemoteControl.hpp remoteLoader.cpp \
       Stereo.hpp StereoOffCommand.hpp StereoOnWithCDCommand.hpp

TARGET = remoteLoader
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
