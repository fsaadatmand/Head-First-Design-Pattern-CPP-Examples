CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17
DEPS = DuckCall.h Duck.h FlyBehavior.h FlyNoWay.h FlyRocketPowered.h \
       FlyWithWings.h MallardDuck.h ModelDuck.h MuteDuck.h MuteQuack.h \
       QuackBehavior.h Quack.h QuackMute.h Squeak.h

TARGET = miniDuckSimulator
OBJ = $(TARGET).o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o $(TARGET)
