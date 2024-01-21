class baf
{
    version = 1;
    camo[] = { "mtp", "arctic", "tropical", "woodland", "desert" };
    
    class Magazines
    {
        
    };
    
	class Vehicles {
		//Follow the Camos listed above
		
		//Infantry
		car[] = {
			//LandRover SoftTop
			{ "CUP_B_LR_Transport_GB_W", "CUP_B_LR_Transport_GB_W", "CUP_B_LR_Transport_GB_W", "CUP_B_LR_Transport_GB_W", "CUP_B_LR_Transport_GB_D" },
			//LandRover HardTop
			{ "CUP_B_LR_MG_GB_W", "CUP_B_LR_MG_GB_W", "CUP_B_LR_MG_GB_W", "CUP_B_LR_MG_GB_W", "CUP_B_LR_MG_GB_D" },
			//Land Rover Ambulance
			{ "CUP_B_LR_Ambulance_GB_W", "CUP_B_LR_Ambulance_GB_W", "CUP_B_LR_Ambulance_GB_W", "CUP_B_LR_Ambulance_GB_W", "CUP_B_LR_Ambulance_GB_D" },
		};
		troopTruck[] = {
			//Unarmed 4 wheel troop truck
			{ "CUP_B_MTVR_BAF_WOOD", "CUP_B_MTVR_BAF_WOOD", "CUP_B_MTVR_BAF_WOOD", "CUP_B_MTVR_BAF_WOOD", "CUP_B_MTVR_BAF_DES" },
		};
		mrap[] = {
			//Husky
			{ "CUP_B_LR_Ambulance_GB_W", "CUP_B_LR_Ambulance_GB_W", "CUP_B_LR_Ambulance_GB_W", "CUP_B_LR_Ambulance_GB_W", "CUP_B_Ridgback_LMG_GB_D" }
		};
		cargoTrucks[] = {
			//Logistics Husky
			{ "CUP_B_Mastiff_LMG_GB_W", "CUP_B_Mastiff_LMG_GB_W", "CUP_B_Mastiff_LMG_GB_W", "CUP_B_Mastiff_LMG_GB_W", "CUP_B_Mastiff_LMG_GB_D" },
			//Unarmed 4 wheel flatbed truck
			{ "UK3CB_BAF_MAN_HX60_Cargo_Green_A", "UK3CB_BAF_MAN_HX60_Cargo_Green_A", "UK3CB_BAF_MAN_HX60_Cargo_Green_A", "UK3CB_BAF_MAN_HX60_Cargo_Green_A", "UK3CB_BAF_MAN_HX60_Cargo_Sand_A" },
			//Unarmed 6 wheel flatbed truck
			{ "UK3CB_BAF_MAN_HX58_Cargo_Green_A", "UK3CB_BAF_MAN_HX58_Cargo_Green_A", "UK3CB_BAF_MAN_HX58_Cargo_Green_A", "UK3CB_BAF_MAN_HX58_Cargo_Green_A", "UK3CB_BAF_MAN_HX58_Cargo_Sand_A" }
		};
		rearm[] = {
			{ "CUP_B_MTVR_Ammo_BAF_WOOD", "CUP_B_MTVR_Ammo_BAF_WOOD", "CUP_B_MTVR_Ammo_BAF_WOOD", "CUP_B_MTVR_Ammo_BAF_WOOD", "CUP_B_MTVR_Ammo_BAF_DES" }
		};
		refuel[] = {
			{ "CUP_B_MTVR_Refuel_BAF_WOOD", "CUP_B_MTVR_Refuel_BAF_WOOD", "CUP_B_MTVR_Refuel_BAF_WOOD", "CUP_B_MTVR_Refuel_BAF_WOOD", "CUP_B_MTVR_Refuel_BAF_DES" }
		};
		repair[] = {
			{ "CUP_B_MTVR_Repair_BAF_WOOD", "CUP_B_MTVR_Repair_BAF_WOOD", "CUP_B_MTVR_Repair_BAF_WOOD", "CUP_B_MTVR_Repair_BAF_WOOD", "CUP_B_MTVR_Repair_BAF_DES" }
		};
		
		//LYNX / WOLF
		apc[] = {
			//Bulldog HMG/WRS
			{ "CUP_B_FV432_Bulldog_GB_W_RWS", "CUP_B_FV432_Bulldog_GB_W_RWS", "CUP_B_FV432_Bulldog_GB_W_RWS", "CUP_B_FV432_Bulldog_GB_W_RWS", "CUP_B_FV432_Bulldog_GB_D_RWS" }
		};
		ifv[] = {

		};
		tank[] = {

		};
		
		//RAVN / FLCN
		heli_unarmed[] = {
			//Unarmed Wildcat
			{ "CUP_B_AH1_DL_BAF", "CUP_B_AH1_DL_BAF", "CUP_B_AH1_DL_BAF", "CUP_B_AH1_DL_BAF", "CUP_B_AH1_DL_BAF" },
			//Merlin HC3 18
			{ "CUP_B_Merlin_HC3_GB", "CUP_B_Merlin_HC3_GB", "CUP_B_Merlin_HC3_GB", "CUP_B_Merlin_HC3_GB", "CUP_B_Merlin_HC3_GB" },
			//UH-60M (Unarmed)
			{ "CUP_B_UH60M_Unarmed_US", "CUP_B_UH60M_Unarmed_US", "CUP_B_UH60M_Unarmed_US", "CUP_B_UH60M_Unarmed_US", "CUP_B_UH60M_Unarmed_US" }
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
			{ "CUP_B_C130J_GB", "CUP_B_C130J_GB", "CUP_B_C130J_GB", "CUP_B_C130J_GB", "CUP_B_C130J_GB" },
			//RHS_C130J Cargo
			{ "CUP_B_C130J_Cargo_GB", "CUP_B_C130J_Cargo_GB", "CUP_B_C130J_Cargo_GB", "CUP_B_C130J_Cargo_GB", "CUP_B_C130J_Cargo_GB" }
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