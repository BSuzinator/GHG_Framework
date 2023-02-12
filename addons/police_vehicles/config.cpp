#include "script_component.hpp"
class CfgPatches
{
	class Meanscars
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
		units[]={
			"M_CVPI",
			"M_CVPI_Supervisor",
			"M_CVPI_Slick",
			"M_CVPI_NEW",
			"M_CVPI_EMS",
			"M_CVPI_UC_Black",
			"M_CVPI_UC_White",
			"M_CVPI_UC_Blue",
			"M_CVPI_UC_Grey",
			"M_CVPI_UC_Red"
		};;
		weapons[]={
			"Civhorn",
			"Takedown",
			"Laser",
			"Pulse",
			"Policehorn",
			"Airhorn",
			"hornPD"
		};
	};
};

class CfgVehicles {
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1
			{
			};
			class HitGlass2;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Offroad_01_base_F: Car_F
	{
	};
	class C_Offroad_01_F: Offroad_01_base_F
	{
	};
	class CRFT_Car_Base: C_Offroad_01_F
	{
	};
	
	#include 2012_Charger/vehConfig.hpp
	
};