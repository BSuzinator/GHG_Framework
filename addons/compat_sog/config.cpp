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
        requiredAddons[] = { "ghg_acre", "static_f_vietnam_c", "static_f_vietnam_02_c","objects_f_vietnam_c", "wheeled_f_vietnam", "boat_f_vietnam", "air_f_vietnam", "armor_f_vietnam", "armor_f_vietnam_02", "weapons_f_vietnam", "weapons_f_vietnam_02", "weapons_f_vietnam_03", "functions_f_vietnam", "ui_f_vietnam", "ui_f_vietnam_c" };
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
		class vn_music_functions {
            class music_play {
                file = "\x\ghg\addons\ghg_compat_sog\functions\fn_vietnamPlayMusicOverride.sqf";
            }
        };
    };
};

// Have the SOG Vehicle Jukebox call the BIS display initializer so we can hook into it
class vn_displayvehiclemusic {
    onLoad =   "uinamespace setVariable ['vn_displayvehiclemusic', (_this#0)];   ['onload'] call VN_fnc_music;   ['onLoad',   _this, 'DisplayVehicleMusic', 'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
    onUnload = "uinamespace setVariable ['vn_displayvehiclemusic', displayNull]; ['onunload'] call VN_fnc_music; ['onUnload', _this, 'DisplayVehicleMusic', 'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMainMenuSpotlight.hpp"