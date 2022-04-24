#define CAR_F_RACK displayName = "Console"; \
    shortName = "Con";       \
    componentName = "ACRE_VRC111"; \
    allowedPositions[] = {"inside"}; \
    disabledPositions[] = {}; \
    defaultComponents[] = {}; \
    mountedRadio = "ACRE_PRC148"; \
    isRadioRemovable = 0; \
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
	
	class vn_object_b_base_02;
	class vn_b_prop_vrc12 : vn_object_b_base_02 {
		class AcreRacks {
            class Rack_0 {
                displayName = "Radio";      // Name displayed in the interaction menu
                shortName = "Radio";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC64";        // Rack type
                allowedPositions[] = {"external"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC77";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
		};
	};
    
    // Intercom system for SOG Patrol Boats
    class Boat_Armed_01_base_F;
    class vn_boat_armed_base : Boat_Armed_01_base_F {
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                
                allowedPositions[] = {"crew"};
                masterPositions[] = {"commander"};
                
                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;
                
                connectedByDefault = 1;
            };
            class Intercom_2: Intercom_1 {
                displayName = "Pax Intercom";
                shortName = "Pax";
                
                allowedPositions[] = {"crew", {"cargo", "all"}};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 0;
            };
        };
    };
    class vn_boat_03_base : vn_boat_armed_base {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver","commander"};
                intercom[] = {"intercom_1"};
            };
        };
    };
    class vn_boat_05_base : vn_boat_armed_base {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver","commander"};
                intercom[] = {"intercom_1"};
            };
        };
    };
};