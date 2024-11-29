#include "script_component.hpp"

class CfgPatches {
    class ADDON {
		// Meta information for editor
		name = COMPONENT_NAME;
		author = "GHG Team";
		authors[] = {"QuantX"};
		url = "https://ghg.suznetworks.com/";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = REQUIRED_VERSION; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = { "cba_main", "ace_common" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"ghg_Flag_GHG","ghg_Banner_GHG"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 0;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@ghg";
        name = "Ghost Hawk Gaming";
        picture = "ghg\main\ui\logo.paa";
        actionName = "Website";
        hideName = 0;
        hidePicture = 0;
        action = "https://ghg.suznetworks.com/";
        description = "Ghost Hawk Gaming Mission Framework";
    };
};

class CfgAddons {
	class PreloadAddons {
		class PREFIX {
			list[] = {
				"ghg_main",
				"ghg_gear",
				"ghg_factory",
				"ghg_medical",
				"ghg_specweap",
				"ghg_markers",
				"ghg_misc"
			};
		};
	};
};

class CfgFactionClasses {
    class b_ghg {
        displayName = "Ghost Hawk Gaming";
        flag = "\x\ghg\addons\main\ui\logo.paa";
        icon = "\x\ghg\addons\main\ui\logo.paa";
        priority = 1;
        side = 1;
    };
    class o_ghg : b_ghg {
        side = 0;
    };
    class i_ghg : b_ghg {
        side = 2;
    };
};

delete enableDebugConsole;
enableDebugConsole[] = { "76561198080019809" };

#include "CfgEden.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgGHG.hpp"
#include "CfgDebriefing.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"