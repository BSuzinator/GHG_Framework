class CfgVehicles
{
	//SOG Vehicle ACE logistics compatabilities
	class vn_wheeled_m54_cab_base;
	class vn_wheeled_m54_fuel_base : vn_wheeled_m54_cab_base { transportFuel = 0; };
	class vn_wheeled_m54_03_base;
	class vn_wheeled_m54_repair_base : vn_wheeled_m54_03_base { transportRepair = 0; ace_repair_canRepair = 1; };
	class vn_wheeled_m54_01_base;
	class vn_wheeled_m54_ammo_base : vn_wheeled_m54_01_base { transportAmmo = 0; ace_rearm_defaultSupply = 1000; };
	class vn_wheeled_z157_base;
	class vn_wheeled_z157_fuel_base : vn_wheeled_z157_base { transportFuel = 0; };
	class vn_wheeled_z157_ammo_base : vn_wheeled_z157_base { transportAmmo = 0;ace_rearm_defaultSupply = 1000; };
	class vn_wheeled_z157_repair_base : vn_wheeled_z157_base { transportRepair = 0;ace_repair_canRepair = 1; };
	
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
	
	// M113 has a gas tank of aprox 360 liters
    class APC_Tracked_01_base_F;
    class vn_armor_m113_base : APC_Tracked_01_base_F {
        ace_cargo_space = 6;
        ace_refuel_fuelCapacity = 360;
    };
	
	
	// M113 Dual M1919 should have 500rnd belts, not 250
    class vn_armor_m113_01_base;
    class vn_armor_m113_acav_m2_base : vn_armor_m113_01_base
    {
        class Turrets
        {
            class mg1_turret;
        };
    };
    class vn_armor_m113_acav_m1919_base : vn_armor_m113_acav_m2_base
    {
        class Turrets : Turrets
        {
            class mg1_turret : mg1_turret
            {
                magazines[] = {
                    "vn_m1919_v_500_mag",
                    "vn_m1919_v_500_mag",
                    "vn_m1919_v_500_mag",
                    "vn_m1919_v_500_mag"
                };
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
	
	class Thing;
    class ghg_anesthetic_dart : Thing
    {
        scope=1;
        model = "x\ghg\addons\compat_sog\models\dart\dart.p3d";
        
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
    };
};