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
        requiredAddons[] = { "ghg_main", "weapons_f_vietnam", "weapons_f_vietnam_02", "weapons_f_vietnam_03" };
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
        units[] =  { "ghg_servicePoint_air", "ghg_servicePoint_air_psp", "ghg_servicePoint_air_invis", "ghg_servicePoint_land", "ghg_servicePoint_land_invis", "GHG_Arsenal" };
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

#include "CfgAmmo.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGHG.hpp"

class ACEX_Fortify_Presets {
	
	delete big;
	delete bigGreen;
	delete medium;
	delete mediumGreen;
	delete small;
	delete smallGreen;
	
	class sandbags {
		displayName = "Sandbags";
		objects[] = {
			{"Land_Razorwire_F", 5},
			{"Land_BagFence_End_F", 5},
			{"Land_BagFence_Round_F", 20},
			{"Land_BagFence_Short_F", 10},
			{"Land_BagFence_Corner_F", 10},
			{"Land_BagFence_Long_F", 20},
			{"Land_Plank_01_4m_F", 10},
			{"Land_BagBunker_Small_F", 100},
		};
	};
	
	class hesco {
		displayName = "Hesco";
		objects[] = {
			{"Land_Razorwire_F", 5},
			{"Land_Plank_01_4m_F", 10},
			{"Land_Plank_01_8m_F", 20},
			{"Land_HBarrier_1_F", 25},
			{"Land_HBarrier_3_F", 75},
			{"Land_HBarrierWall_corner_F", 400},
			{"Land_HBarrierWall4_F", 300},
			{"Land_HBarrier_Big_F", 400},
			{"Land_HBarrierTower_F", 1200},
			{"Land_BlockConcrete_F", 100}
		};
	};
};
