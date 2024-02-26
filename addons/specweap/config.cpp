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
        requiredAddons[] = { "ghg_gear", "static_f_vietnam_c", "static_f_vietnam_02_c", "RHS_US_A2_AirImport", "functions_f_vietnam", "ace_compat_sog", "armor_f_vietnam", "armor_f_vietnam_02", "rhs_c_a2port_car", "rhs_c_heavyweapons" };
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

class CfgFunctions {
    class RHS {
        class functions {
            class cargoAttach {
                file="\x\ghg\addons\specweap\functions\fn_cargoAttach.sqf";
            };
        };
    };
    class functions_f_vietnam {
        class vn_bomb_hit_functions {
            class bomb_hit_blu82 {
                file="\x\ghg\addons\specweap\functions\fn_blu82Hit.sqf";
            }
        };
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

#include "ACE_Medical_Injuries.hpp"