class usMC_EF
{
    version = 1;
    
    camo[] = { "Woodland", "Desert"};
    
    class Magazines
    {
        
    };
    
	class Vehicles {
		//Follow the Camos listed above
		
		//Infantry
		car[] = {
			//Prowler Unarmed
			{ "B_LSV_01_unarmed_F", "B_T_LSV_01_unarmed_F" },
			//Prowler Armed HMG
			{ "B_LSV_01_armed_F", "B_T_LSV_01_armed_F" }			
		};
		troopTruck[] = {
			//HEMTT Uncovered
			{ "EF_B_Truck_01_transport_MJTF_Wdl", "EF_B_Truck_01_transport_MJTF_Des" },
			//HEMTT Covered
			{ "EF_B_Truck_01_covered_MJTF_Wdl", "EFB_T_Truck_01_covered_MJTF_Des"}
		};
		mrap[] = {
			//Hunter
			{ "EF_B_MRAP_01_MJTF_Wdl", "EF_B_MRAP_01_MJTF_Des" },
			//Hunter Armed
			{ "EF_B_MRAP_01_hmg_MJTF_Wdl", "EF_B_T_MRAP_01_hmg_MJTF_Des" }
		};
		
		//LOGI
		bridgeTrucks[] = {};
		cargoTrucks[] = {
			//HEMTT Container
			{ "EF_B_Truck_01_box_MJTF_Wdl", "EF_B_T_Truck_01_box_MJTF_Des" },
			//HEMTT Cargo
			{ "EF_B_Truck_01_cargo_MJTF_Wdl", "EF_B_Truck_01_cargo_MJTF_Des" },
			//HEMTT Flatbed
			{ "EF_B_Truck_01_flatbed_MJTF_Wdl", "EF_B_T_Truck_01_flatbed_MJTF_Des" }
		};
		rearm[] = {
			//HEMTT Ammo
			{ "EF_B_Truck_01_ammo_MJTF_Wdl", "EF_B_Truck_01_ammo_MJTF_Des" }
		};
		refuel[] = {
			//Unarmed hemmt
			{ "EF_B_Truck_01_fuel_MJTF_Wdl", "EF_B_T_Truck_01_fuel_MJTF_Des" }
		};
		repair[] = {
			//Unarmed hemmt
			{ "EF_B_Truck_01_Repair_MJTF_Wdl", "EF_B_T_Truck_01_Repair_MJTF_Des" }
			
		};
		
		//LYNX / WOLF
		apc[] = {
			//AAV
			{ "EF_B_AAV9_MJTF_Wdl", "EF_B_AAV9_MJTF_Des"},
			//AAV 50mm
			{ "EF_B_AAV9_50mm_MJTF_Wdl", "EF_B_AAV9_50mm_MJTF_Des" }
		};
		ifv[] = {};
		tank[] = {
			//Merkava M
			{ "EF_B_MBT_01_cannon_MJTF_Wdl", "EF_B_T_MBT_01_cannon_MJTF_Des" },
			//Merkava LIC
			{ "EF_B_MBT_01_TUSK_MJTF_Wdl", "EF_B_MBT_01_TUSK_MJTF_Des" }
		};
		
		//RAVN / FLCN
		heli_armed[] = {
			//Ghost Hawk
			{ "EF_B_Heli_Transport_01_F", "B_Heli_Transport_01_F"},
			//Python
			{ "EF_B_AH99J_MJTF_Wdl", "EF_B_AH99J_MJTF_Des" },
			//Comanche
			{ "EF_B_Heli_Attack_01_dynamicLoadout_MJTF_Wdl", "EF_B_Heli_Attack_01_dynamicLoadout_MJTF_Des" }
		};
		
		//RPTR
		plane[] = {
			//A10
			{ "B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_CAS_01_dynamicLoadout_F" },
			//FA-181
			{ "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_F" },
			//FA-181 Stealth
			{ "B_Plane_Fighter_01_Stealth_F", "B_Plane_Fighter_01_Stealth_F" }
			
		};
		
		//KNFS
		boat_unarmed[] = {
			//Assault Boat
			{ "EF_B_Boat_Transport_01_MJTF_Wdl", "EF_B_Boat_Transport_01_MJTF_Des" },
			//Rescue Boat
			{ "EF_B_Lifeboat_MJTF_Wdl", "EF_B_Lifeboat_MJTF_Des" },
			//Combat Boat
			{ "EF_B_CombatBoat_Unarmed_MJTF_Wdl", "EF_B_CombatBoat_Unarmed_MJTF_Des" }
		};
		boat_armed[] = {
			//Speedboat Minigun
			{ "EF_B_Boat_Armed_01_minigun_MJTF_Wdl", "EF_B_Boat_Armed_01_minigun_MJTF_Des" },
			//Combat Boat HMG
			{ "EF_B_CombatBoat_HMG_MJTF_Wdl", "EF_B_CombatBoat_HMG_MJTF_Des" },
			//Combat Boat AT
			{ "EF_B_CombatBoat_AT_MJTF_Wdl", "EF_B_CombatBoat_AT_MJTF_Des" }
		};
	};
	
    // Should be 52
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