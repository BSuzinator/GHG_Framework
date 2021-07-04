/*======================================
	ghg_fnc_markersUnit
	Updates map positions for units
	Author: Quantx
======================================*/
params ["_map"];

{
	private _cgrp = _x;
	
	// Only draw markes from our side
	if ( (side _cgrp) isEqualTo playerSide || playerSide isEqualTo sideLogic ) then
	{
		if ( _cgrp isEqualTo group player ) then
		{
			{
				private _unit = _x;

				private _iconSTR = "\A3\ui_f\data\map\vehicleicons\iconMan_ca.paa";

				private _isEngineer = _unit getVariable ["ACE_isEngineer", _unit getUnitTrait "engineer"];
				if (_isEngineer isEqualType 0) then {_isEngineer = _isEngineer > 0};
				if (_isEngineer) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManEngineer_ca.paa";};
				if ((_unit getVariable ["ACE_isEOD", _unit getUnitTrait "explosiveSpecialist"]) in [1, true]) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManExplosive_ca.paa";};
				if (getText(configFile >> "CfgWeapons" >> (primaryWeapon (_unit)) >> "UIPicture") == "\a3\weapons_f\data\ui\icon_mg_ca.paa") then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManMG_ca.paa";};
				if (getText(configFile >> "CfgWeapons" >> (secondaryWeapon (_unit)) >> "UIPicture") == "\a3\weapons_f\data\ui\icon_at_ca.paa") then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManAT_ca.paa";};
				if (([_unit] call ace_medical_treatment_fnc_isMedic) && {_unit getVariable ["ace_medical_medicClass", [0, 1] select (_unit getUnitTrait "medic")] > 0}) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";};
				if (!([_unit] call ace_medical_treatment_fnc_isMedic) && {_unit getUnitTrait "medic"}) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManMedic_ca.paa";};
				if ((leader _unit) isEqualTo _unit) then {_iconSTR = "\A3\ui_f\data\map\vehicleicons\iconManLeader_ca.paa";};

				private _clr = switch (assignedTeam _unit) do {
					case "RED":    { [1,0,0,1] };
					case "GREEN":  { [0,1,0,1] };
					case "BLUE":   { [0,0,1,1] };
					case "YELLOW": { [1,1,0,1] };
					default        { [1,1,1,1] };
				};
				
				_map drawIcon [
					_iconSTR,
					_clr,
					getPos _unit,
					18,
					18,
					getDir _unit
				];
			} forEach units _cgrp;
		};
	};
} forEach allGroups;