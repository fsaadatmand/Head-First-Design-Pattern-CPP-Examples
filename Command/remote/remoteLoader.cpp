#include "CeilingFan.hpp"
#include "CeilingFanOnCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorUpCommand.hpp"
#include "GarageDoorDownCommand.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "RemoteControl.hpp"
#include "Stereo.hpp"
#include "StereoOnWithCDCommand.hpp"
#include "StereoOffCommand.hpp"

#include <iostream>

int main()
{
	// Invoker
	auto remoteControl = RemoteControl();

	// Receivers
	auto livingRoomLight = Light("Living Room");
	auto kitchenLight = Light("Kitchen Light");
	auto ceilingFan = CeilingFan("Living Room");
	auto garageDoor = GarageDoor();
	auto stereo = Stereo("Living Room");

	// Commands
	auto livingRoomLightOn = LightOnCommand(&livingRoomLight);
	auto livingRoomLightOff = LightOffCommand(&livingRoomLight);
	auto kitchenLightOn = LightOnCommand(&kitchenLight);
	auto kitchenLightOff = LightOffCommand(&kitchenLight);
	auto ceilingFanOn = CeilingFanOnCommand(&ceilingFan);
	auto ceilingFanOff = CeilingFanOffCommand(&ceilingFan);
	auto garageDoorUp = GarageDoorUpCommand(&garageDoor);
	auto garageDoorDown = GarageDoorDownCommand(&garageDoor);
	auto stereoOnWithCD = StereoOnWithCDCommand(&stereo);
	auto stereoOff = StereoOffCommand(&stereo);

	
	remoteControl.setCommand(0, &livingRoomLightOn, &livingRoomLightOff);
	remoteControl.setCommand(1, &kitchenLightOn, &kitchenLightOff);
	remoteControl.setCommand(2, &ceilingFanOn, &ceilingFanOff);
	remoteControl.setCommand(3, &stereoOnWithCD, &stereoOff);

	std::cout << remoteControl << '\n';

	for (Command::cvec_size i = 0; i < 4; ++i) {
		remoteControl.onButtonWasPushed(i);
		remoteControl.offButtonWasPushed(i);
	}
	return 0;
}
