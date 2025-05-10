#include "script_component.hpp"
/*======================================
	This overwrites an RHS function
======================================*/
params["_v"];

private _center = _v modelToWorldVisual (_v selectionPosition "CargoAttach");
private _polygon = [];

{
	_polygon pushback (_v modelToWorldVisual (_v selectionPosition _x))
} foreach [
    "cargo_mem_1",
    "cargo_mem_2",
    "cargo_mem_3",
    "cargo_mem_4"
];

{
	if((_x != _v) && {!(_x in attachedObjects _v)} && {(getpos _x) inPolygon _polygon})then{
        private _pos = getPosATL _x;
        _pos set [2, (_pos select 2) - ((_x worldToModelVisual _pos) select 2)];
        
		_x attachTo [_v, _v worldToModelVisual _pos];
        _x setDir 180;
        _x setPosATL getPosATL _x; // Syncronize direction
	};
} foreach (nearestObjects [_center, ["LandVehicle","Air","Thing","Ship"], 24]);