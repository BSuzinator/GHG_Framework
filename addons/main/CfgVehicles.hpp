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
	
	class vn_object_b_base_02;
	class vn_b_prop_vrc12 : vn_object_b_base_02 {
		class AcreRacks {
            class Rack_0 {
                displayName = "Console";      // Name displayed in the interaction menu
                shortName = "Con.";                  // Short name displayed on the HUD. Maximum of 5 characters
                componentName = "ACRE_VRC64";        // Rack type
                allowedPositions[] = {"external"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC77";        // Predefined mounted radio
                isRadioRemovable = 0;                 // Radio cannot be removed
                intercom[] = {"intercom_1"};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
		};
	};
	//SOG Vehicle ACE logistics compatabilities
	class vn_wheeled_m54_cab_base;
	class vn_wheeled_m54_fuel_base : vn_wheeled_m54_cab_base { transportFuel = 0; };
	class vn_wheeled_m54_03_base;
	class vn_wheeled_m54_repair_base : vn_wheeled_m54_03_base { transportRepair = 0; ace_repair_canRepair = 1; };
	class vn_wheeled_m54_01_base;
	class vn_wheeled_m54_ammo_base : vn_wheeled_m54_01_base { transportAmmo = 0; ace_rearm_defaultSupply = 1000; };
	class vn_wheeled_z157_base;
	class vn_wheeled_z157_fuel_base : vn_wheeled_z157_base { transportFuel = 0; };
	class vn_wheeled_z157_ammo_base : vn_wheeled_z157_base { transportAmmo = 0;ace_rearm_defaultSupply = 1000; };
	class vn_wheeled_z157_repair_base : vn_wheeled_z157_base { transportRepair = 0;ace_repair_canRepair = 1; };
	
	//3CB Vehicle ACE logistics compatabilities
	class UK3CB_V3S_Base;
	class UK3CB_V3S_Refuel : UK3CB_V3S_Base { transportFuel = 0; };
	class UK3CB_Ural_Fuel_Base;
	class UK3CB_Ural_Fuel : UK3CB_Ural_Fuel_Base { transportFuel = 0; };
	class UK3CB_Kamaz_Fuel_Base;
	class UK3CB_Kamaz_Fuel : UK3CB_Kamaz_Fuel_Base { transportFuel = 0; };
	class UK3CB_V3S_Closed;
	class UK3CB_V3S_Reammo : UK3CB_V3S_Closed { transportAmmo = 0; };
	class UK3CB_Ural_Ammo_Base;
	class UK3CB_Ural_Ammo : UK3CB_Ural_Ammo_Base { transportAmmo = 0; };
	class UK3CB_Ural_Repair_Base;
	class UK3CB_Ural_Repair : UK3CB_Ural_Repair_Base { transportRepair = 0; };
	class UK3CB_V3S_Base;
	class UK3CB_V3S_Repair : UK3CB_V3S_Base { transportRepair = 0; };
	class UK3CB_MTVR_Base;
	class UK3CB_MTVR_Repair : UK3CB_MTVR_Base {	transportRepair = 0; };
	class UK3CB_AAF_B_MTVR_Refuel : UK3CB_MTVR_Base { transportFuel = 0 };
	class UK3CB_MTVR_Reammo : UK3CB_MTVR_Base { transportAmmo = 0; };
	class UK3CB_M939_Base;
	class UK3CB_M939_Refuel : UK3CB_M939_Base { transportFuel = 0 };
	class UK3CB_M939_Reammo : UK3CB_M939_Base { transportAmmo = 0 };
	class UK3CB_M939_Repair : UK3CB_M939_Base { transportRepair = 0 };
	class UK3CB_BAF_MAN_HX60_Base;
	class UK3CB_BAF_MAN_HX60_Repair_Base : UK3CB_BAF_MAN_HX60_Base { transportRepair = 0 };
	class UK3CB_BAF_MAN_HX60_Fuel_Base : UK3CB_BAF_MAN_HX60_Base { transportFuel = 0 };
};
