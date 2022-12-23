#include "script_component.hpp"
/*======================================
	ghg_misc_fnc_getDisplayName
    Returns Display Name of supplied object or classname
	
	Author: BSuz
	with thanks to hoverguy and tryteyker
======================================*/
private ["_suppliedType","_type", "_cfgType","_data"];
params ["_suppliedType"];
if ((typeName _suppliedType) == "OBJECT") then {
	_type = (typeof _suppliedType);
} else {
	_type = _suppliedType;
};
//assume classname is provided. if object is provided, get its classname
switch (true) do
{
	case(isClass(configFile >> "CfgMagazines" >> _type)): {_cfgType = "CfgMagazines"};
	case(isClass(configFile >> "CfgWeapons" >> _type)): {_cfgType = "CfgWeapons"};
	case(isClass(configFile >> "CfgVehicles" >> _type)): {_cfgType = "CfgVehicles"};
	case(isClass(configFile >> "CfgGlasses" >> _type)): {_cfgType = "CfgGlasses"};
};

getText (configFile >> _cfgType >> _type >> "displayName");