#define CAR_F_RACK displayName = "Console";\
    shortName = "Con";      \
    componentName = "ACRE_VRC111";\
    allowedPositions[] = {"inside"};\
    disabledPositions[] = {};\
    defaultComponents[] = {};\
    mountedRadio = "ACRE_PRC148";\
    isRadioRemovable = 0;\
    intercom[] = {};

#define SOG_JUKEBOX class music_player { \
    condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }"; \
    displayName = "Radio Jukebox"; \
    onlyForPlayer = 0; \
    position = "zamerny"; \
    priority = -99; \
    radius = 3; \
    showWindow = 0; \
    statement = "['open'] call vn_fnc_music"; \
};

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
    
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACRE_Interact {
                class Jukebox {
                    displayName = "Jukebox";
                    condition = QUOTE(_this call FUNC(canUseJukebox));
                    statement = "closeDialog 2; createDialog 'vn_displayvehiclemusic';";
                };
            };
        };
    };
	
	class vn_object_b_base_02;
	class vn_b_prop_vrc12 : vn_object_b_base_02 {
		class AcreRacks {
            class Rack_0 {
                displayName = "Radio";             // Name displayed in the interaction menu
                shortName = "Radio";               // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC64";      // Rack type
                allowedPositions[] = {"external"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC77";       // Predefined mounted radio
                isRadioRemovable = 0;              // Radio cannot be removed
                intercom[] = {"none"};             // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
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
            class Intercom_2 : Intercom_1 {
                displayName = "Pax Intercom";
                shortName = "Pax";
                
                allowedPositions[] = {"crew", {"cargo", "all"}};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 0;
            };
        };
        class UserActions {
            SOG_JUKEBOX
        };
    };
    // PAVN PT Boat
    class vn_boat_03_base : vn_boat_armed_base {
        class AcreIntercoms : AcreIntercoms {};
        class UserActions : UserActions {};
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", "commander"};
                intercom[] = {"intercom_1"};
            };
        };
    };
    // MACV PT Boat
    class vn_boat_05_base : vn_boat_armed_base {
        class AcreIntercoms : AcreIntercoms {};
        class UserActions : UserActions {};
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", "commander"};
                intercom[] = {"intercom_1"};
            };
        };
    };

    // Intercom system for SOG Cobra
    class vn_helicopter_base;
    class vn_air_ah1g_01_base : vn_helicopter_base {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", "gunner"};
                intercom[] = {"intercom_1"};
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                masterPositions[] = {"driver", "gunner"};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 1;
            };
        };
    };
    // Intercom system for SOG Little Bird
    class vn_air_oh6a_base : vn_helicopter_base {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", "gunner"};
                intercom[] = {"intercom_1"};
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                masterPositions[] = {"driver", "gunner"};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 1;
            };
        };
    };
    // Intercom system for SOG Huey
    class vn_air_uh1_01_base : vn_helicopter_base {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", {"turret", [0]}};
                intercom[] = {"intercom_1"};
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                
                allowedPositions[] = {"crew"};
                masterPositions[] = {"driver", {"turret", [0]}};
                
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 1;
                
                connectedByDefault = 1;
            };
            class Intercom_2 {
                displayName = "Pax Intercom";
                shortName = "Pax";
                
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                masterPositions[] = {"gunner"};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 0;
            };
        };
    };
    // Fix jukebox for Huey
    class vn_air_uh1c_doorguns_base;
    class vn_air_uh1c_01_base : vn_air_uh1c_doorguns_base {
        class UserActions {
            SOG_JUKEBOX
        };
    };
    class vn_air_uh1c_07_base : vn_air_uh1c_doorguns_base {
        class UserActions {
            SOG_JUKEBOX
        };
    };
    // Intercom system for SOG Seahorse
    class vn_air_ch34_01_base : vn_helicopter_base {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", {"turret", [0]}};
                intercom[] = {"intercom_1"};
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                
                allowedPositions[] = {"crew"};
                masterPositions[] = {"driver", {"turret", [0]}};
                
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 1;
                
                connectedByDefault = 1;
            };
            class Intercom_2 {
                displayName = "Pax Intercom";
                shortName = "Pax";
                
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                masterPositions[] = {"gunner"};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 0;
            };
        };
    };
    // Intercom system for PAVN Helicopter
    class vn_air_mi2_base : vn_helicopter_base {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", {"turret", [0]}};
                intercom[] = {"intercom_1"};
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                
                allowedPositions[] = {"crew"};
                masterPositions[] = {"driver", {"turret", [0]}};
                
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 1;
                
                connectedByDefault = 1;
            };
            class Intercom_2 {
                displayName = "Pax Intercom";
                shortName = "Pax";
                
                allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
                masterPositions[] = {"gunner"};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 0;
            };
        };
    };
    
    // Intercom for SOG F4 Phantom
    class Plane_Base_F;
    class vn_air_f4_base : Plane_Base_F {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"driver", "gunner"};
                intercom[] = {"intercom_1"};
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                
                allowedPositions[] = {"crew"};
                masterPositions[] = {"driver", "gunner"};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 1;
            };
        };
        class UserActions {
            SOG_JUKEBOX
        };
    };
    // Intercom for SOG Bulldog Tank
    class vn_armor_m41_base;
    class vn_b_armor_m41_01_01_base : vn_armor_m41_base {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"commander"};
                intercom[] = {"intercom_1"};
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                
                allowedPositions[] = {"crew", {"ffv", "all"}};
                masterPositions[] = {"commander"};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 1;
            };
        };
        class UserActions {
            SOG_JUKEBOX
        };
    };
    class vn_b_armor_m41_01_02_base : vn_armor_m41_base {
        class AcreRacks {
            class Rack_1 {
                allowedPositions[] = {"commander"};
                intercom[] = {"intercom_1"};
            };
        };
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                
                allowedPositions[] = {"crew", {"ffv", "all"}};
                masterPositions[] = {"commander"};
                
                limitedPositions[] = {};
                numLimitedPositions = 0;
                
                connectedByDefault = 1;
            };
        };
        class UserActions {
            SOG_JUKEBOX
        };
    };
};