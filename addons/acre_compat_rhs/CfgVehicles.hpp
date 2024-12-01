#define CAR_F_RACK displayName = "Console";\
    shortName = "Con";      \
    componentName = "ACRE_VRC111";\
    allowedPositions[] = {"inside","external"};\
    disabledPositions[] = {};\
    defaultComponents[] = {};\
    mountedRadio = "ACRE_PRC148";\
    isRadioRemovable = 0;\
    intercom[] = {};
	
#define RADIO_HUMVEE_RACK displayName = "Console";\
    shortName = "Con";      \
    componentName = "ACRE_VRC111";\
    allowedPositions[] = {"driver",{"cargo",0}};\
    disabledPositions[] = {};\
    defaultComponents[] = {};\
    mountedRadio = "ACRE_PRC148";\
    isRadioRemovable = 0;\
    intercom[] = {};

class CfgVehicles
{
	#include "rhs\SICPS.hpp"
};