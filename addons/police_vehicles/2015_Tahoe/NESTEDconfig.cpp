class DefaultEventhandlers;
class CfgVehicleClasses
{
	class Police_Vehicles
	{
		displayName="Police_Vehicles";
	};
};
class CfgPatches
{
	class Police
	{
		units[]=
		{
			"M_Tahoe",
			"M_Tahoe_supervisor",
			"M_Tahoe_NEW",
			"M_Tahoe_EMS",
			"M_Tahoe_UC_Black",
			"M_Tahoe_UC_White",
			"M_Tahoe_UC_Blue",
			"M_Tahoe_UC_Grey",
			"M_Tahoe_UC_Red"
		};
		weapons[]=
		{
			"Civhorn",
			"Takedown",
			"Laser",
			"Pulse",
			"Policehorn",
			"Airhorn",
			"hornPD"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
	};
};
class CfgSounds
{
	sounds[]=
	{
		"CVSiren1",
		"CVSiren2",
		"CVSiren3"
	};
	class CVSiren1
	{
		sound[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\Sound\wail.wav",
			"db+5",
			1
		};
		name="Siren1";
		titles[]={};
	};
	class CVSiren2
	{
		sound[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\Sound\siren2.wav",
			"db+5",
			1
		};
		name="Siren2";
		titles[]={};
	};
};
class cfgWeapons
{
	class SportCarHorn;
	class Civhorn: SportCarHorn
	{
		displayname="Civhorn";
		reloadTime=4;
		drySound[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\Sound\hornciv.wav",
			1,
			1
		};
		scope=2;
	};
	class Takedown: SportCarHorn
	{
		displayName="Takedown";
		reloadtime=4;
		drysound[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\Sound\Takedown.wav",
			1,
			1
		};
		scope=2;
	};
	class Laser: SportCarHorn
	{
		displayName="Laser";
		reloadtime=4;
		drysound[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\Sound\laser.wav",
			1,
			1
		};
		scope=2;
	};
	class Pulse: SportCarHorn
	{
		displayName="Pulse";
		reloadtime=4;
		drysound[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\Sound\pulse.wav",
			1,
			1
		};
		scope=2;
	};
	class Policehorn: SportCarHorn
	{
		displayName="Policehorn";
		reloadtime=4;
		drysound[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\Sound\policehorn.wav",
			1,
			1
		};
		scope=2;
	};
	class Airhorn: SportCarHorn
	{
		displayName="Airhorn";
		reloadtime=4;
		drysound[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\Sound\Airhorn.wav",
			1,
			1
		};
		scope=2;
	};
	class hornPD: SportCarHorn
	{
		displayName="hornPD";
		reloadtime=4;
		drysound[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\Sound\hornPD.wav",
			1,
			1
		};
		scope=2;
	};
};
class CfgVehicles
{
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
	class M_Tahoebase: CRFT_Car_Base
	{
		extCameraPosition[]={0,0.80000001,-6};
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		mapSize=3.5599999;
		model="police_vehicles\2015_Tahoe\M_Tahoe.p3d";
		author="The cat lady Nick Means";
		displayName="BASE";
		class Library
		{
			libTextDesc="";
		};
		weapons[]=
		{
			""
		};
		hiddenSelections[]=
		{
			"jump",
			"light0",
			"light2",
			"light3",
			"light4",
			"light5",
			"light6",
			"lb-right-takedown",
			"lb-right-front-corner",
			"lb-right-back-corner",
			"lb-back-red-1",
			"lb-back-red-2",
			"lb-back-red-3",
			"lb-back-blue-3",
			"lb-back-blue-2",
			"lb-back-blue-1",
			"lb-left-back-corner",
			"lb-back-yellow-1",
			"lb-back-yellow-2",
			"lb-back-yellow-3",
			"lb-back-yellow-4",
			"lb-back-yellow-5",
			"lb-back-yellow-6",
			"lb-left-alley",
			"lb-right-alley",
			"lb-ion-blue",
			"lb-ion-red"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		turnCoef=2.5;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		armor=32;
		cost=50000;
		transportMaxBackpacks=15;
		transportSoldier=3;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		maxFordingDepth=0.5;
		waterResistance=1;
		crewCrashProtection=0.25;
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustEffectOffroad";
			};
		};
		ejectDeadCargo=1;
		ejectDeadDriver=1;
		class Turrets
		{
		};
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		driverAction="driver_high01";
		getInAction="GetInOffroad";
		getOutAction="GetOutLow";
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_injured_medevac_truck01",
			"passenger_injured_medevac_truck02",
			"passenger_injured_medevac_truck01",
			"passenger_flatground_generic03",
			"passenger_flatground_generic05",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_leanright",
			"passenger_apc_generic03",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_generic01",
			"passenger_generic01_foldhands",
			"passenger_apc_generic04",
			"passenger_generic01_leanleft"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			0.56234097,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"police_vehicles\2015_Tahoe\sound\start.ogg",
			0.39810699,
			1
		};
		soundEngineOnExt[]=
		{
			"police_vehicles\2015_Tahoe\sound\start.ogg",
			0.39810699,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\offroad_01\exhaust_int_stop.wss",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\offroad_01\exhaust_ext_stop.wss",
			1,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_01",
			0.707946,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_02",
			0.707946,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_03",
			0.707946,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_04",
			0.707946,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01",
			0.707946,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02",
			0.707946,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03",
			0.707946,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04",
			0.707946,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05",
			0.707946,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06",
			0.707946,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01",
			0.707946,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02",
			0.707946,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03",
			0.707946,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04",
			0.707946,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\1 EngA_00836.wav",
					"db-10",
					1,
					150
				};
				frequency="0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))";
			};
			class Engine
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\2 EngA_01222.wav",
					0.281838,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\3 EngA_01717.wav",
					"db-9",
					1,
					240
				};
				frequency="0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\4 EngA_02205.wav",
					0.39810699,
					1,
					280
				};
				frequency="0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\5 EngA_02840.wav",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\6 EngA_03355.wav",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\7 EngA_03868.wav",
					0.56234097,
					1,
					420
				};
				frequency="0.95 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.15";
				volume="engineOn*camPos*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\1 ExhL_00844.wav",
					"db-6",
					1,
					200
				};
				frequency="0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\2 ExhL_01673.wav",
					0.56234097,
					1,
					250
				};
				frequency="0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\3 ExhL_01918.wav",
					0.63095701,
					1,
					280
				};
				frequency="0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\4 ExhL_02287.wav",
					"db-3",
					1,
					320
				};
				frequency="0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\5 ExhL_02910.wav",
					"db-2",
					1,
					360
				};
				frequency="0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\6 ExhL_03298.wav",
					1,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\7 ExhL_03933.wav",
					"db2",
					1,
					450
				};
				frequency="0.9 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\1 EngA_00836.wav",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\2 EngA_01222.wav",
					0.199526,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\3 EngA_01717.wav",
					"db-12",
					1
				};
				frequency="0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\4 EngA_02205.wav",
					0.281838,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\5 EngA_02840.wav",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\6 EngA_03355.wav",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\7 EngA_03868.wav",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\1 ExhL_00844.wav",
					"db-10",
					1
				};
				frequency="0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\2 ExhL_01673.wav",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\3 ExhL_01918.wav",
					0.39810699,
					1
				};
				frequency="0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\4 ExhL_02287.wav",
					"db-7",
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\5 ExhL_02910.wav",
					"db-6",
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\6 ExhL_03298.wav",
					0.56234097,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"police_vehicles\2015_Tahoe\sound\7 ExhL_03933.wav",
					0.63095701,
					1
				};
				frequency="0.9 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					"db-6",
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					0.39810699,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					"db-6",
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					"db-12",
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					"db-3",
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					"db-3",
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					"db-3",
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					"db-3",
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					"db-3",
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					"db-3",
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					"db-3",
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					"db-3",
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		thrustDelay=0.1;
		brakeIdleSpeed=1.78;
		maxSpeed=300;
		fuelCapacity=100;
		wheelCircumference=2.277;
		antiRollbarForceCoef=0.5;
		antiRollbarForceLimit=0.5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=120;
		idleRpm=1000;
		redRpm=7000;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.2309999,
				"N",
				0,
				"D1",
				2.4619999,
				"D2",
				1.87,
				"D3",
				1.2410001,
				"D4",
				0.97000003,
				"D5",
				0.71100003
			};
			TransmissionRatios[]=
			{
				"High",
				4.1110001
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.0099999998;
		};
		simulation="carx";
		dampersBumpCoef=0.0099999998;
		differentialType="all_limited";
		frontRearSplit=0.30000001;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=2.5;
		clutchStrength=55;
		enginePower=450;
		maxOmega=850;
		peakTorque=950;
		dampingRateFullThrottle=0.029999999;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		torqueCurve[]=
		{
			{0,0},
			{0.2,0.64999998},
			{0.30000001,0.80000001},
			{0.40000001,0.94999999},
			{0.60000002,1},
			{0.69999999,0.94999999},
			{0.89999998,0.89999998},
			{1,0.5}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.98000002,0.98000002,0.98000002,0.98000002,0.97000003,0.94999999,0.94999999};
		switchTime=0.11;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width=0.2;
				mass=20;
				MOI=5.3000002;
				dampingRate=0.5;
				maxBrakeTorque=5000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				mMaxDroop=0.15000001;
				sprungMass=400;
				springStrength=40000;
				springDamperRate=5240;
				longitudinalStiffnessPerUnitGravity=100000;
				latStiffX=25;
				latStiffY=18000;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=8000;
				latStiffX=25;
				latStiffY=18000;
				sprungMass=400;
				springStrength=40000;
				springDamperRate=5240;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=8000;
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=5;
					renderVisionMode=3;
					fov=0.69999999;
				};
			};
			class RearCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=5;
					renderVisionMode=3;
					fov=0.69999999;
				};
			};
			class FrontCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=5;
					renderVisionMode=3;
					fov=0.69999999;
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\soft_F\Quadbike_01\Data\Quadbike_01_base.rvmat",
				"A3\soft_F\Quadbike_01\Data\Quadbike_01_base_damage.rvmat",
				"A3\soft_F\Quadbike_01\Data\Quadbike_01_base_destruct.rvmat"
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1650,2420,2430};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				FlareSize=0.5;
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				FlareSize=0.5;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01",
				"LightCarHeadL02"
			},
			
			{
				"LightCarHeadR01",
				"LightCarHeadR02"
			}
		};
	};
	class M_Tahoe: M_Tahoebase
	{
		displayname="Means Tahoe LB";
		author="Nick Means";
		model="\x\ghg\addons\police_vehicles\2015_Tahoe\M_Tahoe.p3d";
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		scope=2;
		weapons[]=
		{
			"Takedown",
			"Airhorn",
			"Civhorn",
			"Laser",
			"Policehorn",
			"Pulse",
			"hornPD"
		};
		typicalCargo[]=
		{
			"C_man_1"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"light0",
			"light2",
			"light3",
			"lb-ion-red",
			"lb-ion-blue",
			"light6",
			"light7",
			"light8",
			"light9",
			"light10",
			"light11",
			"light12",
			"light13",
			"light14",
			"light15",
			"light16",
			"light17",
			"light18",
			"light19",
			"light20",
			"light21",
			"light22",
			"light23",
			"light24",
			"light25",
			"light26",
			"radar_patrol_c",
			"radar_patrol_d",
			"radar_patrol_u",
			"radar_fast_c",
			"radar_fast_d",
			"radar_fast_u",
			"radar_target_c",
			"radar_target_d",
			"radar_target_u",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"Plate1",
			"Plate2",
			"Plate3",
			"Plate4",
			"Plate5",
			"Plate6",
			"jump"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\tahoe_sign_3.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa"
		};
		class eventhandlers
		{
			init="_this execVM '\police_vehicles\2015_Tahoe\data\Scripts\init.sqf';";
		};
		class UserActions
		{
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition="player IN this";
				statement="this setobjecttexture [31,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [32,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [33,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
			};
			class codeOne
			{
				displayName="<t color='#0000ff'>Code One</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0)";
				statement="this animate ['ani_lightbar', 0], this animate ['ani_sirens', 0], this animate ['ani_directional', 0], this animate ['ani_Flashers', 0]";
				onlyForplayer=1;
			};
			class LightMode1
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0.1)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class LightMode2
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' > 0)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_sirens', 0], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class sirenon
			{
				displayName="<t color='#ff0000'>Code Three</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' == 0)";
				statement="this animate ['ani_sirens', 0.2], this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class ani_lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_flash
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Ani_laptops
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Ani_Sirens
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class CloseCover1
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
			class CloseCover2: CloseCover1
			{
			};
			class OneSecondAnim
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FiveSecondAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Decal1
			{
				scope=0;
			};
			class License1
			{
				scope=0;
			};
			class License2
			{
				scope=0;
			};
			class Ani_Ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class slow_func2
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class slow_func
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class ani_directional
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_Flashers
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		fuelCapacity=125;
		maxSpeed=280;
		enginePower=250;
		maxOmega=700;
		peakTorque=669;
	};
	class M_Tahoe_supervisor: M_Tahoebase
	{
		displayname="Means Tahoe LB supervisor";
		author="Nick Means";
		model="\x\ghg\addons\police_vehicles\2015_Tahoe\M_Tahoe.p3d";
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		scope=2;
		weapons[]=
		{
			"Takedown",
			"Airhorn",
			"Civhorn",
			"Laser",
			"Policehorn",
			"Pulse",
			"hornPD"
		};
		typicalCargo[]=
		{
			"C_man_1"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"light0",
			"light2",
			"light3",
			"lb-ion-red",
			"lb-ion-blue",
			"light6",
			"light7",
			"light8",
			"light9",
			"light10",
			"light11",
			"light12",
			"light13",
			"light14",
			"light15",
			"light16",
			"light17",
			"light18",
			"light19",
			"light20",
			"light21",
			"light22",
			"light23",
			"light24",
			"light25",
			"light26",
			"radar_patrol_c",
			"radar_patrol_d",
			"radar_patrol_u",
			"radar_fast_c",
			"radar_fast_d",
			"radar_fast_u",
			"radar_target_c",
			"radar_target_d",
			"radar_target_u",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"Plate1",
			"Plate2",
			"Plate3",
			"Plate4",
			"Plate5",
			"Plate6",
			"jump"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\tahoe_sign_3_sup.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa"
		};
		class eventhandlers
		{
			init="_this execVM '\police_vehicles\2015_Tahoe\data\Scripts\init.sqf';";
		};
		class UserActions
		{
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition="player IN this";
				statement="this setobjecttexture [31,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [32,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [33,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
			};
			class codeOne
			{
				displayName="<t color='#0000ff'>Code One</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0)";
				statement="this animate ['ani_lightbar', 0], this animate ['ani_sirens', 0], this animate ['ani_directional', 0], this animate ['ani_Flashers', 0]";
				onlyForplayer=1;
			};
			class LightMode1
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0.1)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class LightMode2
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' > 0)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_sirens', 0], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class sirenon
			{
				displayName="<t color='#ff0000'>Code Three</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' == 0)";
				statement="this animate ['ani_sirens', 0.2], this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class ani_lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_flash
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Ani_laptops
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Ani_Sirens
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class CloseCover1
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
			class CloseCover2: CloseCover1
			{
			};
			class OneSecondAnim
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FiveSecondAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Decal1
			{
				scope=0;
			};
			class License1
			{
				scope=0;
			};
			class License2
			{
				scope=0;
			};
			class Ani_Ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class slow_func2
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class slow_func
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class ani_directional
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_Flashers
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		fuelCapacity=125;
		maxSpeed=280;
		enginePower=250;
		maxOmega=700;
		peakTorque=669;
	};
	class M_Tahoe_NEW: M_Tahoebase
	{
		displayname="Means Tahoe NEW";
		author="Nick Means";
		model="\x\ghg\addons\police_vehicles\2015_Tahoe\M_Tahoe.p3d";
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		scope=2;
		weapons[]=
		{
			"Takedown",
			"Airhorn",
			"Civhorn",
			"Laser",
			"Policehorn",
			"Pulse",
			"hornPD"
		};
		typicalCargo[]=
		{
			"C_man_1"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"light0",
			"light2",
			"light3",
			"lb-ion-red",
			"lb-ion-blue",
			"light6",
			"light7",
			"light8",
			"light9",
			"light10",
			"light11",
			"light12",
			"light13",
			"light14",
			"light15",
			"light16",
			"light17",
			"light18",
			"light19",
			"light20",
			"light21",
			"light22",
			"light23",
			"light24",
			"light25",
			"light26",
			"radar_patrol_c",
			"radar_patrol_d",
			"radar_patrol_u",
			"radar_fast_c",
			"radar_fast_d",
			"radar_fast_u",
			"radar_target_c",
			"radar_target_d",
			"radar_target_u",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"Plate1",
			"Plate2",
			"Plate3",
			"Plate4",
			"Plate5",
			"Plate6",
			"jump"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\tahoe_sign_3_sup.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa"
		};
		class eventhandlers
		{
			init="_this execVM '\police_vehicles\2015_Tahoe\data\Scripts\init.sqf';";
		};
		class UserActions
		{
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition="player IN this";
				statement="this setobjecttexture [31,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [32,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [33,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
			};
			class codeOne
			{
				displayName="<t color='#0000ff'>Code One</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0)";
				statement="this animate ['ani_lightbar', 0], this animate ['ani_sirens', 0], this animate ['ani_directional', 0], this animate ['ani_Flashers', 0]";
				onlyForplayer=1;
			};
			class LightMode1
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0.1)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class LightMode2
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' > 0)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_sirens', 0], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class sirenon
			{
				displayName="<t color='#ff0000'>Code Three</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' == 0)";
				statement="this animate ['ani_sirens', 0.2], this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class ani_lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_flash
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Ani_laptops
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Ani_Sirens
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class CloseCover1
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
			class CloseCover2: CloseCover1
			{
			};
			class OneSecondAnim
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FiveSecondAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Decal1
			{
				scope=0;
			};
			class License1
			{
				scope=0;
			};
			class License2
			{
				scope=0;
			};
			class Ani_Ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class slow_func2
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class slow_func
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class ani_directional
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_Flashers
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		fuelCapacity=125;
		maxSpeed=280;
		enginePower=250;
		maxOmega=700;
		peakTorque=669;
	};
	class M_Tahoe_EMS: M_Tahoebase
	{
		displayname="Means Tahoe EMS";
		author="Nick Means";
		model="\x\ghg\addons\police_vehicles\2015_Tahoe\M_Tahoe_EMS.p3d";
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		scope=2;
		weapons[]=
		{
			"Takedown",
			"Airhorn",
			"Civhorn",
			"Laser",
			"Policehorn",
			"Pulse",
			"hornPD"
		};
		typicalCargo[]=
		{
			"C_man_1"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"light0",
			"light2",
			"light3",
			"lb-ion-red",
			"lb-ion-blue",
			"light6",
			"light7",
			"light8",
			"light9",
			"light10",
			"light11",
			"light12",
			"light13",
			"light14",
			"light15",
			"light16",
			"light17",
			"light18",
			"light19",
			"light20",
			"light21",
			"light22",
			"light23",
			"light24",
			"light25",
			"light26",
			"radar_patrol_c",
			"radar_patrol_d",
			"radar_patrol_u",
			"radar_fast_c",
			"radar_fast_d",
			"radar_fast_u",
			"radar_target_c",
			"radar_target_d",
			"radar_target_u",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"Plate1",
			"Plate2",
			"Plate3",
			"Plate4",
			"Plate5",
			"Plate6",
			"jump"
		};
		hiddenSelectionsTextures[]=
		{
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\tahoe_sign_3_EMS.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa"
		};
		class eventhandlers
		{
			init="_this execVM '\police_vehicles\2015_Tahoe\data\Scripts\init.sqf';";
		};
		class UserActions
		{
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition="player IN this";
				statement="this setobjecttexture [31,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [32,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [33,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
			};
			class codeOne
			{
				displayName="<t color='#0000ff'>Code One</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0)";
				statement="this animate ['ani_lightbar', 0], this animate ['ani_sirens', 0], this animate ['ani_directional', 0], this animate ['ani_Flashers', 0]";
				onlyForplayer=1;
			};
			class LightMode1
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0.1)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class LightMode2
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' > 0)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_sirens', 0], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class sirenon
			{
				displayName="<t color='#ff0000'>Code Three</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' == 0)";
				statement="this animate ['ani_sirens', 0.2], this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class ani_lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_flash
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Ani_laptops
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Ani_Sirens
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class CloseCover1
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
			class CloseCover2: CloseCover1
			{
			};
			class OneSecondAnim
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FiveSecondAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Decal1
			{
				scope=0;
			};
			class License1
			{
				scope=0;
			};
			class License2
			{
				scope=0;
			};
			class Ani_Ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class slow_func2
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class slow_func
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class ani_directional
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_Flashers
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		fuelCapacity=125;
		maxSpeed=280;
		enginePower=250;
		maxOmega=700;
		peakTorque=669;
	};
	class M_Tahoe_UC_Black: M_Tahoebase
	{
		displayname="Means Tahoe UC Black";
		author="Nick Means";
		model="\x\ghg\addons\police_vehicles\2015_Tahoe\M_Tahoe_UC.p3d";
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		scope=2;
		weapons[]=
		{
			"Takedown",
			"Airhorn",
			"Civhorn",
			"Laser",
			"Policehorn",
			"Pulse",
			"hornPD"
		};
		typicalCargo[]=
		{
			"C_man_1"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		hiddenSelections[]=
		{
			"Camo2",
			"light0",
			"light2",
			"light3",
			"lb-ion-red",
			"lb-ion-blue",
			"light6",
			"light7",
			"light8",
			"light9",
			"light10",
			"light11",
			"light12",
			"light13",
			"light14",
			"light15",
			"light16",
			"light17",
			"light18",
			"light19",
			"light20",
			"light21",
			"light22",
			"light23",
			"light24",
			"light25",
			"light26",
			"radar_patrol_c",
			"radar_patrol_d",
			"radar_patrol_u",
			"radar_fast_c",
			"radar_fast_d",
			"radar_fast_u",
			"radar_target_c",
			"radar_target_d",
			"radar_target_u",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"Plate1",
			"Plate2",
			"Plate3",
			"Plate4",
			"Plate5",
			"Plate6",
			"Plate7"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa"
		};
		class eventhandlers
		{
			init="_this execVM '\police_vehicles\2015_Tahoe\data\Scripts\init.sqf';";
		};
		class UserActions
		{
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition="player IN this";
				statement="this setobjecttexture [31,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [32,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [33,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
			};
			class codeOne
			{
				displayName="<t color='#0000ff'>Code One</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0)";
				statement="this animate ['ani_lightbar', 0], this animate ['ani_sirens', 0], this animate ['ani_directional', 0], this animate ['ani_Flashers', 0]";
				onlyForplayer=1;
			};
			class LightMode1
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0.1)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class LightMode2
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' > 0)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_sirens', 0], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class sirenon
			{
				displayName="<t color='#ff0000'>Code Three</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' == 0)";
				statement="this animate ['ani_sirens', 0.2], this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class ani_lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_flash
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Ani_laptops
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Ani_Sirens
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class CloseCover1
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
			class CloseCover2: CloseCover1
			{
			};
			class OneSecondAnim
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FiveSecondAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Decal1
			{
				scope=0;
			};
			class License1
			{
				scope=0;
			};
			class License2
			{
				scope=0;
			};
			class Ani_Ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class slow_func2
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class slow_func
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class ani_directional
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_Flashers
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		fuelCapacity=125;
		maxSpeed=280;
		enginePower=250;
		maxOmega=700;
		peakTorque=669;
	};
	class M_Tahoe_UC_White: M_Tahoebase
	{
		displayname="Means Tahoe UC White";
		author="Nick Means";
		model="\x\ghg\addons\police_vehicles\2015_Tahoe\M_Tahoe_UC.p3d";
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		scope=2;
		weapons[]=
		{
			"Takedown",
			"Airhorn",
			"Civhorn",
			"Laser",
			"Policehorn",
			"Pulse",
			"hornPD"
		};
		typicalCargo[]=
		{
			"C_man_1"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		hiddenSelections[]=
		{
			"Camo2",
			"light0",
			"light2",
			"light3",
			"lb-ion-red",
			"lb-ion-blue",
			"light6",
			"light7",
			"light8",
			"light9",
			"light10",
			"light11",
			"light12",
			"light13",
			"light14",
			"light15",
			"light16",
			"light17",
			"light18",
			"light19",
			"light20",
			"light21",
			"light22",
			"light23",
			"light24",
			"light25",
			"light26",
			"radar_patrol_c",
			"radar_patrol_d",
			"radar_patrol_u",
			"radar_fast_c",
			"radar_fast_d",
			"radar_fast_u",
			"radar_target_c",
			"radar_target_d",
			"radar_target_u",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"Plate1",
			"Plate2",
			"Plate3",
			"Plate4",
			"Plate5",
			"Plate6",
			"Plate7"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,1.0,CO)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa"
		};
		class eventhandlers
		{
			init="_this execVM '\police_vehicles\2015_Tahoe\data\Scripts\init.sqf';";
		};
		class UserActions
		{
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition="player IN this";
				statement="this setobjecttexture [31,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [32,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [33,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
			};
			class codeOne
			{
				displayName="<t color='#0000ff'>Code One</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0)";
				statement="this animate ['ani_lightbar', 0], this animate ['ani_sirens', 0], this animate ['ani_directional', 0], this animate ['ani_Flashers', 0]";
				onlyForplayer=1;
			};
			class LightMode1
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0.1)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class LightMode2
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' > 0)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_sirens', 0], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class sirenon
			{
				displayName="<t color='#ff0000'>Code Three</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' == 0)";
				statement="this animate ['ani_sirens', 0.2], this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class ani_lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_flash
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Ani_laptops
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Ani_Sirens
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class CloseCover1
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
			class CloseCover2: CloseCover1
			{
			};
			class OneSecondAnim
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FiveSecondAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Decal1
			{
				scope=0;
			};
			class License1
			{
				scope=0;
			};
			class License2
			{
				scope=0;
			};
			class Ani_Ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class slow_func2
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class slow_func
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class ani_directional
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_Flashers
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		fuelCapacity=125;
		maxSpeed=280;
		enginePower=250;
		maxOmega=700;
		peakTorque=669;
	};
	class M_Tahoe_UC_Blue: M_Tahoebase
	{
		displayname="Means Tahoe UC Blue";
		author="Nick Means";
		model="\x\ghg\addons\police_vehicles\2015_Tahoe\M_Tahoe_UC.p3d";
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		scope=2;
		weapons[]=
		{
			"Takedown",
			"Airhorn",
			"Civhorn",
			"Laser",
			"Policehorn",
			"Pulse",
			"hornPD"
		};
		typicalCargo[]=
		{
			"C_man_1"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		hiddenSelections[]=
		{
			"Camo2",
			"light0",
			"light2",
			"light3",
			"lb-ion-red",
			"lb-ion-blue",
			"light6",
			"light7",
			"light8",
			"light9",
			"light10",
			"light11",
			"light12",
			"light13",
			"light14",
			"light15",
			"light16",
			"light17",
			"light18",
			"light19",
			"light20",
			"light21",
			"light22",
			"light23",
			"light24",
			"light25",
			"light26",
			"radar_patrol_c",
			"radar_patrol_d",
			"radar_patrol_u",
			"radar_fast_c",
			"radar_fast_d",
			"radar_fast_u",
			"radar_target_c",
			"radar_target_d",
			"radar_target_u",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"Plate1",
			"Plate2",
			"Plate3",
			"Plate4",
			"Plate5",
			"Plate6",
			"Plate7"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,0,1,1.0,CO)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa"
		};
		class eventhandlers
		{
			init="_this execVM '\police_vehicles\2015_Tahoe\data\Scripts\init.sqf';";
		};
		class UserActions
		{
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition="player IN this";
				statement="this setobjecttexture [31,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [32,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [33,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
			};
			class codeOne
			{
				displayName="<t color='#0000ff'>Code One</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0)";
				statement="this animate ['ani_lightbar', 0], this animate ['ani_sirens', 0], this animate ['ani_directional', 0], this animate ['ani_Flashers', 0]";
				onlyForplayer=1;
			};
			class LightMode1
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0.1)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class LightMode2
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' > 0)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_sirens', 0], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class sirenon
			{
				displayName="<t color='#ff0000'>Code Three</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' == 0)";
				statement="this animate ['ani_sirens', 0.2], this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class ani_lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_flash
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Ani_laptops
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Ani_Sirens
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class CloseCover1
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
			class CloseCover2: CloseCover1
			{
			};
			class OneSecondAnim
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FiveSecondAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Decal1
			{
				scope=0;
			};
			class License1
			{
				scope=0;
			};
			class License2
			{
				scope=0;
			};
			class Ani_Ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class slow_func2
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class slow_func
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class ani_directional
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_Flashers
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		fuelCapacity=125;
		maxSpeed=280;
		enginePower=250;
		maxOmega=700;
		peakTorque=669;
	};
	class M_Tahoe_UC_Grey: M_Tahoebase
	{
		displayname="Means Tahoe UC Grey";
		author="Nick Means";
		model="\x\ghg\addons\police_vehicles\2015_Tahoe\M_Tahoe_UC.p3d";
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		scope=2;
		weapons[]=
		{
			"Takedown",
			"Airhorn",
			"Civhorn",
			"Laser",
			"Policehorn",
			"Pulse",
			"hornPD"
		};
		typicalCargo[]=
		{
			"C_man_1"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		hiddenSelections[]=
		{
			"Camo2",
			"light0",
			"light2",
			"light3",
			"lb-ion-red",
			"lb-ion-blue",
			"light6",
			"light7",
			"light8",
			"light9",
			"light10",
			"light11",
			"light12",
			"light13",
			"light14",
			"light15",
			"light16",
			"light17",
			"light18",
			"light19",
			"light20",
			"light21",
			"light22",
			"light23",
			"light24",
			"light25",
			"light26",
			"radar_patrol_c",
			"radar_patrol_d",
			"radar_patrol_u",
			"radar_fast_c",
			"radar_fast_d",
			"radar_fast_u",
			"radar_target_c",
			"radar_target_d",
			"radar_target_u",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"Plate1",
			"Plate2",
			"Plate3",
			"Plate4",
			"Plate5",
			"Plate6",
			"Plate7"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.501961,0.501961,0.501961,1.0,CO)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa"
		};
		class eventhandlers
		{
			init="_this execVM '\police_vehicles\2015_Tahoe\data\Scripts\init.sqf';";
		};
		class UserActions
		{
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition="player IN this";
				statement="this setobjecttexture [31,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [32,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [33,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
			};
			class codeOne
			{
				displayName="<t color='#0000ff'>Code One</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0)";
				statement="this animate ['ani_lightbar', 0], this animate ['ani_sirens', 0], this animate ['ani_directional', 0], this animate ['ani_Flashers', 0]";
				onlyForplayer=1;
			};
			class LightMode1
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0.1)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class LightMode2
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' > 0)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_sirens', 0], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class sirenon
			{
				displayName="<t color='#ff0000'>Code Three</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' == 0)";
				statement="this animate ['ani_sirens', 0.2], this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class ani_lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_flash
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Ani_laptops
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Ani_Sirens
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class CloseCover1
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
			class CloseCover2: CloseCover1
			{
			};
			class OneSecondAnim
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FiveSecondAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Decal1
			{
				scope=0;
			};
			class License1
			{
				scope=0;
			};
			class License2
			{
				scope=0;
			};
			class Ani_Ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class slow_func2
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class slow_func
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class ani_directional
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_Flashers
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		fuelCapacity=125;
		maxSpeed=280;
		enginePower=250;
		maxOmega=700;
		peakTorque=669;
	};
	class M_Tahoe_UC_Red: M_Tahoebase
	{
		displayname="Means Tahoe UC Red";
		author="Nick Means";
		model="\x\ghg\addons\police_vehicles\2015_Tahoe\M_Tahoe_UC.p3d";
		picture="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		Icon="\x\ghg\addons\police_vehicles\2015_Tahoe\UI\iconPD_ca.paa";
		scope=2;
		weapons[]=
		{
			"Takedown",
			"Airhorn",
			"Civhorn",
			"Laser",
			"Policehorn",
			"Pulse",
			"hornPD"
		};
		typicalCargo[]=
		{
			"C_man_1"
		};
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		hiddenSelections[]=
		{
			"Camo2",
			"light0",
			"light2",
			"light3",
			"lb-ion-red",
			"lb-ion-blue",
			"light6",
			"light7",
			"light8",
			"light9",
			"light10",
			"light11",
			"light12",
			"light13",
			"light14",
			"light15",
			"light16",
			"light17",
			"light18",
			"light19",
			"light20",
			"light21",
			"light22",
			"light23",
			"light24",
			"light25",
			"light26",
			"radar_patrol_c",
			"radar_patrol_d",
			"radar_patrol_u",
			"radar_fast_c",
			"radar_fast_d",
			"radar_fast_u",
			"radar_target_c",
			"radar_target_d",
			"radar_target_u",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"Plate1",
			"Plate2",
			"Plate3",
			"Plate4",
			"Plate5",
			"Plate6",
			"Plate7"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.501961,0,0,1.0,CO)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\yellow\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\pic0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa",
			"\x\ghg\addons\police_vehicles\2015_Tahoe\data\radar\green\0.paa"
		};
		class eventhandlers
		{
			init="_this execVM '\police_vehicles\2015_Tahoe\data\Scripts\init.sqf';";
		};
		class UserActions
		{
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition="player IN this";
				statement="this setobjecttexture [31,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [32,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; this setobjecttexture [33,'\police_vehicles\2015_Tahoe\data\radar\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
			};
			class codeOne
			{
				displayName="<t color='#0000ff'>Code One</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0)";
				statement="this animate ['ani_lightbar', 0], this animate ['ani_sirens', 0], this animate ['ani_directional', 0], this animate ['ani_Flashers', 0]";
				onlyForplayer=1;
			};
			class LightMode1
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_lightbar' != 0.1)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class LightMode2
			{
				displayName="<t color='#0000ff'>Code Two</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' > 0)";
				statement="this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_sirens', 0], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
			class sirenon
			{
				displayName="<t color='#ff0000'>Code Three</t>";
				position="drivewheel";
				radius=10;
				condition="driver this == player && (this animationPhase 'ani_sirens' == 0)";
				statement="this animate ['ani_sirens', 0.2], this animate ['ani_lightbar', 0.1], this animate ['ani_directional', 0.2], this animate ['ani_Flashers', 0.1]";
				onlyForplayer=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class ani_lightbar
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_flash
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Ani_laptops
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Ani_Sirens
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class CloseCover1
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
			class CloseCover2: CloseCover1
			{
			};
			class OneSecondAnim
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class FiveSecondAnim
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class Decal1
			{
				scope=0;
			};
			class License1
			{
				scope=0;
			};
			class License2
			{
				scope=0;
			};
			class Ani_Ramp
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class slow_func2
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class slow_func
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class ani_directional
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ani_Flashers
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		fuelCapacity=125;
		maxSpeed=280;
		enginePower=250;
		maxOmega=700;
		peakTorque=669;
	};
};
