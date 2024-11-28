#define SOG_JUKEBOX class music_player { \
    condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }"; \
    displayName = "Radio Jukebox"; \
    onlyForPlayer = 0; \
    position = "zamerny"; \
    priority = -99; \
    radius = 3; \
    showWindow = 0; \
    statement = "['open'] call vn_fnc_music"; \
};

class Man;
class CAManBase: Man {
    class ACE_SelfActions {
        class ACRE_Interact {
            class Jukebox {
                displayName = "Jukebox";
                condition = QUOTE(_this call FUNC(canUseJukebox));
                statement = "closeDialog 2; createDialog 'vn_displayvehiclemusic';";
            };
        };
    };
};

class vn_object_b_base_02;
class vn_b_prop_vrc12 : vn_object_b_base_02 {
    class AcreRacks {
        class Rack_0 {
            displayName = "Radio";             // Name displayed in the interaction menu
            shortName = "Radio";               // Short name displayed on the HUD. Maximum of 5 characters
            componentName = "ACRE_VRC64";      // Rack type
            allowedPositions[] = {"external"}; // Who can configure the radio and open the radio GUI. Same wildcards as the intercom. It also allows transmitting/receiving
            disabledPositions[] = {};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";       // Predefined mounted radio
            isRadioRemovable = 0;              // Radio cannot be removed
            intercom[] = {"none"};             // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
        };
    };
};

#include "boats.hpp"
#include "air.hpp"
#include "armor.hpp"