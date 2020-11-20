CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = Amplifier.h CDPlayer.h HomeTheaterFacade.h PopcornPopper.h Projector.h \
	   Screen.h StreamingPlayer.h TheaterLights.h Tuner.h
TARGET = homeTheaterTestDrive
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
