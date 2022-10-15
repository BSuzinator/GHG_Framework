class usArmyNewTemplate
{
    version = 1;
    
    camo[] = { "erdl", "ocp", "oefcp", "ucp", "ucpd" };
    
    class Magazines
    {
        
    };
    
	class Vehicles {
		//Follow the Camos listed above
		
		//Infantry
		car[] = {
			//Unarmed Humvee (Up-Armored)
			{ "rhsusf_m1151_usarmy_wd", "rhsusf_m1151_usarmy_wd", "rhsusf_m1151_usarmy_wd", "rhsusf_m1151_usarmy_d", "rhsusf_m1151_usarmy_d" },
			//M2 Humvee (Up-Armored)
			{ "rhsusf_m1151_m2_v1_usarmy_wd", "rhsusf_m1151_m2_v1_usarmy_wd", "rhsusf_m1151_m2_v1_usarmy_wd", "rhsusf_m1151_m2_v1_usarmy_d", "rhsusf_m1151_m2_v1_usarmy_d" },
			//M2 / LRAS3 Humvee (Up-Armored)
			{ "rhsusf_m1151_m2_lras3_v1_usarmy_wd", "rhsusf_m1151_m2_lras3_v1_usarmy_wd", "rhsusf_m1151_m2_lras3_v1_usarmy_wd", "rhsusf_m1151_m2_lras3_v1_usarmy_d", "rhsusf_m1151_m2_lras3_v1_usarmy_d" },
			//SICPS Humvee (Up-Armored)
			{ "rhsusf_m1152_sicps_usarmy_wd", "rhsusf_m1152_sicps_usarmy_wd", "rhsusf_m1152_sicps_usarmy_wd", "rhsusf_m1152_sicps_usarmy_d", "rhsusf_m1152_sicps_usarmy_d" }
		};
		troopTruck[] = {
			//Unarmed 4 wheel covered truck
			{ "rhsusf_M1078A1P2_WD_fmtv_usarmy", "rhsusf_M1078A1P2_WD_fmtv_usarmy", "rhsusf_M1078A1P2_WD_fmtv_usarmy", "rhsusf_M1078A1P2_D_fmtv_usarmy", "rhsusf_M1078A1P2_D_fmtv_usarmy" },
			//Armored 4 wheel covered truck
			{ "rhsusf_M1078A1P2_B_WD_fmtv_usarmy", "rhsusf_M1078A1P2_B_WD_fmtv_usarmy", "rhsusf_M1078A1P2_B_WD_fmtv_usarmy", "rhsusf_M1078A1P2_B_D_fmtv_usarmy", "rhsusf_M1078A1P2_B_D_fmtv_usarmy" },
			//Armored M2 4 wheel covered truck
			{ "rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy", "rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy", "rhsusf_M1078A1P2_B_M2_WD_fmtv_usarmy", "rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy", "rhsusf_M1078A1P2_B_M2_D_fmtv_usarmy" }
		};
		mrap[] = {
			//Unarmed mrap
			{ "rhsusf_M1220_usarmy_wd", "rhsusf_M1220_usarmy_wd", "rhsusf_M1220_usarmy_wd", "rhsusf_M1220_usarmy_d", "rhsusf_M1220_usarmy_d" },
			//M2 mrap
			{ "rhsusf_M1220_M2_usarmy_wd", "rhsusf_M1220_M2_usarmy_wd", "rhsusf_M1220_M2_usarmy_wd", "rhsusf_M1220_M2_usarmy_d", "rhsusf_M1220_M2_usarmy_d" },
			//medevac mrap
			{ "rhsusf_M1230a1_usarmy_wd", "rhsusf_M1230a1_usarmy_wd", "rhsusf_M1230a1_usarmy_wd", "rhsusf_M1230a1_usarmy_d", "rhsusf_M1230a1_usarmy_d" }
		};
		
		//LOGI
		bridgeTrucks[] = {
			//Pontoon Truck
			{ "rhs_kraz255b1_pmp_vmf", "rhs_kraz255b1_pmp_vmf", "rhs_kraz255b1_pmp_vmf", "rhs_kraz255b1_pmp_vmf", "rhs_kraz255b1_pmp_vmf" },
			//Boat Truck
			{ "rhs_kraz255b1_bmkt_vmf", "rhs_kraz255b1_bmkt_vmf", "rhs_kraz255b1_bmkt_vmf", "rhs_kraz255b1_bmkt_vmf", "rhs_kraz255b1_bmkt_vmf" },
			//Pontoon Boat
			{ "rhs_bmk_t", "rhs_bmk_t", "rhs_bmk_t", "rhs_bmk_t", "rhs_bmk_t" }
		};
		cargoTrucks[] = {
			//Unarmed 4 wheel flatbed truck
			{ "rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_WD_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_D_flatbed_fmtv_usarmy" },
			//Armored 4 wheel flatbed truck
			{ "rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_B_WD_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_B_D_flatbed_fmtv_usarmy" },
			//Armored M2 4 wheel flatbed truck
			{ "rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_B_M2_WD_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy", "rhsusf_M1078A1P2_B_M2_D_flatbed_fmtv_usarmy" },
			//Unarmed hemmt
			{ "rhsusf_M977A4_usarmy_wd", "rhsusf_M977A4_usarmy_wd", "rhsusf_M977A4_usarmy_wd", "rhsusf_M977A4_usarmy_d", "rhsusf_M977A4_usarmy_d" },
			//Armored hemmt
			{ "rhsusf_M977A4_BKIT_usarmy_wd", "rhsusf_M977A4_BKIT_usarmy_wd", "rhsusf_M977A4_BKIT_usarmy_wd", "rhsusf_M977A4_BKIT_usarmy_d", "rhsusf_M977A4_BKIT_usarmy_d" }
		};
		rearm[] = {
			//Unarmed hemmt
			{ "rhsusf_M977A4_AMMO_usarmy_wd", "rhsusf_M977A4_AMMO_usarmy_wd", "rhsusf_M977A4_AMMO_usarmy_wd", "rhsusf_M977A4_AMMO_usarmy_d", "rhsusf_M977A4_AMMO_usarmy_d" },
			//Armored hemmt
			{ "rhsusf_M977A4_AMMO_BKIT_usarmy_wd", "rhsusf_M977A4_AMMO_BKIT_usarmy_wd", "rhsusf_M977A4_AMMO_BKIT_usarmy_wd", "rhsusf_M977A4_AMMO_BKIT_usarmy_d", "rhsusf_M977A4_AMMO_BKIT_usarmy_d" }
		};
		refuel[] = {
			//Unarmed hemmt
			{ "rhsusf_M978A4_usarmy_wd", "rhsusf_M978A4_usarmy_wd", "rhsusf_M978A4_usarmy_wd", "rhsusf_M978A4_usarmy_d", "rhsusf_M978A4_usarmy_d" },
			//Armored hemmt
			{ "rhsusf_M978A4_BKIT_usarmy_wd", "rhsusf_M978A4_BKIT_usarmy_wd", "rhsusf_M978A4_BKIT_usarmy_wd", "rhsusf_M978A4_BKIT_usarmy_d", "rhsusf_M978A4_BKIT_usarmy_d" }
		};
		repair[] = {
			//Unarmed hemmt
			{ "rhsusf_M977A4_REPAIR_usarmy_wd", "rhsusf_M977A4_REPAIR_usarmy_wd", "rhsusf_M977A4_REPAIR_usarmy_wd", "rhsusf_M977A4_REPAIR_usarmy_d", "rhsusf_M977A4_REPAIR_usarmy_d" },
			//Armored hemmt
			{ "rhsusf_M977A4_REPAIR_BKIT_usarmy_wd", "rhsusf_M977A4_REPAIR_BKIT_usarmy_wd", "rhsusf_M977A4_REPAIR_BKIT_usarmy_wd", "rhsusf_M977A4_REPAIR_BKIT_usarmy_d", "rhsusf_M977A4_REPAIR_BKIT_usarmy_d" }
		};
		
		//LYNX / WOLF
		apc[] = {
			//Stryker M2 RCWS
			{ "rhsusf_stryker_m1126_m2_wd", "rhsusf_stryker_m1126_m2_wd", "rhsusf_stryker_m1126_m2_wd", "rhsusf_stryker_m1126_m2_d", "rhsusf_stryker_m1126_m2_d" },
			//Stryker M2 LRAS3
			{ "rhsusf_stryker_m1127_m2_wd", "rhsusf_stryker_m1127_m2_wd", "rhsusf_stryker_m1127_m2_wd", "rhsusf_stryker_m1127_m2_d", "rhsusf_stryker_m1127_m2_d" },
			//Stryker M2 RCWS / Mine Plow
			{ "rhsusf_stryker_m1132_m2_wd", "rhsusf_stryker_m1132_m2_wd", "rhsusf_stryker_m1132_m2_wd", "rhsusf_stryker_m1132_m2_d", "rhsusf_stryker_m1132_m2_d" },
			//M113 Unarmed
			{ "rhsusf_m113_usarmy_unarmed", "rhsusf_m113_usarmy_unarmed", "rhsusf_m113_usarmy_unarmed", "rhsusf_m113d_usarmy_unarmed", "rhsusf_m113d_usarmy_unarmed" },
			//M113 M2
			{ "rhsusf_m113_usarmy", "rhsusf_m113_usarmy", "rhsusf_m113_usarmy", "rhsusf_m113d_usarmy", "rhsusf_m113d_usarmy" },
			//M113 M240
			{ "rhsusf_m113_usarmy_M240", "rhsusf_m113_usarmy_M240", "rhsusf_m113_usarmy_M240", "rhsusf_m113d_usarmy_M240", "rhsusf_m113d_usarmy_M240" }
		};
		ifv[] = {};
		tank[] = {
			//M1A2SEPv1
			{ "rhsusf_m1a2sep1wd_usarmy", "rhsusf_m1a2sep1wd_usarmy", "rhsusf_m1a2sep1wd_usarmy", "rhsusf_m1a2sep1d_usarmy", "rhsusf_m1a2sep1d_usarmy" },
			//M1A2SEPv1 TUSK 1
			{ "rhsusf_m1a2sep1tuskiwd_usarmy", "rhsusf_m1a2sep1tuskiwd_usarmy", "rhsusf_m1a2sep1tuskiwd_usarmy", "rhsusf_m1a2sep1tuskid_usarmy", "rhsusf_m1a2sep1tuskid_usarmy" },
			//M1A2SEPv1 TUSK 2
			{ "rhsusf_m1a2sep1tuskiiwd_usarmy", "rhsusf_m1a2sep1tuskiiwd_usarmy", "rhsusf_m1a2sep1tuskiiwd_usarmy", "rhsusf_m1a2sep1tuskiid_usarmy", "rhsusf_m1a2sep1tuskiid_usarmy" },
			//M1A2SEPv2
			{ "rhsusf_m1a2sep2wd_usarmy", "rhsusf_m1a2sep2wd_usarmy", "rhsusf_m1a2sep2wd_usarmy", "rhsusf_m1a2sep2d_usarmy", "rhsusf_m1a2sep2d_usarmy" }
		};
		
		//RAVN / FLCN
		heli_unarmed[] = {
			//Littlebird
			{ "RHS_MELB_MH6M", "RHS_MELB_MH6M", "RHS_MELB_MH6M", "RHS_MELB_MH6M", "RHS_MELB_MH6M" },
			//OH-6M
			{ "RHS_MELB_H6M", "RHS_MELB_H6M", "RHS_MELB_H6M", "RHS_MELB_H6M", "RHS_MELB_H6M" },
			//UH-60M (Unarmed)
			{ "RHS_UH60M2", "RHS_UH60M2", "RHS_UH60M2", "RHS_UH60M2_d", "RHS_UH60M2_d" }
		};
		heli_armed[] = {
			//Littlebird
			{ "RHS_MELB_AH6M", "RHS_MELB_AH6M", "RHS_MELB_AH6M", "RHS_MELB_AH6M", "RHS_MELB_AH6M" },
			//UH-60M Pylons
			{ "RHS_UH60M_ESSS", "RHS_UH60M_ESSS", "RHS_UH60M_ESSS", "RHS_UH60M_ESSS_d", "RHS_UH60M_ESSS_d" },
			//UH-60M
			{ "RHS_UH60M", "RHS_UH60M", "RHS_UH60M", "RHS_UH60M_d", "RHS_UH60M_d" },
			//Chinook
			{ "RHS_CH_47F", "RHS_CH_47F", "RHS_CH_47F", "RHS_CH_47F_10", "RHS_CH_47F_10" },
			//Chinook (Cargo)
			{ "RHS_CH_47F_cargo", "RHS_CH_47F_cargo", "RHS_CH_47F_cargo", "RHS_CH_47F_10_cargo", "RHS_CH_47F_10_cargo" },
			//AH-64D
			{ "RHS_AH64D_wd", "RHS_AH64D_wd", "RHS_AH64D_wd", "RHS_AH64D", "RHS_AH64D" }
		};
		
		//RPTR
		plane[] = {
			//RHS A10
			{ "RHS_A10", "RHS_A10", "RHS_A10", "RHS_A10", "RHS_A10" },
			//A3 A10
			{ "B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_CAS_01_dynamicLoadout_F" },
			//Black Wasp
			{ "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_F" },
			//Black Wasp (Stealth)
			{ "B_Plane_Fighter_01_Stealth_F", "B_Plane_Fighter_01_Stealth_F", "B_Plane_Fighter_01_Stealth_F", "B_Plane_Fighter_01_Stealth_F", "B_Plane_Fighter_01_Stealth_F" },
			//RHS F22
			{ "rhsusf_f22", "rhsusf_f22", "rhsusf_f22", "rhsusf_f22", "rhsusf_f22" },
			//RHS_C130J
			{ "RHS_C130J", "RHS_C130J", "RHS_C130J", "RHS_C130J", "RHS_C130J" },
			//RHS_C130J Cargo
			{ "RHS_C130J_Cargo", "RHS_C130J_Cargo", "RHS_C130J_Cargo", "RHS_C130J_Cargo", "RHS_C130J_Cargo" }
		};
		
		//KNFS
		boat_unarmed[] = {
			//Assault Boat
			{ "B_Boat_Transport_01_F", "B_Boat_Transport_01_F", "B_Boat_Transport_01_F", "B_Boat_Transport_01_F", "B_Boat_Transport_01_F" },
			//RHIB
			{ "rhsgref_hidf_rhib", "rhsgref_hidf_rhib", "rhsgref_hidf_rhib", "rhsgref_hidf_rhib", "rhsgref_hidf_rhib" }
		};
		boat_armed[] = {
			//Old RHIB
			{ "UK3CB_TKA_B_RHIB", "UK3CB_TKA_B_RHIB", "UK3CB_TKA_B_RHIB", "UK3CB_TKA_B_RHIB", "UK3CB_TKA_B_RHIB" },
			//Old RHIB Gunboat
			{ "UK3CB_TKA_B_RHIB_Gunboat", "UK3CB_TKA_B_RHIB_Gunboat", "UK3CB_TKA_B_RHIB_Gunboat", "UK3CB_TKA_B_RHIB_Gunboat", "UK3CB_TKA_B_RHIB_Gunboat" },
			//Mk. V SOC
			{ "rhsusf_mkvsoc", "rhsusf_mkvsoc", "rhsusf_mkvsoc", "rhsusf_mkvsoc", "rhsusf_mkvsoc" }
		};
	};
	
    // Should be 25
    #include "..\loadout_base.hpp"

	#include "squad_rifleman.hpp"
	#include "squad_lead.hpp"
	#include "squad_medic.hpp"
	#include "squad_ar.hpp"
	#include "squad_aar.hpp"
	#include "squad_at.hpp"
	#include "squad_marksman.hpp"
	#include "squad_aa.hpp"
	#include "squad_grenadier.hpp"

	#include "plt_lead.hpp"
	#include "plt_fac.hpp"
	#include "plt_doctor.hpp"
	#include "plt_interp.hpp"

	#include "ews_lead.hpp"
	#include "ews_comms.hpp"
	#include "ews_comp.hpp"

	#include "mat_lead.hpp"
	#include "mat_gunner.hpp"
	#include "mat_ammo.hpp"

	#include "maa_lead.hpp"
	#include "maa_gunner.hpp"
	#include "maa_ammo.hpp"

	#include "mmg_lead.hpp"
	#include "mmg_gunner.hpp"
	#include "mmg_ammo.hpp"

	#include "mtr_lead.hpp"
	#include "mtr_gunner.hpp"
	#include "mtr_ammo.hpp"

	#include "rcn_lead.hpp"
	#include "rcn_gunner.hpp"
	#include "rcn_ammo.hpp"

	#include "logi_lead.hpp"
	#include "logi_doctor.hpp"
	#include "logi_repair.hpp"

	#include "demo_lead.hpp"
	#include "demo_explosive.hpp"
	#include "demo_defusal.hpp"
	#include "demo_saboteur.hpp"

	#include "lynx_crew.hpp"
	#include "lynx_cmdr.hpp"
	#include "lynx_driver.hpp"
	
	#include "wolf_crew.hpp"
	#include "wolf_cmdr.hpp"
	#include "wolf_driver.hpp"

	#include "ravn_crew.hpp"
	#include "ravn_pilot.hpp"

	#include "flcn_crew.hpp"
	#include "flcn_pilot.hpp"

	#include "rptr_pilot.hpp"

	#include "knfs_crew.hpp"
	#include "knfs_captain.hpp"
	#include "knfs_driver.hpp"

    class Crates {
		#include "..\common_crates\crates.hpp"
		#include "crates\squad.hpp"
		#include "crates\logi.hpp"
		#include "crates\maa.hpp"
		#include "crates\mat.hpp"
		#include "crates\mmg.hpp"
		#include "crates\mtr.hpp"
		#include "crates\rcn.hpp"
        #include "..\common_crates\us_statics.hpp"
    };
	
};