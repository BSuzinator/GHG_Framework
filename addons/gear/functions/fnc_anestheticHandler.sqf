#include "script_component.hpp"
/*======================================
	ghg_gear_fnc_anestheticHandler
	Called when a unit recieves damage
======================================*/
{
    _x params ["_unit", "_shooter", "_projectile", "_hitPos", "_velocity", "_selections", "_ammoData", "_vector", "_radius", "_surfaceType", "_isDirect"];
    _ammoData params ["_hitValue", "_hitValueInd", "_hitRangeInd", "_expDamage", "_ammoClass"];
    
    if ( (!_isDirect) || { getText( configFile >> "CfgAmmo" >> _ammoClass >> "ACE_damageType" ) isNotEqualTo "anesthetic" } ) then {continue};

    private _memLODInd = -1;
    private _hitLODInd = -1;
    {
        _x params ["_lodIndex", "_lodName", "_lodRes", "_countNamedSelections" ];
        if ( _lodName == "memory"    ) then { _memLODInd = _lodIndex };
        if ( _lodName == "hitpoints" ) then { _hitLODInd = _lodIndex };
    } forEach allLODs _unit;
    if ( _memLODInd < 0 || _hitLODInd < 0 ) then {continue};

    private _hitPosModel = _unit worldToModel ASLtoAGL _hitPos;
    
    // Find closest selection
    private _selName = "";
    private _selOff = [];
    
    /*
    {
        private _selPos = selectionPosition [_unit, _x, _memLODInd, false, "AveragePoint" ];
        if ( (vectorMagnitude _selPos) == 0 ) then {continue}; // No such selection
        
        private _diffModel = _hitPosModel vectorDiff _selPos;
        
        // First iteration
        if ( (_selName == "") || {(vectorMagnitude _diffModel) < (vectorMagnitude _selOff)} ) then {
            _selName = _x;
            _selOff = _diffModel;
        };
    } forEach _selections;
    */
    
    //if ( _selName == "" ) then { // Fallback
    {
        private _selPos = selectionPosition [_unit, _x, _memLODInd, false, "FirstPoint" ];
        //if ( (vectorMagnitude _selPos) == 0 ) then {continue}; // No such selection
        
        private _diffModel = _hitPosModel vectorDiff _selPos;
        
        if ( (_selName == "") || {(vectorMagnitude _diffModel) < (vectorMagnitude _selOff)} ) then {
            _selName = _x;
            _selOff = _diffModel;
        };
    } forEach [
        "rightfoot", "leftfoot",
        "spine3",
        //"head",
        "neck",
        "pelvis",
        "leftshoulder", "rightshoulder",
        "leftforearm", "rightforearm",
        "righthand", "lefthand",
        "leftupleg","leftleg","rightupleg","rightleg"
    ];
    //};
    
    if ( _selName != "" ) then {
        private _dart = createSimpleObject [ "ghg_anesthetic_dart", _hitPos ];
        _dart attachTo [_unit, _selOff, _selName, true];
        
        //private _errOff = _unit worldToModel ASLtoAGL getPosASL _dart;
        //detach _dart;
        
        //_dart attachTo [_unit, _selOff vectorAdd _errOff, _selName, true];
        
        //private _hitPartPos = selectionPosition [_unit, _selections # 0, _hitLODInd, false, "FirstPoint"];
        //private _vecDir = if ( ((_hitPosModel vectorFromTo _hitPartPos) vectorCos _vector) >= 0 ) then {1} else {-1};
        private _vecDir = -1;
        
        _dart setVectorUp [_vector # 0, _vecDir * (_vector # 2), _vector # 1]; // Dart is aligned to the +Y, but the up-vector is normally +Z
        _dart setPosATL getPosATL _dart;
    };
} forEach _this;