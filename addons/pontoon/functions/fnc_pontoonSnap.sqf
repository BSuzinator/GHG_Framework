#include "script_component.hpp"
/*======================================
   ghg_misc_fnc_pontoonSnap
	Author: BSuz
======================================*/
params["_object","_type"];

 private _nearbyObjects = nearestObjects [_object, [_type], 10]; 
_nearbyObjects = _nearbyObjects - [_object];

if(!(_nearbyObjects isEqualTo []))then 
	{ 
		private _nearestObject = _nearbyObjects # 0; 
		private _pos   = getposASL _object; 

		private _snapPoint   = []; 
		private _snapPointsParent = []; 
		for "_i" from 1 to 2 do 
		{ 
			private _snapCords = _object selectionPosition format["panel%1_snap",_i]; 
			if(_snapCords isEqualTo [0,0,0])exitWith{}; 
			_snapPointsParent pushBack (_object modelToWorldVisual _snapCords); 
			systemChat str _snapPointsParent;
		}; 
		if(!(_snapPointsParent isEqualTo []))then 
		{ 
			for "_i" from 1 to 2 do 
			{
				_snapPoint = _nearestObject modelToWorldVisual (_nearestObject selectionPosition format["panel%1_snap",_i]); 
				{ 
					  
					if(_snapPoint distance2d _x <= 2)exitWith 
					{ 
						_posModel = _object worldToModel _x; 
						   
						_dirTo  = getDir _nearestObject - 360; 
						_dirObject = getDir _object; 
						_dir  = _dirTo; 

						for "_i" from 0 to 7 do 
						{
						
						_dir = _dirTo + _i * 90; 
								if(abs(_dir - _dirObject) < 45)then 
								{ 
									_i = 10; 
								}; 
						}; 
						_object setVectorUp [0,0,-1];
						_object setDir _dir;
						_x = _object modelToWorldVisual _posModel; 

						_pos = _pos vectorDiff (_x vectorDiff _snapPoint); 
						_pos = [_pos # 0, _pos # 1, (getposASL (_nearbyObjects # 0)) # 2]; 
						systemChat format["pos found %1",_pos]; 
						_object set3DENAttribute ["position",ASLToATL _pos]; 
						_object setPosATL ASLToATL _pos; 
						_i = 10; 
					}; 
				}forEach _snapPointsParent; 
			}; 
		}; 
		systemChat format["nearby objects %1 %2 snap point %3",_nearestObject,_object distance _nearestObject,_snapPointsParent]; 
};

if (typeOf _object isEqualTo "rhs_pontoon_end_static") then {
	{
		private _pos_base = _object selectionPosition format["%1_point",_x];
		private _pos_init = _object modelToWorldVisual _pos_base;
		for "_i" from -30 to 30 step 3 do
		{
			_rotation = [[0,1.85,0],-_i,0] call BIS_fnc_rotateVector3D;
			_pos_rot = _object modelToWorldVisual (_pos_base vectorAdd _rotation); 
			_intersect = lineIntersectsSurfaces [AGLtoASL (_pos_init),AGLToASL(_pos_rot),_object];

			if((_intersect isEqualTo []))exitWith
			{
				//systemChat format["no collision found %1",_x];					
				//_object set3DENAttribute [format["rhs_pontoon_%1_rot",_x], _i+2];
				_object animateSource [format["%1_rot_source",_x],_i+2,true];
			};
		};
	} foreach ["centerLeft","centerRight","left","right"];
};
_object setOwner 2;																																								