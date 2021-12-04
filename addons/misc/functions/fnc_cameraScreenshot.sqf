#include "script_component.hpp"
/*======================================
	Allows taking screenshots with digital camera
	Author: Quantx
======================================*/

private _shutter = ((currentWeapon player) isEqualTo "Camera_lxWS") && (cameraView == "GUNNER") && (inputAction "defaultAction" > 0);

if ( GVAR(last_picture) > 0 || !_shutter ) exitWith {
    GVAR(last_picture) = (GVAR(last_picture) - diag_deltaTime) max 0;
};

GVAR(last_picture) = 9999999; // Prevent immediate follow up picture

private _hits = lineIntersectsSurfaces [
    getPosWorld player, 
    getPosWorld player vectorAdd [0, 0, 50], 
    player, objNull, true, 1, "GEOM", "NONE"
];

private _inside = (count _hits > 0) && { ((_hits # 0) # 3) isKindOf "House" };

[_inside] spawn {
    params ["_inside"];

    titleCut ["","BLACK FADED", 999];
    uiSleep 0.1;
    screenshot "";
    
    playSound3D [ "x\ghg\addons\misc\sounds\shutter.ogg", player, _inside ];
    
    titleCut ["","BLACK IN", 0.1];
    
    GVAR(last_picture) = 1; // Cooldown time in seconds
};