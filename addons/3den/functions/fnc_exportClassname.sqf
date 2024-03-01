#include "script_component.hpp"
/*======================================
	ghg_3den_fnc_exportClassname
	Copies classname of object to clipboard
	Author: BSuz
======================================*/
(uiNamespace getVariable "BIS_fnc_3DENEntityMenu_data") params ["_position3D", "_entity"];
private _entity3den = get3DENSelected "Object";
if (_entity isEqualTo objNull) then {_entity = _entity3den};
private _copyString = str (typeOf _entity);
copyToClipboard _copyString;
systemChat str _copyString;
systemChat "test";