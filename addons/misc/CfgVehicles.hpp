class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class GHG_OWO {
                displayName = "OwO";
                selection = "rightuplegroll";
                distance = 2.0;
                condition = QUOTE(_this call FUNC(canOWO));
                statement = QUOTE(_this call FUNC(doOWO));
                exceptions[] = {"isNotSwimming"};
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
};