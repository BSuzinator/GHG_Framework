class CfgVehicles {
	/*
	class ThingX;
	class rhs_pontoon_float : ThingX {
		//Floaty One
		ace_interaction_canPush = 1;
		class ACE_Actions;
		class ACE_Actions : ACE_Actions {
            class GHG_PontoonLock {
                displayName = "Lock Pontoon";
                distance = 7;
                position = "[0,0,0.5]";
                condition = "_this # 0 animationSourcePhase 'fold_source' isEqualTo 0";
                statement = QUOTE(_this call FUNC(pontoonLock));
                exceptions[] = {"isNotSwimming"};
            };
			class ACE_MainActions;
			class ACE_MainActions : ACE_MainActions {
				class GHG_PontoonPush {
					displayName = "Push";
					distance = 7;
					position = "[0,0,0]";
					condition = "true";
					statement = "[_target, _player] call ace_interaction_fnc_push;";
					exceptions[] = {};
				};
			};
        };
	};
	*/
	
	class Man;
    class CAManBase: Man {
        class ACE_Actions {
			class ACE_MainActions {
				class GHG_StripUnit {
					displayName = "Strip";
					condition = QUOTE(_this call FUNC(canStrip));
					statement = QUOTE(_this call FUNC(stripUnit));
					exceptions[] = {"isNotSwimming"};
				};
			};
        };
		
    };
};