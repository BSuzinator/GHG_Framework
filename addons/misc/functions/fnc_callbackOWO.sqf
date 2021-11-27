#include "script_component.hpp"
/*======================================
    Oh God, what have I done!
	Author: QuantX
======================================*/

params ["_args", "_sqlResult", "_errorMessage" ];

if ( _errorMessage != "" ) exitWith {
    systemChat ("GHG interact misc 3 error: " + _errorMessage);
};

_sqlResult params ["_owoCount"];

if ( (count _owoCount > 0) && { (_owoCount # 0) >= 100 } ) then
{
    GVAR(canOWO) = true;
}