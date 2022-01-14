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
            requiredAddons[] = { "cba_main","acre_sys_rack","acre_sys_prc77","objects_f_vietnam_c","wheeled_f_vietnam","uk3cb_baf_vehicles_MAN","uk3cb_baf_vehicles_legacy","UK3CB_Factions_Vehicles_m939","uk3cb_factions_Vehicles_mtvr","uk3cb_factions_Vehicles_ural" };
            // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
            units[] = {};
            // List of weapons (CfgWeapons classes) contained in the addon.
            weapons[] = {};
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
delete enableDebugConsole;
enableDebugConsole[] = {"76561198080019809", "76561198044516211"};
#include "CfgEventhandlers.hpp"
#include "CfgGHG.hpp"
#include "CfgDebriefing.hpp"
#include "CfgVehicles.hpp"