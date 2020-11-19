#include "CeilingFan.hpp"
#include "CeilingFanHighCommand.hpp"
#include "CeilingFanMediumCommand.hpp"
#include "CeilingFanLowCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "Hottub.hpp"
#include "HottubOnCommand.hpp"
#include "HottubOffCommand.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "MacroCommand.hpp"
#include "RemoteControl.hpp"
#include "Stereo.hpp"
#include "StereoOnCommand.hpp"
#include "StereoOffCommand.hpp"
#include "TV.hpp"
#include "TVOnCommand.hpp"
#include "TVOffCommand.hpp"
#include <iostream>

int main()
{
	// Invoker
	auto remoteControl = RemoteControl();
	
	// Receivers
	auto light = Light("Living Room");
	auto tv = TV("Living Room");
	auto stereo = Stereo("Living Room");
	auto hottub = Hottub();

	// Commands
	auto lightOn = LightOnCommand(&light);
	auto stereoOn = StereoOnCommand(&stereo);
	auto tvOn = TVOnCommand(&tv);
	auto hottubOn = HottubOnCommand(&hottub);
	auto lightOff = LightOffCommand(&light);
	auto stereoOff = StereoOffCommand(&stereo);
	auto tvOff = TVOffCommand(&tv);
	auto hottubOff = HottubOffCommand(&hottub);

	// vectors to store commands
	Command::command_vec partyOn = { &lightOn, &stereoOn, &tvOn, &hottubOn };
	Command::command_vec partyOff = { &lightOff, &stereoOff, &tvOff, &hottubOff };

	// Macros
	auto partyOnMacro = MacroCommand(partyOn);
	auto partyOffMacro = MacroCommand(partyOff);

	remoteControl.setCommand(0, &partyOnMacro, &partyOffMacro);

	std::cout << remoteControl << '\n';
	std::cout << "--- Pushing Macro On ---\n";
	remoteControl.onButtonWasPushed(0);
	std::cout << "--- Pushing Macro Off ---\n";
	remoteControl.offButtonWasPushed(0);

	return 0;
}
