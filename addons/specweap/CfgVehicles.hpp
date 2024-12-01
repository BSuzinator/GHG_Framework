class CfgVehicles
{
    class Thing;
    class ghg_anesthetic_dart : Thing
    {
        scope=1;
        model = "x\ghg\addons\specweap\models\dart\dart.p3d";
        
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
    };
    
    // Use our drop script
    class Plane_Base_F;
    class RHS_C130J_Base: Plane_Base_F
	{
        rhs_paraPhase = 0.65;
        
        class UserActions
		{
            class OpenRamp;
            class VehicleParadrop: OpenRamp
			{
				statement=QUOTE([this] spawn FUNC(c130DropPlane));
                condition=QUOTE([this] call  FUNC(c130CanDrop  ));
			};
        };
    };
    

    
    
	
	//Fix/Boost Defuse Radius
	class Items_base_F;
	class ACE_DefuseObject : Items_base_F {
		class ACE_Actions : ACE_Actions {
			class ACE_Defuse : ACE_Defuse {
				distance = 2;
			};
		};
	};
	class ACE_DefuseObject_Large: ACE_DefuseObject {
        class ACE_Actions: ACE_Actions {
            class ACE_Defuse: ACE_Defuse {
                distance = 3;
            };
        };
    };
	
};