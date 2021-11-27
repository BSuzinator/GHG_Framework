class CfgVehicles {
	class Land;
	class Car_F;
	class LandVehicle : Land {
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
};
