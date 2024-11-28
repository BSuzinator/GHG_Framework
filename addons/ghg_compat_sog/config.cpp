#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        // Meta information for editor
        name = COMPONENT_NAME;
        author = "GHG Team";
        authors[] = {"BSuz"};
        url = "https://ghg.suznetworks.com/";

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
        requiredVersion = REQUIRED_VERSION; 
        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = { "ghg_acre", "static_f_vietnam_c", "static_f_vietnam_02_c","objects_f_vietnam_c", "wheeled_f_vietnam", "boat_f_vietnam", "air_f_vietnam", "armor_f_vietnam", "armor_f_vietnam_02"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
    };
};

class CfgFunctions {
    class functions_f_vietnam {
        class vn_bomb_hit_functions {
            class bomb_hit_blu82 {
                file="\x\ghg\addons\specweap\functions\fn_blu82Hit.sqf";
            }
        };
    };
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgAmmo.hpp"