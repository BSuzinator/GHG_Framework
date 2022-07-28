class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ghg_action_antidote {
                displayName = "Use Antidote";
                condition = QFUNC(canUseAntidote);
                exceptions[] = {"notOnMap"};
                statement = QFUNC(antidoteItemEffect);
			};
		};
	};
	
};