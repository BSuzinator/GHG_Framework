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
            requiredAddons[] = { "ghg_main", "A3_Ui_F", "A3_Missions_F_Oldman", "A3_Ui_F_Orange", "A3_missions_f_aow","A3_missions_f_tacops","missions_f_lxws" };
            // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
            units[] = {};
            // List of weapons (CfgWeapons classes) contained in the addon.
            weapons[] = {};
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
	delete Extraction_lxWS;
    delete Showcase_VR_lxWS;
    
    class GHG_Connect
	{
		text = "Ghost Hawk Gaming";
		picture = "\x\ghg\addons\main\ui\logo.paa";
		action = QUOTE(connectToServer MAIN_SERVER_ARRAY);
		actionText = "Connect to the Ghost Hawk Gaming server";
		condition = "true";
	};
};

// Have the SOG Vehicle Jukebox call the BIS display initializer so we can hook into it
class vn_displayvehiclemusic {
    onLoad =   "uinamespace setVariable ['vn_displayvehiclemusic', (_this#0)];   ['onload'] call VN_fnc_music;   ['onLoad',   _this, 'DisplayVehicleMusic', 'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
    onUnload = "uinamespace setVariable ['vn_displayvehiclemusic', displayNull]; ['onunload'] call VN_fnc_music; ['onUnload', _this, 'DisplayVehicleMusic', 'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
};

#include "CfgEventhandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "ui\ui.hpp"