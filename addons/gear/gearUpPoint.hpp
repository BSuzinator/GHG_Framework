class Land_InfoStand_V2_F;
class GHG_gearUpPoint : Land_InfoStand_V2_F
{
	author = "GHG Team";
	scope = 2;
	scopeCurator = 2;
	displayName = "Gear Up Point";
	editorCategory="GHG_Cat_Main";
	editorSubcategory="GHG_SubCat_Other";
	hiddenSelectionsTextures[] = {"x\ghg\addons\main\ui\logo.paa","A3\Structures_F\Civ\InfoBoards\Data\InfoStands_CA.paa"};
	
	class ACE_Actions : ACE_Actions {
		class ACE_MainActions : ACE_MainActions {
			displayName = "Gear Up Point";
			distance = 10;
			position = "[0,0,0.5]";
			selection = "";
			condition = "true";
			icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
			//statement = "";
			exceptions[] = {"isNotSwimming"};
			//showDisabled = 1;
			
			class GHG_GearUp_PLT {
				displayName = "PLT";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_PLT_Lead {
					displayName = "Platoon Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""plt_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_PLT_Doctor {
					displayName = "Platoon Doctor";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""plt_doctor""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_PLT_FAC {
					displayName = "Platoon FAC";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""plt_fac""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_PLT_Interp {
					displayName = "Platoon Interpreter";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""plt_interp""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_PLT_Rifle {
					displayName = "Platoon Rifleman";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""squad_rifle""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			
			class GHG_GearUp_Squad {
				displayName = "Squad";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_Squad_Lead {
					displayName = "Squad Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""squad_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_Squad_Medic {
					displayName = "Squad Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""squad_medic""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_Squad_AR {
					displayName = "Squad Automatic Rifleman";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""squad_ar""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_Squad_AAR {
					displayName = "Squad Assistant Automatic Rifleman";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""squad_aar""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_Squad_AT {
					displayName = "Squad Rifleman (AT)";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""squad_at""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_Squad_Marksman {
					displayName = "Squad Marksman";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""squad_marksman""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_EWS {
				displayName = "EWS";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_EWS_Lead {
					displayName = "EWS Team Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""ews_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_EWS_Comms {
					displayName = "EWS Communications Specialist";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""ews_comms""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_EWS_Comp {
					displayName = "EWS Computer Specialist";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""ews_comp""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_MAA {
				displayName = "MAA";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_MAA_Lead {
					displayName = "MAA Team Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""maa_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_MAA_gunner {
					displayName = "MAA Gunner";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""maa_gunner""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_MAA_Ammo {
					displayName = "MAA Ammo Bearer";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""maa_ammo""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_MAT {
				displayName = "MAT";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_MAT_Lead {
					displayName = "MAT Team Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""mat_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_MAT_gunner {
					displayName = "MAT Gunner";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""mat_gunner""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_MAT_Ammo {
					displayName = "MAT Ammo Bearer";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""mat_ammo""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_MMG {
				displayName = "MMG";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_MMG_Lead {
					displayName = "MMG Team Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""mmg_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_MMG_gunner {
					displayName = "MMG Gunner";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""mmg_gunner""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_MMG_Ammo {
					displayName = "MMG Ammo Bearer";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""mmg_ammo""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_MTR {
				displayName = "MTR";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_MTR_Lead {
					displayName = "MTR Team Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""mtr_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_MTR_gunner {
					displayName = "MTR Gunner";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""mtr_gunner""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_MTR_Ammo {
					displayName = "MTR Ammo Bearer";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""mtr_ammo""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_RCN {
				displayName = "RCN";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_RCN_Lead {
					displayName = "RCN Team Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""rcn_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_RCN_gunner {
					displayName = "RCN Sniper";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""rcn_gunner""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_RCN_Ammo {
					displayName = "RCN Spotter";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""rcn_ammo""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_LOGI {
				displayName = "LOGI";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_LOGI_Lead {
					displayName = "LOGI Team Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""logi_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_LOGI_Doctor {
					displayName = "LOGI Doctor";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""logi_doctor""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_LOGI_Radio {
					displayName = "LOGI Radio Operator";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""plt_fac""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_LOGI_Repair {
					displayName = "LOGI Repair Specialist";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""logi_repair""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_DEMO {
				displayName = "DEMO";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_DEMO_Lead {
					displayName = "DEMO Team Lead";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""demo_lead""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_DEMO_Explosive {
					displayName = "DEMO Explosive Specialist";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""demo_explosive""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_DEMO_Defusal {
					displayName = "DEMO EOD Tech";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""demo_eod""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_DEMO_Saboteur {
					displayName = "DEMO Saboteur";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""demo_saboteur""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_LYNX {
				displayName = "LYNX";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_LYNX_CMDR {
					displayName = "LYNX Commander";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""lynx_cmdr""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_LYNX_Gunner {
					displayName = "LYNX Gunner";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""lynx_crew""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_LYNX_Driver {
					displayName = "LYNX Driver";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""lynx_driver""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_LYNX_Crew {
					displayName = "LYNX Crew";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""lynx_crew""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_WOLF {
				displayName = "WOLF";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_WOLF_CMDR {
					displayName = "WOLF Commander";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""wolf_cmdr""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_WOLF_Gunner {
					displayName = "WOLF Gunner";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""wolf_crew""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_WOLF_Driver {
					displayName = "WOLF Driver";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""wolf_driver""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_WOLF_Crew {
					displayName = "WOLF Crew";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""wolf_crew""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_RAVN {
				displayName = "RAVN";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_RAVN_Pilot {
					displayName = "RAVN Pilot / Co-Pilot";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""ravn_pilot""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_RAVN_Crew {
					displayName = "RAVN Crew";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""ravn_crew""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_FLCN {
				displayName = "FLCN";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_FLCN_Pilot {
					displayName = "FLCN Pilot / Co-Pilot";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""flcn_pilot""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_FLCN_Crew {
					displayName = "FLCN Crew";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""flcn_crew""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_RPTR {
				displayName = "RPTR";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_RPTR_Pilot {
					displayName = "RPTR Pilot";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""rptr_pilot""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
			class GHG_GearUp_KNFS {
				displayName = "KNFS";
				condition = "true";
				statement = "";
				insertChildren = "";
				icon = "\a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_debug_ca.paa";
				exceptions[] = {"isNotSwimming"};
				
				class GHG_GearUp_KNFS_Captain {
					displayName = "KNFS Captain";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""knfs_captain""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_KNFS_Helmsman {
					displayName = "KNFS Helmsman";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""knfs_driver""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
				class GHG_GearUp_KNFS_Crew {
					displayName = "KNFS Crew";
					condition = "true";
					statement = "";
					insertChildren = "[_this # 1, ""knfs_crew""] call ghg_gear_fnc_gearUp";
					icon = "";
					exceptions[] = {"isNotSwimming"};
				};
			};
		};
	};
};