player addEventHandler ["EpeContactStart", {
	params ["_object1", "_object2", "_selection1", "_selection2", "_force"];
	if !((_object1 isKindOf "Man") && _object2 isKindOf "LandVehicle")) exitWith {};
	[_object1, 0.8, "head", "bullet"] call ace_medical_fnc_addDamageToUnit;
}];