class CfgVehicles {
	class LandVehicle;
	class Car_F;
	class Car : LandVehicle {
		class AcreRacks {
            class Rack_0 {
                displayName = "Console";      // Name displayed in the interaction menu
                shortName = "Con.";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC111";        // Rack type (able to mount a PRC117F)
                allowedPositions[] = {"inside"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC148";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
        };
	};
	class MRAP_01_base_F : Car_F {
		class AcreRacks {
            class Rack_0 {
                displayName = "Console";      // Name displayed in the interaction menu
                shortName = "Con.";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC111";        // Rack type (able to mount a PRC117F)
                allowedPositions[] = {"inside"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC148";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
			delete Rack_1;
			delete Rack_2;
        };
	};
	class MRAP_02_base_F : Car_F {
		class AcreRacks {
            class Rack_0 {
                displayName = "Console";      // Name displayed in the interaction menu
                shortName = "Con.";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC111";        // Rack type (able to mount a PRC117F)
                allowedPositions[] = {"inside"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC148";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
			delete Rack_1;
			delete Rack_2;
        };
	};
	class MRAP_03_base_F : Car_F {
		class AcreRacks {
            class Rack_0 {
                displayName = "Console";      // Name displayed in the interaction menu
                shortName = "Con.";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC111";        // Rack type (able to mount a PRC117F)
                allowedPositions[] = {"inside"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC148";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
			delete Rack_1;
			delete Rack_2;
        };
	};
	class vn_wheeled_m54_cab_base;
	class vn_wheeled_m54_fuel_base : vn_wheeled_m54_cab_base {
		transportFuel = 0;
	};
	class vn_wheeled_m54_03_base;
	class vn_wheeled_m54_repair_base : vn_wheeled_m54_03_base {
		transportRepair = 0;
		ace_repair_canRepair = 1;
	};
	class vn_wheeled_m54_01_base;
	class vn_wheeled_m54_ammo_base : vn_wheeled_m54_01_base {
		transportAmmo = 0;
		ace_rearm_defaultSupply = 1000;
	};
	class vn_object_b_base_02;
	class vn_b_prop_vrc12 : vn_object_b_base_02 {
		class AcreRacks {
            class Rack_0 {
                displayName = "Console";      // Name displayed in the interaction menu
                shortName = "Con.";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC64";        // Rack type (able to mount a PRC117F)
                allowedPositions[] = {"external"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC77";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
		};
	};	
};
