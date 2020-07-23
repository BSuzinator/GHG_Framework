params ["_obj"];

if ( !(typeOf _obj == "Land_Ammostore2") ) exitWith { hint "Resupply depot is not type Land_Ammostore2"; };

private _laptop;

if ( isServer ) then
{
	// Make bunker indestructible
	_obj allowDamage false;

	// Add the laptop
	_laptop = createVehicle [
		"Land_Laptop_03_black_F",
		_obj modelToWorld [-2.25, 4.5, 0.9],
		[],
		0,
		"CAN_COLLIDE"
	];
	
	_laptop setDir getDir _obj;
	_laptop allowDamage false;
	
	_obj setVariable ["laptop_obj", _laptop, true];
};

if ( hasInterface ) then
{
	waitUntil { !isNull (_obj getVariable ["laptop_obj", objNull] ) };
	
	_laptop = _obj getVariable "laptop_obj";

	private _rsupAct = [
		"ghg_resupply_spawn",
		"Request Resupply",
		"",
		ghg_fnc_resupplyMenu,
		{true},
		{},
		[
			_obj
		]
	] call ace_interact_menu_fnc_createAction;
	
	[
		_laptop,
		0,
		[],
		_rsupAct
	] call ace_interact_menu_fnc_addActionToObject;
};