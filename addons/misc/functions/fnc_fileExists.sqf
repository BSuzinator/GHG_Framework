#include "script_component.hpp"
/*======================================
	ghg_fnc_fileExists
	Checks to see if a file exists
	Author: Quantx
======================================*/
private ["_ctrl", "_fileExists"];
disableSerialization;
_ctrl = findDisplay 0 ctrlCreate ["RscHTML", -1];
_ctrl htmlLoad _this;
_fileExists = ctrlHTMLLoaded _ctrl;
ctrlDelete _ctrl;
_fileExists;