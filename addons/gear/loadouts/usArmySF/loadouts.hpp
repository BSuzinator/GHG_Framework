class usArmySF
{
    version = 1;
    
    camo[] = { "woodland", "black", "desert" };
    
    class Magazines
    {
        
    };
    
	class Vehicles {
		//Follow the Camos listed above
		
		//Infantry
		car[] = {
			//Unarmed Humvee (Up-Armored)
			{ "CUP_B_M1151_WDL_USA", "CUP_B_M1151_WDL_USA", "CUP_B_M1151_WDL_USA", "CUP_B_M1151_USA", "CUP_B_M1151_USA" },
			//M2 Humvee (Up-Armored)
			{ "CUP_B_M1151_M2_WDL_USA", "CUP_B_M1151_M2_WDL_USA", "CUP_B_M1151_M2_WDL_USA", "CUP_B_M1151_M2_USA", "CUP_B_M1151_M2_USA" },
			//M2 / LRAS3 Humvee (Up-Armored)
			{ "CUP_B_M1165_GMV_WDL_USA", "CUP_B_M1165_GMV_WDL_USA", "CUP_B_M1165_GMV_WDL_USA", "CUP_B_M1165_GMV_USA", "CUP_B_M1165_GMV_USA" },
			//SICPS Humvee (Up-Armored)
			{ "CUP_B_nM1037sc_DF_USA_WDL", "CUP_B_nM1037sc_DF_USA_WDL", "CUP_B_nM1037sc_DF_USA_WDL", "CUP_B_nM1037sc_DF_USA_DES", "CUP_B_nM1037sc_DF_USA_DES" }
		};
		troopTruck[] = {
			//Unarmed 4 wheel covered truck
			{ "CUP_B_MTVR_USMC", "CUP_B_MTVR_USMC", "CUP_B_MTVR_USMC", "CUP_B_MTVR_USA", "CUP_B_MTVR_USA" },
			//Armored 4 wheel covered truck
			{ "CUP_B_RG31_M2_OD_GC_USA", "CUP_B_RG31_M2_OD_GC_USA", "CUP_B_RG31_M2_OD_GC_USA", "CUP_B_RG31_M2_GC_USA", "CUP_B_RG31_M2_GC_USA" },
			//Armored M2 4 wheel covered truck
			{ "CUP_B_RG31_Mk19_OD_USA", "CUP_B_RG31_Mk19_OD_USA", "CUP_B_RG31_Mk19_OD_USA", "CUP_B_RG31_Mk19_USA", "CUP_B_RG31_Mk19_USA" }
		};
		mrap[] = {
			//Unarmed mrap
			{ "CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_M2_USA", "CUP_B_RG31_M2_USA" },
			//M2 mrap
			{ "CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_M2_OD_USMC", "CUP_B_RG31_M2_USA", "CUP_B_RG31_M2_USA" },
			//medevac mrap
			{ "CUP_B_M113A1_Med_USA", "CUP_B_M113A1_Med_USA", "CUP_B_M113A1_Med_USA", "CUP_B_M113A1_Med_desert_USA", "CUP_B_M113A1_Med_desert_USA" }
		};
		
		//LOGI
		bridgeTrucks[] = {};
		cargoTrucks[] = {
			//Unarmed 4 wheel flatbed truck
			{ "CUP_B_MTVR_USMC", "CUP_B_MTVR_USMC", "CUP_B_MTVR_USMC", "CUP_B_MTVR_USA", "CUP_B_MTVR_USA" }
		};
		rearm[] = {
			//Unarmed hemmt
			{ "CUP_B_MTVR_Ammo_USMC", "CUP_B_MTVR_Ammo_USMC", "CUP_B_MTVR_Ammo_USMC", "CUP_B_MTVR_Ammo_USA", "CUP_B_MTVR_Ammo_USA" },
		};
		refuel[] = {
			//Unarmed hemmt
			{ "CUP_B_MTVR_Refuel_USMC", "CUP_B_MTVR_Refuel_USMC", "CUP_B_MTVR_Refuel_USMC", "CUP_B_MTVR_Ammo_USA", "CUP_B_MTVR_Ammo_USA" },
		};
		repair[] = {
			//Unarmed hemmt
			{ "CUP_B_MTVR_Repair_USMC", "CUP_B_MTVR_Repair_USMC", "CUP_B_MTVR_Repair_USMC", "CUP_B_MTVR_Repair_USA", "CUP_B_MTVR_Repair_USA" },
		};
		
		//LYNX / WOLF
		apc[] = {
			//Stryker M2 RCWS
			{ "CUP_B_M1130_CV_M2_Woodland", "CUP_B_M1130_CV_M2_Woodland", "CUP_B_M1130_CV_M2_Woodland", "CUP_B_M1130_CV_M2_Desert", "CUP_B_M1130_CV_M2_Desert" },
			//Stryker M2 LRAS3
			{ "CUP_B_M1126_ICV_M2_Woodland", "CUP_B_M1126_ICV_M2_Woodland", "CUP_B_M1126_ICV_M2_Woodland", "CUP_B_M1126_ICV_M2_Desert", "CUP_B_M1126_ICV_M2_Desert" },
			//M113 Unarmed
			{ "CUP_B_M113A3_HQ_USA", "CUP_B_M113A3_HQ_USA", "CUP_B_M113A3_HQ_USA", "CUP_B_M113A3_HQ_desert_USA", "CUP_B_M113A3_HQ_desert_USA" },
			//M113 M2
			{ "CUP_B_M113A3_USA", "CUP_B_M113A3_USA", "CUP_B_M113A3_USA", "CUP_B_M113A3_desert_USA" },
		};
		ifv[] = {};
		tank[] = {
			//M1A2SEPv1
			{ "CUP_B_M1A2SEP_Woodland_US_Army", "CUP_B_M1A2SEP_Woodland_US_Army", "CUP_B_M1A2SEP_Woodland_US_Army", "CUP_B_M1A2SEP_Desert_US_Army", "CUP_B_M1A2SEP_Desert_US_Army" },
			//M1A2SEPv1 TUSK 1
			{ "CUP_B_M1A2SEP_TUSK_Woodland_US_Army", "CUP_B_M1A2SEP_TUSK_Woodland_US_Army", "CUP_B_M1A2SEP_TUSK_Woodland_US_Army", "CUP_B_M1A2SEP_TUSK_Desert_US_Army", "CUP_B_M1A2SEP_TUSK_Desert_US_Army" },
			//M1A2SEPv1 TUSK 2
			{ "CUP_B_M1A2SEP_TUSK_II_Woodland_US_Army", "CUP_B_M1A2SEP_TUSK_II_Woodland_US_Army", "CUP_B_M1A2SEP_TUSK_II_Woodland_US_Army", "CUP_B_M1A2SEP_TUSK_II_Desert_US_Army", "CUP_B_M1A2SEP_TUSK_II_Desert_US_Army" },
			//M1A2SEPv2
			{ "CUP_B_M1A2C_Woodland_US_Army", "CUP_B_M1A2C_Woodland_US_Army", "CUP_B_M1A2C_Woodland_US_Army", "CUP_B_M1A2C_Desert_US_Army", "CUP_B_M1A2C_Desert_US_Army" }
		};
		
		//RAVN / FLCN
		heli_unarmed[] = {
			//Littlebird
			{ "CUP_B_AH6M_USA", "CUP_B_AH6M_USA", "CUP_B_AH6M_USA", "CUP_B_AH6M_USA", "CUP_B_AH6M_USA" },
			//OH-6M
			{ "CUP_B_AH6X_USA", "CUP_B_AH6X_USA", "CUP_B_AH6X_USA", "CUP_B_AH6X_USA", "CUP_B_AH6X_USA" },
			//UH-60M (Unarmed)
			{ "CUP_B_UH60M_Unarmed_US", "CUP_B_UH60M_Unarmed_US", "CUP_B_UH60M_Unarmed_US", "RHS_UH60M2_d", "RHS_UH60M2_d" }
		};
		heli_armed[] = {
			//Littlebird
			{ "CUP_B_AH6M_USA", "CUP_B_AH6M_USA", "CUP_B_AH6M_USA", "CUP_B_AH6M_USA", "CUP_B_AH6M_USA" },
			//UH-60M Pylons
			{ "CUP_B_MH60L_DAP_2x_USN", "CUP_B_MH60L_DAP_2x_USN", "CUP_B_MH60L_DAP_2x_USN", "CUP_B_MH60L_DAP_4x_US", "CUP_B_MH60L_DAP_4x_US" },
			//UH-60M
			{ "CUP_B_UH60M_US", "CUP_B_UH60M_US", "CUP_B_UH60M_US", "CUP_B_UH60M_US", "CUP_B_UH60M_US" },
			//Chinook
			{ "CUP_B_MH47E_USA", "CUP_B_MH47E_USA", "CUP_B_MH47E_USA", "CUP_B_CH47F_USA", "CUP_B_CH47F_USA" },
			//Chinook (Cargo)
			{ "CUP_B_CH47F_VIV_USA", "CUP_B_CH47F_VIV_USA", "CUP_B_CH47F_VIV_USA", "CUP_B_CH47F_VIV_USA", "CUP_B_CH47F_VIV_USA" },
			//AH-64D
			{ "CUP_B_AH64D_DL_USA", "CUP_B_AH64D_DL_USA", "CUP_B_AH64D_DL_USA", "CUP_B_AH64D_DL_USA", "CUP_B_AH64D_DL_USA" }
		};
		
		//RPTR
		plane[] = {
			//RHS A10
			{ "CUP_B_A10_DYN_USA", "CUP_B_A10_DYN_USA", "CUP_B_A10_DYN_USA", "CUP_B_A10_DYN_USA", "CUP_B_A10_DYN_USA" },
			//A3 A10
			{ "CUP_B_A10_DYN_USA", "CUP_B_A10_DYN_USA", "CUP_B_A10_DYN_USA", "CUP_B_A10_DYN_USA", "CUP_B_A10_DYN_USA" },
			//Black Wasp
			{ "CUP_B_F35B_USMC", "CUP_B_F35B_USMC", "CUP_B_F35B_USMC", "CUP_B_F35B_USMC", "CUP_B_F35B_USMC" },
			//Black Wasp (Stealth)
			{ "CUP_B_F35B_Stealth_USMC", "CUP_B_F35B_Stealth_USMC", "CUP_B_F35B_Stealth_USMC", "CUP_B_F35B_Stealth_USMC", "CUP_B_F35B_Stealth_USMC" },
			//RHS F22
			{ "CUP_B_AV8B_DYN_USMC", "CUP_B_AV8B_DYN_USMC", "CUP_B_AV8B_DYN_USMC", "CUP_B_AV8B_DYN_USMC", "CUP_B_AV8B_DYN_USMC" },
			//RHS_C130J
			{ "CUP_B_C130J_USMC", "CUP_B_C130J_USMC", "CUP_B_C130J_USMC", "CUP_B_C130J_USMC", "CUP_B_C130J_USMC" },
			//RHS_C130J Cargo
			{ "CUP_B_C130J_Cargo_USMC", "CUP_B_C130J_Cargo_USMC", "CUP_B_C130J_Cargo_USMC", "CUP_B_C130J_Cargo_USMC", "CUP_B_C130J_Cargo_USMC" }
		};
		
		//KNFS
		boat_unarmed[] = {
			//Assault Boat
			{ "B_Boat_Transport_01_F", "B_Boat_Transport_01_F", "B_Boat_Transport_01_F", "B_Boat_Transport_01_F", "B_Boat_Transport_01_F" },
			//RHIB
			{ "CUP_B_RHIB_USMC", "CUP_B_RHIB_USMC", "CUP_B_RHIB_USMC", "CUP_B_RHIB_USMC", "CUP_B_RHIB_USMC" }
		};
		boat_armed[] = {
			//Old RHIB
			{ "CUP_B_RHIB2Turret_USMC", "CUP_B_RHIB2Turret_USMC", "CUP_B_RHIB2Turret_USMC", "CUP_B_RHIB2Turret_USMC", "CUP_B_RHIB2Turret_USMC" },
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