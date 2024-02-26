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
            requiredAddons[] = { "ghg_main", "ghg_gear", "ghg_factory" };
            // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
            units[] = { "GHG_Medical_Tent_Sand", "GHG_Medical_Tent_Olive" };
            // List of weapons (CfgWeapons classes) contained in the addon.
            weapons[] = {};
    };
};
#include "CfgEventhandlers.hpp"
#include "CfgVehicles.hpp"
//#include "ACE_Medical_Injuries.hpp"
class ace_medical_facilities {
	GHG[] = { "GHG_Medical_Tent_Sand", "GHG_Medical_Tent_Olive" }
};