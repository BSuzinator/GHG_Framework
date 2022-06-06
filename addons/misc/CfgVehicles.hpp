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
        scope=2;
        author = "GHG Team";
		displayName = "Spike Strip (Deployed)";
        class EventHandlers
        {
            init=QUOTE(_this call FUNC(spikeStripInit));
			EpeContactStart=QUOTE(_this call FUNC(spikeStripEH));
        };
		
		class ACE_Actions {
            class ACE_MainActions {
				class GHG_PackSpikeStrip {
					displayName = "Pack Spike Strip";
					distance = 7;
					position = "[0,0,1]";
					condition = 1;
					statement = QUOTE(_this call FUNC(spikeStripPack));
					exceptions[] = {"isNotSwimming"};
				};
			};
        };
		
    };
	
};