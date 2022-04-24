// Must be first!
#include "\x\cba\addons\main\script_macros_common.hpp"

#undef PREP
#undef PREPMAIN

#include "\x\ghg\addons\main\script_cache.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #define PREP(fncName) FUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
    #define PREPMAIN(fncName) FUNCMAIN(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
    
    // Use this for dev builds since server info is only guaranteed to be present for production builds
    #include "\x\ghg\addons\main\server_information_placeholder.hpp"
#else
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call SLX_XEH_COMPILE_NEW
    #define PREPMAIN(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNCMAIN(fncName)] call SLX_XEH_COMPILE_NEW
    
    #include "\x\ghg\addons\main\server_information.hpp"
#endif