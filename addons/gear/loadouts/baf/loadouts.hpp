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
			{ "UK3CB_BAF_LandRover_Soft_Green_A", "UK3CB_BAF_LandRover_Soft_Arctic_A", "UK3CB_BAF_LandRover_Soft_Green_A", "UK3CB_BAF_LandRover_Soft_Green_B", "UK3CB_BAF_LandRover_Soft_Sand_A" },
			//LandRover HardTop
			{ "UK3CB_BAF_LandRover_Hard_Green_A", "UK3CB_BAF_LandRover_Hard_Arctic_A", "UK3CB_BAF_LandRover_Hard_Green_A", "UK3CB_BAF_LandRover_Hard_Green_B", "UK3CB_BAF_LandRover_Hard_Sand_A" },
			//LandRover HardTop FFR
			{ "UK3CB_BAF_LandRover_Hard_FFR_Green_A", "UK3CB_BAF_LandRover_Hard_FFR_Arctic_A", "UK3CB_BAF_LandRover_Hard_FFR_Green_A", "UK3CB_BAF_LandRover_Hard_FFR_Green_B", "UK3CB_BAF_LandRover_Hard_FFR_Sand_A" },
			//Land Rover Ambulance
			{ "UK3CB_BAF_LandRover_Amb_Green_A", "UK3CB_BAF_LandRover_Amb_Green_A", "UK3CB_BAF_LandRover_Amb_Green_A", "UK3CB_BAF_LandRover_Amb_Green_A", "UK3CB_BAF_LandRover_Amb_Sand_A" },
			//Panther CLV GPMG
			{ "UK3CB_BAF_Panther_GPMG_Green_A", "UK3CB_BAF_Panther_GPMG_Green_A", "UK3CB_BAF_Panther_GPMG_Green_A", "UK3CB_BAF_Panther_GPMG_Green_A", "UK3CB_BAF_Panther_GPMG_Sand_A" }
		};
		troopTruck[] = {
			//Unarmed 4 wheel troop truck
			{ "UK3CB_BAF_MAN_HX60_Transport_Green", "UK3CB_BAF_MAN_HX60_Transport_Green", "UK3CB_BAF_MAN_HX60_Transport_Green", "UK3CB_BAF_MAN_HX60_Transport_Green", "UK3CB_BAF_MAN_HX60_Transport_Sand" },
			//Unarmed 6 wheel troop truck
			{ "UK3CB_BAF_MAN_HX58_Transport_Green", "UK3CB_BAF_MAN_HX58_Transport_Green", "UK3CB_BAF_MAN_HX58_Transport_Green", "UK3CB_BAF_MAN_HX58_Transport_Green", "UK3CB_BAF_MAN_HX58_Transport_Sand" }
		};
		mrap[] = {
			//Husky
			{ "UK3CB_BAF_Husky_Passenger_GPMG_Green", "UK3CB_BAF_Husky_Passenger_GPMG_Green", "UK3CB_BAF_Husky_Passenger_GPMG_Green", "UK3CB_BAF_Husky_Passenger_GPMG_Green", "UK3CB_BAF_Husky_Passenger_GPMG_Sand" }
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
			//Logistics Husky
			{ "UK3CB_BAF_Husky_Logistics_GPMG_Green", "UK3CB_BAF_Husky_Logistics_GPMG_Green", "UK3CB_BAF_Husky_Logistics_GPMG_Green", "UK3CB_BAF_Husky_Logistics_GPMG_Green", "UK3CB_BAF_Husky_Logistics_GPMG_Sand" },
			//Unarmed 4 wheel flatbed truck
			{ "UK3CB_BAF_MAN_HX60_Cargo_Green_A", "UK3CB_BAF_MAN_HX60_Cargo_Green_A", "UK3CB_BAF_MAN_HX60_Cargo_Green_A", "UK3CB_BAF_MAN_HX60_Cargo_Green_A", "UK3CB_BAF_MAN_HX60_Cargo_Sand_A" },
			//Unarmed 6 wheel flatbed truck
			{ "UK3CB_BAF_MAN_HX58_Cargo_Green_A", "UK3CB_BAF_MAN_HX58_Cargo_Green_A", "UK3CB_BAF_MAN_HX58_Cargo_Green_A", "UK3CB_BAF_MAN_HX58_Cargo_Green_A", "UK3CB_BAF_MAN_HX58_Cargo_Sand_A" }
		};
		rearm[] = {
			//None in faction
		};
		refuel[] = {
			//Unarmed 4 wheel flatbed truck
			{ "UK3CB_BAF_MAN_HX60_Fuel_Green", "UK3CB_BAF_MAN_HX60_Fuel_Green", "UK3CB_BAF_MAN_HX60_Fuel_Green", "UK3CB_BAF_MAN_HX60_Fuel_Green", "UK3CB_BAF_MAN_HX60_Fuel_Sand" },
			//Unarmed 6 wheel flatbed truck
			{ "UK3CB_BAF_MAN_HX58_Fuel_Green", "UK3CB_BAF_MAN_HX58_Fuel_Green", "UK3CB_BAF_MAN_HX58_Fuel_Green", "UK3CB_BAF_MAN_HX58_Fuel_Green", "UK3CB_BAF_MAN_HX58_Fuel_Sand" }
		};
		repair[] = {
			//Unarmed 4 wheel flatbed truck
			{ "UK3CB_BAF_MAN_HX60_Repair_Green", "UK3CB_BAF_MAN_HX60_Repair_Green", "UK3CB_BAF_MAN_HX60_Repair_Green", "UK3CB_BAF_MAN_HX60_Repair_Green", "UK3CB_BAF_MAN_HX60_Repair_Sand" },
			//Unarmed 6 wheel flatbed truck
			{ "UK3CB_BAF_MAN_HX58_Repair_Green", "UK3CB_BAF_MAN_HX58_Repair_Green", "UK3CB_BAF_MAN_HX58_Repair_Green", "UK3CB_BAF_MAN_HX58_Repair_Green", "UK3CB_BAF_MAN_HX58_Repair_Sand" }
		};
		
		//LYNX / WOLF
		apc[] = {
			//Bulldog HMG/WRS
			{ "UK3CB_BAF_FV432_Mk3_RWS_Green", "UK3CB_BAF_FV432_Mk3_RWS_Green", "UK3CB_BAF_FV432_Mk3_RWS_Green", "UK3CB_BAF_FV432_Mk3_RWS_Green", "UK3CB_BAF_FV432_Mk3_RWS_Sand" }
		};
		ifv[] = {
			//Warrior w/ Slats
			{ "UK3CB_BAF_Warrior_A3_W_Cage", "UK3CB_BAF_Warrior_A3_W_Cage", "UK3CB_BAF_Warrior_A3_W_Cage", "UK3CB_BAF_Warrior_A3_W_Cage", "UK3CB_BAF_Warrior_A3_D_Cage" }
		};
		tank[] = {
			//None in Faction
		};
		
		//RAVN / FLCN
		heli_unarmed[] = {
			//Unarmed Wildcat
			{ "UK3CB_BAF_Wildcat_AH1_TRN_8A", "UK3CB_BAF_Wildcat_AH1_TRN_8A", "UK3CB_BAF_Wildcat_AH1_TRN_8A", "UK3CB_BAF_Wildcat_AH1_TRN_8A", "UK3CB_BAF_Wildcat_AH1_TRN_8A" },
			//Merlin HC3 18
			{ "UK3CB_BAF_Merlin_HC3_18", "UK3CB_BAF_Merlin_HC3_18", "UK3CB_BAF_Merlin_HC3_18", "UK3CB_BAF_Merlin_HC3_18", "UK3CB_BAF_Merlin_HC3_18" },
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
			{ "UK3CB_BAF_Hercules_C4_MTP", "UK3CB_BAF_Hercules_C4_Arctic", "UK3CB_BAF_Hercules_C4_Tropical", "UK3CB_BAF_Hercules_C3_DPMW", "UK3CB_BAF_Hercules_C3_DPMW" },
			//RHS_C130J Cargo
			{ "UK3CB_BAF_Hercules_C4_cargo_MTP", "UK3CB_BAF_Hercules_C4_cargo_Arctic", "UK3CB_BAF_Hercules_C4_cargo_Tropical", "UK3CB_BAF_Hercules_C3_cargo_DPMW", "UK3CB_BAF_Hercules_C3_cargo_DPMW" }
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