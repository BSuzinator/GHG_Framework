#include "script_component.hpp"
/*======================================
	ghg_3den_fnc_exportClassname
	Copies classname of object to clipboard
	Author: BSuz
======================================*/
private _entity = get3DENSelected "Object";
(uiNamespace getVariable "BIS_fnc_3DENEntityMenu_data") params ["_position3D", "_entity"];
copyToClipboard str (typeOf _entity);
systemChat str (typeOf _entity);
systemChat "test";