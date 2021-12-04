#include "script_component.hpp"
/*======================================
	Allows taking screenshots with digital camera
	Author: Quantx
======================================*/
if ! (hasInterface) exitWith {};

GVAR(last_picture) = 0;
[FUNC(cameraScreenshot), 0, []] call CBA_fnc_addPerFrameHandler;