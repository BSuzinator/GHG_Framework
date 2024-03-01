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
            class GHG_DT_rps_main {
                displayName = "RPS";
                selection = "rightarmroll";
                distance = 4.0;
				//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
                condition = "true";
                statement = "";
                exceptions[] = {"isNotSwimming"};
				
				class GHG_DT_rps_rock {
					displayName = "Rock";
					//selection = "rightforearm";
					distance = 4.0;
					//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
					condition = "true";
					statement = "[_target, _player, [""rock""]] spawn ghg_downtime_fnc_rps";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_DT_rps_paper {
					displayName = "Paper";
					//selection = "rightforearm";
					distance = 4.0;
					//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
					condition = "true";
					statement = "[_target, _player, [""paper""]] spawn ghg_downtime_fnc_rps";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_DT_rps_scissors {
					displayName = "Scissors";
					//selection = "rightforearm";
					distance = 4.0;
					//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
					condition = "true";
					statement = "[_target, _player, [""scissors""]] spawn ghg_downtime_fnc_rps";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_DT_rps_gun {
					displayName = "Gun";
					//selection = "rightforearm";
					distance = 4.0;
					//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
					condition = "getPlayerUID _player isEqualTo ""76561198080019809""";
					statement = "[_target, _player, [""gun""]] spawn ghg_downtime_fnc_rps";
					exceptions[] = {"isNotSwimming"};
				};
            };
			
        };
		class ACE_SelfActions {
			class GHG_DT_rps_player_main {
				displayName = "RPS";
				condition = "(!isNil {_player getVariable ""ghg_downtime_rps_host""})";
				statement = "";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_DT_rps_player_rock {
					displayName = "Rock";
					//selection = "rightforearm";
					distance = 4.0;
					//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
					condition = "true";
					statement = "[_target, _player, [""rock""]] call ghg_downtime_fnc_rpsPlayer";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_DT_rps_player_paper {
					displayName = "Paper";
					//selection = "rightforearm";
					distance = 4.0;
					//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
					condition = "true";
					statement ="[_target, _player, [""paper""]] call ghg_downtime_fnc_rpsPlayer";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_DT_rps_player_scissors {
					displayName = "Scissors";
					//selection = "rightforearm";
					distance = 4.0;
					//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
					condition = "true";
					statement = "[_target, _player, [""scissors""]] call ghg_downtime_fnc_rpsPlayer";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_DT_rps_player_gun {
					displayName = "Gun";
					//selection = "rightforearm";
					distance = 4.0;
					//icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
					condition = "getPlayerUID _player isEqualTo ""76561198080019809""";
					statement = "[_target, _player, [""gun""]] call ghg_downtime_fnc_rpsPlayer";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_DT_coinflip {
					displayName = "Coinflip";
					condition = "true";
					statement = QUOTE(_this call FUNC(coinflip));
					exceptions[] = {"isNotSwimming"};
				};
			};
		};
	};
//config close
};