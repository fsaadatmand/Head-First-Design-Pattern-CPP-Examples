#include "Command.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorOpen.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "SimpleRemoteControl.hpp"

 // remoteControlTest is the Client
 
int main() {
	auto remote = SimpleRemoteControl(); // Invoker
	auto light = new Light(); // Receiver
	auto lightOn = new LightOnCommand(light); // create command and pass the receiver to it
	remote.setCommand(lightOn);
	remote.buttonWasPressed();

	auto garageDoor = new GarageDoor();
	auto garageDoorOpen = new GarageDoorOpen(garageDoor);
	remote.setCommand(garageDoorOpen);
	remote.buttonWasPressed();

	// clean up
	delete light;
	delete lightOn;
	delete garageDoor;
	delete garageDoorOpen;

	return 0;
}
