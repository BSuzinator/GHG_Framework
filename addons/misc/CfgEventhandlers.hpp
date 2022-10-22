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

class Extended_Killed_EventHandlers {
    class AllVehicles {
        class GHG_auto_eject_eh {
            Killed = "[_this select 0] call ghg_misc_fnc_ejectOnDeath;";
			exclude = "Man";
        };
    };
};

class Extended_InitPost_EventHandlers {
	
	class Tank {
		class tankIsNowBunker { init = "(_this select 0) allowCrewInImmobile true;"; };
	};

};