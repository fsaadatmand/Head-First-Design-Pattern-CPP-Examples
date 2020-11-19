#include "CeilingFan.hpp"
#include "CeilingFanHighCommand.hpp"
#include "CeilingFanMediumCommand.hpp"
#include "CeilingFanLowCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "RemoteControlWithUndo.hpp"

#include <iostream>

int main()
{
	auto remoteControl = RemoteControlWithUndo();

	auto livingRoomLight = Light("Living Room");

	auto livingRoomLightOn = LightOnCommand(&livingRoomLight);
	auto livingRoomLightOff = LightOffCommand(&livingRoomLight);

	remoteControl.setCommand(0, &livingRoomLightOn, &livingRoomLightOff);

	remoteControl.onButtonWasPushed(0);
	remoteControl.offButtonWasPushed(0);
	std::cout << remoteControl << '\n';
	remoteControl.undoButtonWasPushed();
	remoteControl.offButtonWasPushed(0);
	remoteControl.onButtonWasPushed(0);
	std::cout << remoteControl << '\n';
	remoteControl.undoButtonWasPushed();

	std::cout << "\n*** Using State for Undo ***\n"; 
	auto ceilingFan = CeilingFan("Living Fan");

	auto ceilingFanMedium = CeilingFanMediumCommand(&ceilingFan);
	auto ceilingFanHigh = CeilingFanHighCommand(&ceilingFan);
	auto ceilingFanOff = CeilingFanOffCommand(&ceilingFan);

	remoteControl.setCommand(0, &ceilingFanMedium, &ceilingFanOff);
	remoteControl.setCommand(1, &ceilingFanHigh, &ceilingFanOff);

	remoteControl.onButtonWasPushed(0);
	remoteControl.offButtonWasPushed(0);
	std::cout << remoteControl << '\n';
	remoteControl.undoButtonWasPushed();

	remoteControl.onButtonWasPushed(1);
	std::cout << remoteControl << '\n';
	remoteControl.undoButtonWasPushed();

	return 0;
}
