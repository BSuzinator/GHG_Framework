#include "script_component.hpp"
/*======================================
	ghg_fnc_dumpLoadout
    Convert's a units loadout to GHG format
    Author: QuantX
======================================*/
params [
    ["_unit", player, [objNull]]
];

// TODO check if the unit is a man

private _loadout = getUnitLoadout _unit;
private _unitType = [toLower typeOf _unit, 6] call BIS_fnc_trimString;
_loadout params ["_weapon1", "_weapon3", "_weapon2", "_uniform", "_vest", "_backpack", "_helmet", "_facewear", "_binoculars", "_linked"];

private _out = format [ "
#include ""script_component.hpp""
/*======================================
	Loadout for %1 (FRESH EXPORT)
======================================*/
class %1 : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { ""%2"" };
		muzzle = ""%3"";
        laser = ""%4"";
        ammo = ""%5"";
		bipod = ""%6"";
        grenade = ""%7"";
		
        class Scopes : Scopes
        {
            scope = ""%8"";
            holo = ""rhsusf_acc_eotech_xps3"";
			alt_holo = """";
            red_dot_magnified = ""rhsusf_acc_g33_t1"";
            holo_magnified = ""rhsusf_acc_g33_xps3"";
            holo_alt_camo[] = { ""rhsusf_acc_eotech_552_wd"" };
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { ""CUP_U_B_BDUv2_gloves_ERDL_highland"" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { ""CUP_V_B_IOTV_OCP_Rifleman_USArmy"" };
        // List of items
        CUP_30Rnd_556x45_Stanag = 8;
        SmokeShell = 2;
        rhs_mag_m67 = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { ""CUP_H_HIL_HelmetACH_TTS"" };
    facewear = ""rhsusf_oakley_goggles_clr"";
};"
, 
	//Class
	_unitType, 
	//Primary Weapon
		//Weapon Class
		((_loadout # 0) # 0), 
		//Suppressor
		((_loadout # 0) # 1), 
		//Laser/Light
		((_loadout # 0) # 2), 
		//Primary Magazine
		(((_loadout # 0) # 4) # 0), 
		//Bipod
		((_loadout # 0) # 6), 
		//Secondary Magazine
		(((_loadout # 0) # 5) # 0), 
		//Scope
		((_loadout # 0) # 3)
];