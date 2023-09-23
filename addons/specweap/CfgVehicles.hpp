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
	
	//Add azimuth/elevation to BM-21s
	class LandVehicle;
	class Car: LandVehicle {
		class NewTurret;
	};
	class Car_F : Car {
		class Turrets {
			class MainTurret: NewTurret {
				class ViewOptics;
			};
		};
	};
	class Truck_F: Car_F {};
	class RHS_Ural_BaseTurret: Truck_F {
		class Turrets {
			class MainTurret : NewTurret {};
		};
	};
	class RHS_BM21_MSV_01 : RHS_Ural_BaseTurret {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_D30_panoramic";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				turretInfoType="rhs_gui_optic_d30_op4";
				class OpticsIn
				{
					class OP4M_45
					{
						opticsDisplayName="OP4";
						//hitpoint="ovladac";
						//camPos="ovladac";
						//camDir="konec hlavne";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.12727299;
						minFov=0.12727299;
						maxFov=0.12727299;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_empty.p3d";
					};
				};
			};
		};
	};
	class Truck_01_base_F : Truck_F {};
	//RHS HIMARS
	//["rhsusf_himars_base","Truck_01_base_F","Truck_F","Car_F","Car","LandVehicle","Land","AllVehicles","All"]
	class rhsusf_himars_base : Truck_01_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_D30_panoramic";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				turretInfoType="rhs_gui_optic_d30_op4";
				class OpticsIn
				{
					class OP4M_45
					{
						opticsDisplayName="OP4";
						//hitpoint="ovladac";
						//camPos="ovladac";
						//camDir="konec hlavne";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.12727299;
						minFov=0.12727299;
						maxFov=0.12727299;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_empty.p3d";
					};
				};
			};
		};
	};
	/*	***NOT CURRENTLY FUNCTIONING***
	//3CBF MTVR MLRS
	//["UK3CB_B_MTVR_MLRS_AAF","UK3CB_MTVR_MLRS","UK3CB_MTVR_Base","Truck_02_base_F","Truck_F","Car_F","Car","LandVehicle","Land","AllVehicles","All"]
	class Truck_02_base_F : Truck_F {};
	class UK3CB_MTVR_Base : Truck_02_base_F {
		class Turrets {
			class MainTurret : NewTurret {};
		};
	};
	class UK3CB_MTVR_MLRS : UK3CB_MTVR_Base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_D30_panoramic";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				turretInfoType="rhs_gui_optic_d30_op4";
				class OpticsIn
				{
					class OP4M_45
					{
						opticsDisplayName="OP4";
						//hitpoint="ovladac";
						//camPos="ovladac";
						//camDir="konec hlavne";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.12727299;
						minFov=0.12727299;
						maxFov=0.12727299;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_empty.p3d";
					};
				};
			};
		};
	};
	
	//3CBF T810 MLRS
	//["UK3CB_B_T810_MLRS_LDF","UK3CB_T810_MLRS","UK3CB_T810","UK3CB_T810_Base","Truck_01_base_F","Truck_F","Car_F","Car","LandVehicle","Land","AllVehicles","All"]
	class UK3CB_T810_Base : Truck_01_base_F {
		class Turrets {
			class MainTurret : NewTurret {};
		};
	};
	class UK3CB_T810 : UK3CB_T810_Base {};
	class UK3CB_T810_MLRS : UK3CB_T810 {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_D30_panoramic";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				turretInfoType="rhs_gui_optic_d30_op4";
				class OpticsIn
				{
					class OP4M_45
					{
						opticsDisplayName="OP4";
						//hitpoint="ovladac";
						//camPos="ovladac";
						//camDir="konec hlavne";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.12727299;
						minFov=0.12727299;
						maxFov=0.12727299;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_empty.p3d";
					};
				};
			};
		};
	};
	*/
};