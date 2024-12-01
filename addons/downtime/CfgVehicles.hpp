class CfgVehicles {
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