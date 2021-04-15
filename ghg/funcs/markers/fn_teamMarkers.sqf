/*======================================
	ghg_fnc_teamMarkers
	Updates map positions
	Author: BSuz
======================================*/
params ["_map"];

{
	private _cgrp = _x;
	// Only draw markes from our side
		
		// This is our group, draw groupmates
		if ( _cgrp isEqualTo group player ) then {
			{
				private _unit = _x;
				if ( !( _unit isEqualTo leader _cgrp ) ) then {
					private _clr = [1,1,1,1];
					
					switch (assignedTeam _unit) do {
						case "RED": { _clr = [1,0,0,1]; };
						case "GREEN": { _clr = [0,1,0,1]; };
						case "BLUE": { _clr = [0,0,1,1]; };
						case "YELLOW": { _clr = [1,1,0,1]; };
					};
				
				_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";
				
				//Get alternate icons for roles
				private _isEngineer = _unit getVariable ["ACE_isEngineer", _unit getUnitTrait "engineer"];
				if (_isEngineer isEqualType 0) then {_isEngineer = _isEngineer > 0};
				if (_isEngineer) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManEngineer_ca.paa";};
				if ((_unit getVariable ["ACE_isEOD", _unit getUnitTrait "explosiveSpecialist"]) in [1, true]) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManExplosive_ca.paa";};
				if (getText(configFile >> "CfgWeapons" >> (primaryWeapon (_unit)) >> "UIPicture") == "\a3\weapons_f\data\ui\icon_mg_ca.paa") then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManMG_ca.paa";};
				if (getText(configFile >> "CfgWeapons" >> (secondaryWeapon (_unit)) >> "UIPicture") == "\a3\weapons_f\data\ui\icon_at_ca.paa") then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManAT_ca.paa";};
				if (GVAR(ace_medic) && {_unit getVariable ["ace_medical_medicClass", [0, 1] select (_unit getUnitTrait "medic")] > 0}) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";};
				if (!GVAR(ace_medic) && {_unit getUnitTrait "medic"}) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";};
				if ((leader _unit) isEqualTo _unit) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";};
				
					_map drawIcon [
						_iconSTR,
						_clr,
						getPos _unit,
						18,
						18,
						getDir _unit
					];
				};
			} forEach units _cgrp;
		};
	} forEach allGroups;