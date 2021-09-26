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
            requiredAddons[] = {};
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

#include "CfgEventhandlers.hpp"