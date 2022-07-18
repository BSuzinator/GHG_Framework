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
    
    class vn_howitzer_base;
    class vn_static_m101_base : vn_howitzer_base // Inheritance nonsense
    {
        class Turrets
        {
            class MainTurret;
        };
    };
    class vn_static_m101_02_base : vn_static_m101_base
    {
        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                magazines[] += {
                    "ghg_cannon_m101_mag_beehive_x8",
                    "ghg_cannon_m101_mag_beehive_x8",
                    "ghg_cannon_m101_mag_beehive_x8",
                    "ghg_cannon_m101_mag_beehive_x8"
                };
            };
        };
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
    
    
    
    // Fix an issue with picking up the non-tripod M1919A6
    class vn_static_m2_low_base;
    class vn_static_m1919a6_base: vn_static_m2_low_base {
        class ACE_CSW;
        class ACE_CSW: ACE_CSW {
            disassembleWeapon = "ace_compat_sog_m1919a6_carry";
        };
    };
};