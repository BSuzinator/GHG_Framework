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
    
	class Air;
	class Helicopter : Air {
		class ACE_SelfActions;
		class ACE_SelfActions : ACE_SelfActions {
			class GHG_rappelCutRopesAction {
				condition = QUOTE(_this call FUNC(rappelCommandCondition));
				statement = QUOTE(_this call FUNC(rappelCutRopes));
				displayName = "Cut Rappel Ropes";
			};
			class GHG_rappelSequencerBeginRoot {
				condition = QUOTE(_this call FUNC(rappelCommandCondition));
				statement = "";
				displayName = "Begin Rappel Sequence";
				
				class GHG_rappelSequencerBegin_1 {
					condition = "true";
					statement = "[_target, _player, [1]] spawn ghg_misc_fnc_rappelSequencer";
					displayName = "1";
				};
				
				class GHG_rappelSequencerBegin_2 {
					condition = "true";
					statement = "[_target, _player, [2]] spawn ghg_misc_fnc_rappelSequencer";
					displayName = "2";
				};
				
				class GHG_rappelSequencerBegin_3 {
					condition = "true";
					statement = "[_target, _player, [3]] spawn ghg_misc_fnc_rappelSequencer";
					displayName = "3";
				};
				
				class GHG_rappelSequencerBegin_4 {
					condition = "true";
					statement = "[_target, _player, [4]] spawn ghg_misc_fnc_rappelSequencer";
					displayName = "4";
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
	class NonStrategic;
	class Land_TransferSwitch_01_base_F : NonStrategic {
		class Attributes;
	};
	class GHG_TransferSwitch_F : Land_TransferSwitch_01_base_F {
		displayName = "GHG Blackout Switch";
		author = "GHG Team";
		editorCategory="GHG_Cat_Main";
		editorSubcategory="GHG_SubCat_Other";
		scope = 2;
		class ACE_Actions {
			class ACE_MainActions {
				position = "[0,0,0]";
				distance = 4.0;
				condition = "true";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				selection = "";
				exceptions[] = {"isNotSwimming"};
				class GHG_Blackout_Enable {
					displayName = "Switch On";
					position = "[0,0,0]";
					distance = 4.0;
					icon = "\a3\modules_f_curator\data\portraitlightning_ca.paa";
					condition = QUOTE(_this call FUNC(blackoutCondition));
					statement = QUOTE(_this call FUNC(blackout));
					exceptions[] = {"isNotSwimming"};
				};
				
				class GHG_Blackout_Disable {
					displayName = "Switch Off";
					position = "[0,0,0]";
					distance = 4.0;
					icon = "\a3\modules_f_curator\data\portraitlightning_ca.paa";
					condition = QUOTE(!(_this call FUNC(blackoutCondition)));
					statement = QUOTE(_this call FUNC(blackout));
					exceptions[] = {"isNotSwimming"};
				};
			};
        };
		class Attributes : Attributes {
			class GHG_Blackout_Radius {
				displayName = "Blackout Radius";
				tooltop = "Radius in meters to disable all lights";
				property = "GHG_Blackout_AttributeID";
				control = "EditShort";
				expression = "_this setVariable ['%s',_value, true];";
				defaultValue = "3000";
				validate = "number";
				typeName = "NUMBER";
				condition = "1";
			};
		};			
	
	
	};
	
};