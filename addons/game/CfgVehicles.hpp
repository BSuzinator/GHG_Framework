class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ghg_action_antidote {
                displayName = "Use Antidote";
                condition = QUOTE(_this call FUNC(canUseAntidote));
                exceptions[] = {"notOnMap"};
                statement = QUOTE(_this call FUNC(antidoteItemEffect));
			};
		};
	};
	
};