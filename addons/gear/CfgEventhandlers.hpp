class Extended_PreInit_EventHandlers {
    class ADDON {
        // This will be executed once in 3DEN, main menu and before briefing has started for every mission
        init = QUOTE( call COMPILE_FILE(XEH_preInit) );
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        // This will be executed once for each mission, once the mission has started
        init = QUOTE( call COMPILE_FILE(XEH_postInit) );
    };
};

class Extended_PreStart_EventHandlers {
    class ADDON {
        // This will be executed once before entering the main menu.
        init = QUOTE( call COMPILE_FILE(XEH_preStart) );
    };
};

class Extended_HandleDamage_EventHandlers {
    class Man {
        class GHG_vn_ace_burn_compat {
            HandleDamage = "_this call ghg_gear_fnc_vnAceBurnCompat;";
        };
    };
};