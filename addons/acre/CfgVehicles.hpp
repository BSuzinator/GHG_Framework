#define CAR_F_RACK displayName = "Console";\
    shortName = "Con";      \
    componentName = "ACRE_VRC111";\
    allowedPositions[] = {"inside"};\
    disabledPositions[] = {};\
    defaultComponents[] = {};\
    mountedRadio = "ACRE_PRC148";\
    isRadioRemovable = 0;\
    intercom[] = {};

class CfgVehicles
{
    class LandVehicle;
	class Car_F;
	class Car : LandVehicle {
		class AcreRacks {
            class Rack_0 {CAR_F_RACK};
        };
	};
	class MRAP_01_base_F : Car_F {
		class AcreRacks {
            class Rack_0 {CAR_F_RACK};
			delete Rack_1;
			delete Rack_2;
        };
	};
	class MRAP_02_base_F : Car_F {
		class AcreRacks {
            class Rack_0 {CAR_F_RACK};
			delete Rack_1;
			delete Rack_2;
        };
	};
	class MRAP_03_base_F : Car_F {
		class AcreRacks {
            class Rack_0 {CAR_F_RACK};
			delete Rack_1;
			delete Rack_2;
        };
	};
    
    #include "sog\sog.hpp"
};