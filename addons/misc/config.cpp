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
		requiredAddons[] = { "ghg_main", "A3_Ui_F", "A3_Missions_F_Oldman", "A3_Ui_F_Orange", "A3_missions_f_aow","A3_missions_f_tacops" };
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"ghg_spikestrip"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 0;
    };
};

class RscDisplayMain: RscStandardDisplay
{
	delete Spotlight;
};

class CfgMainMenuSpotlight
{
    delete AoW_Showcase_AoW;
    delete AoW_Showcase_Future;
    delete ApexProtocol;
    delete Bootcamp;
    delete Contact_Campaign;
    delete EastWind;
    delete OldMan;
    delete Orange_CampaignGerman;
    delete Orange_Campaign;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete SP_FD14;
    delete Tacops_Campaign_03;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_01;
    delete Tanks_Campaign_01;
	
    class GHG_Connect
	{
		text = "Ghost Hawk Gaming";
		picture = "\x\ghg\addons\main\ui\logo.paa";
		action = QUOTE(connectToServer MAIN_SERVER_ARRAY);
		actionText = "Connect to the Ghost Hawk Gaming server";
		condition = "true";
	};
};



class CfgCommands {
    allowedHTMLLoadURIs[] += {
        "https://ghg.suznetworks.com/*"
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "BettIR_Compat.hpp"
#include "ui\ui.hpp"