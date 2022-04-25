#include "script_component.hpp"
/*======================================
	Causes added songs to appear inside of the SOG Jukebox
	Author: QuantX
======================================*/
disableSerialization;
params ["_disp", "_class"];
if ( _class isNotEqualTo "DisplayVehicleMusic" ) exitWith {};

if (isNil QGVARMAIN(jukebox)) then {
    GVARMAIN(jukebox) = [];
    private _ghgMusic = configFile >> "CfgGHG" >> "Jukebox";
    private _cfgSounds = configFile >> "CfgSounds";
    if (isClass _ghgMusic) then {
        {
            private _trackClass = _ghgMusic >> _x;
            if (isText _trackClass) then {
                private _song = _cfgSounds >> _trackClass;
                if (isClass _song) then {
                    private _name = getText (_song >> "name");
                    private _duration = getNumber (_song >> "duration");
                    GVARMAIN(jukebox) pushBack [_trackClass, _name, _duration];
                } else {
                    diag_log format ["Unknown track %1", _x];
                };
            };
        } foreach configProperties [_ghgMusic, "true", true];
    };
};

private _list = _disp displayCtrl 1000;
{
    _x params ["_class", "_name", "_duration"];
    private _minutes = floor (_duration / 60);
    private _seconds = _duration % 60;
    if (_seconds < 10) then {_seconds = "0" + str _seconds};
    private _text = "%1";
    if (_duration > 0 && {_minutes > 0}) then {_text = "%2:%1";};
    private _index = _list lnbAddRow [_name, format[_text, _seconds, _minutes]];
    _list lnbSetData [[_index, 0], _class];
} foreach GVARMAIN(jukebox);