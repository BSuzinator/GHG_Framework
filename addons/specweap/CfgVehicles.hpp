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
};