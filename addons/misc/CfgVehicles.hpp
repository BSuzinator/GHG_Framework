class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class GHG_OWO {
                displayName = "OwO";
                selection = "rightuplegroll";
                distance = 2.0;
				icon = "\a3\modules_f_curator\data\portraitanimals_ca.paa";
                condition = QUOTE(_this call FUNC(canOWO));
                statement = QUOTE(_this call FUNC(doOWO));
                exceptions[] = {"isNotSwimming"};
            };
			
        };
		class ACE_SelfActions {
			class ACE_Equipment {
				class GHG_DeploySpikeStrip {
					displayName = "Deploy Spike Strip";
					condition = """GHG_spikeStripItem"" in ([player] call CBA_fnc_uniqueUnitItems)";
					statement = QUOTE(_this spawn FUNC(spikeStripDeploy));
					exceptions[] = {"isNotSwimming","notOnMap"};
				};
			};
		};
    };
    
    class Thing;
    class Footprint_L : Thing
    {
        scope=1;
        model = "x\ghg\addons\misc\models\footprint\footprint_l.p3d";
        
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"x\ghg\addons\misc\models\footprint\footprint_ca.paa"};
        hiddenSelectionsMaterials[] = {"x\ghg\addons\misc\models\footprint\footprint.rvmat"};
    };
    
    class Footprint_R : Footprint_L
    {
        model = "x\ghg\addons\misc\models\footprint\footprint_r.p3d";
    };
	
	class Land_Razorwire_F;
	class ghg_spikestrip : Land_Razorwire_F 
	{
        scope = 2;
        author = "GHG Team";
		displayName = "Spike Strip (Deployed)";
		editorCategory="GHG_Cat_Main";
		editorSubcategory="GHG_SubCat_Other";
        class EventHandlers {
            init=QUOTE(_this call FUNC(spikeStripInit));
			EpeContactStart=QUOTE(_this call FUNC(spikeStripEH));
        };
		
		class ACE_Actions {
            class GHG_PackSpikeStrip {
                displayName = "Pack Spike Strip";
                distance = 7;
                position = "[0,0,1]";
                condition = "true";
                statement = QUOTE(_this call FUNC(spikeStripPack));
                exceptions[] = {"isNotSwimming"};
            };
        };
		
    };
	
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
	
	class Ship_F;
	class rhs_bmk_t_base : Ship_F {
		ace_interaction_canPush = 1;
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