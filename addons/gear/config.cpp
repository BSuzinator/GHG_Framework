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
        requiredAddons[] = { "ghg_main" };
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] =  { "ghg_servicePoint_air", "ghg_servicePoint_air_psp", "ghg_servicePoint_air_invis", "ghg_servicePoint_land", "ghg_servicePoint_land_invis", "GHG_Arsenal" };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 0;
    };
};

#include "CfgAmmo.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGHG.hpp"


