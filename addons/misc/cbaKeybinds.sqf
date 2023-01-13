#include "\a3\ui_f\hpp\defineDIKCodes.inc"

["Ghost Hawk Gaming", "RappelCutRopesKey", 
	["Cut Rappel Ropes", "Cuts Rappel Ropes"], 
	{}, 
	{[vehicle player, player, []] call FUNC(rappelCutRopes)}, 
	[DIK_C, [true, false, false]]
] call CBA_fnc_addKeybind;