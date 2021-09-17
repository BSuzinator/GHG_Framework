// Must be first!
#include "\x\cba\addons\main\script_macros_common.hpp"

#undef PREP
#undef PREPMAIN

#ifdef DISABLE_COMPILE_CACHE
    #define PREP(fncName) FUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
    #define PREPMAIN(fncName) FUNCMAIN(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call SLX_XEH_COMPILE_NEW
    #define PREPMAIN(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNCMAIN(fncName)] call SLX_XEH_COMPILE_NEW
#endif