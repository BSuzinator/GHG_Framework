/*======================================
	ghg_fnc_reversePlanes
	Allows planes to reverse when on ground and stopped
	Called on mission start
	
======================================*/
if (!hasInterface) exitwith {};

["AllowPlanesToReverseCheck", "onEachFrame", {
  params ["_Object"];
  if (
  (vehicle player != player) and
  (vehicle player isKindOf "Plane") and
  {
   (isTouchingGround (vehicle player)) and 
   (driver (vehicle player) == player) and
   (speed vehicle player < 1) and
   (1 in [(inputAction "HeliDown"),(inputAction "AirPlaneBrake")])
  }
  ) then {
   _vehicle = vehicle player;
   _vel = velocity _vehicle; 
   _dir = direction _vehicle;
   if ((speed (vehicle player)) > -5) then { 
    _speed = -1; 
    _vehicle setVelocity [ 
     (_vel select 0) + (sin _dir * _speed),  
     (_vel select 1) + (cos _dir * _speed),  
     (_vel select 2) - 0.1
    ];
   };
  };
}] call BIS_fnc_addStackedEventHandler;