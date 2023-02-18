class CfgVehicles {
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
	
	class House_F;
	class rhs_pontoon_static_base : House_F {
		//Static Segment Base Class
		
	};
	
	class rhs_pontoon_static : rhs_pontoon_static_base {
		//Static Main Bridge Segment
		class ACE_Actions;
		class ACE_Actions : ACE_Actions {
            class GHG_PontoonUnlock {
                displayName = "Unlock Pontoon";
                distance = 7;
                position = "[0,0,0.5]";
                condition = "true";
                statement = QUOTE(_this call FUNC(pontoonUnlock));
                exceptions[] = {"isNotSwimming"};
            };
        };
	};
	
	class rhs_pontoon_static_end_base : rhs_pontoon_static_base {
		//Static Bridge End Point
		ace_cargo_size = 6;
		ace_cargo_canLoad = 1;
		ace_cargo_noRename = 1;
		
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,7,0};
		ace_dragging_carryDirection = 180;
		class ACE_Actions;
		class ACE_Actions : ACE_Actions {
            class GHG_PrepPontoonEndPoint {
                displayName = "Prep Endpoint";
                distance = 7;
                position = "[0,0,0.5]";
                condition = "true";
                statement = QUOTE(_this call FUNC(pontoonPrep));
                exceptions[] = {"isNotSwimming"};
            };
        };
	};
	class Ship;
	class Ship_F : Ship {
		class ACE_Actions {
			class ACE_MainActions {};
		};
		class ACE_SelfActions;
	};
	class rhs_bmk_t_base : Ship_F {
		ace_interaction_canPush = 1;
		class ACE_SelfActions : ACE_SelfActions {
			class GHG_PontoonTether {
				displayName = "Tether Nearest Pontoon";
				//distance = 7;
				//position = "[0,0,0]";
				icon = "\a3\ui_f\data\igui\cfg\vehicletoggles\slingloadropeiconon_ca.paa";
				condition = QUOTE(_this call FUNC(pontoonTetherCondition));
				statement = QUOTE(_this call FUNC(pontoonTether));
				exceptions[] = {"isNotSwimming"};
			};
			class GHG_PontoonChain {
				displayName = "Chain Nearest Pontoon";
				//distance = 7;
				//position = "[0,0,0]";
				icon = "\a3\ui_f\data\igui\cfg\actions\loadvehicle_ca.paa";
				condition = QUOTE(_this call FUNC(pontoonChainCondition));
				statement = QUOTE(_this call FUNC(pontoonChain));
				exceptions[] = {"isNotSwimming"};
			};
			class GHG_PontoonUnchain {
				displayName = "Unchain Nearest Pontoon";
				//distance = 7;
				//position = "[0,0,0]";
				icon = "\a3\ui_f\data\igui\cfg\actions\unloadvehicle_ca.paa";
				condition = QUOTE(_this call FUNC(pontoonUnchainCondition));
				statement = QUOTE(_this call FUNC(pontoonUnchain));
				exceptions[] = {"isNotSwimming"};
			};
		};
	};
	
	//["rhs_kraz255b1_flatbed_base","rhs_kraz255b1_base","rhs_kraz255_base","O_Truck_02_covered_F","Truck_02_base_F","Truck_F","Car_F","Car","LandVehicle","Land","AllVehicles","All"]
	class LandVehicle;
	class Car : LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {};
		};
	};
	class Car_F : Car {};
	class Truck_F : Car_F {};
	class Truck_02_base_F : Truck_F {};
	class O_Truck_02_covered_F : Truck_02_base_F {};
	class rhs_kraz255_base : O_Truck_02_covered_F {};
	class rhs_kraz255b1_base : rhs_kraz255_base {};
	class rhs_kraz255b1_flatbed_base : rhs_kraz255b1_base {};
	class rhs_kraz255b1_pmp_base : rhs_kraz255b1_flatbed_base {
		class ACE_Actions : ACE_Actions {
			class ACE_MainActions : ACE_MainActions {
				class GHG_PontoonSpawn {
					displayName = "Load Pontoon";
					//distance = 7;
					//position = "[0,0,0]";
					icon = "\a3\ui_f\data\igui\cfg\actions\loadvehicle_ca.paa";
					condition = QUOTE(_this call FUNC(pontoonSpawnCondition));
					statement = QUOTE(_this call FUNC(pontoonSpawn));
					exceptions[] = {"isNotSwimming"};
				};
			};
		};
	};
};