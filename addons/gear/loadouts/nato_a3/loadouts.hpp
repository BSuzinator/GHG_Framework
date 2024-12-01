class nato_a3
{
    version = 1;
    
    camo[] = { "mtp", "tropic", "woodland" };
    
    class Magazines
    {
        
    };
    
	class Vehicles {
		//Follow the Camos listed above
		
		//Infantry
		car[] = {
			//Prowler Unarmed
			{ "B_LSV_01_unarmed_F", "B_T_LSV_01_unarmed_F", "B_T_LSV_01_unarmed_F" },
			//Prowler Armed HMG
			{ "B_LSV_01_armed_F", "B_T_LSV_01_armed_F", "B_T_LSV_01_armed_F" }			
		};
		troopTruck[] = {
			//HEMTT Uncovered
			{ "B_Truck_01_transport_F", "B_T_Truck_01_transport_F", "B_T_Truck_01_transport_F" },
			//HEMTT Covered
			{ "B_Truck_01_covered_F", "B_T_Truck_01_covered_F", "B_T_Truck_01_covered_F" }
		};
		mrap[] = {
			//Hunter
			{ "B_MRAP_01_F", "B_T_MRAP_01_F", "B_T_MRAP_01_F" },
			//Hunter Armed
			{ "B_MRAP_01_hmg_F", "B_T_MRAP_01_hmg_F", "B_T_MRAP_01_hmg_F" }
		};
		
		//LOGI
		bridgeTrucks[] = {};
		cargoTrucks[] = {
			//HEMTT Container
			{ "B_Truck_01_box_F", "B_T_Truck_01_box_F", "B_T_Truck_01_box_F" },
			//HEMTT Cargo
			{ "B_Truck_01_cargo_F", "B_T_Truck_01_cargo_F", "B_T_Truck_01_cargo_F" },
			//HEMTT Flatbed
			{ "B_Truck_01_flatbed_F", "B_T_Truck_01_flatbed_F", "B_T_Truck_01_flatbed_F" }
		};
		rearm[] = {
			//HEMTT Ammo
			{ "B_Truck_01_ammo_F", "B_T_Truck_01_ammo_F", "B_T_Truck_01_ammo_F" },
			//Bobcat
			{ "B_APC_Tracked_01_CRV_F", "B_T_APC_Tracked_01_CRV_F", "B_T_APC_Tracked_01_CRV_F" }
		};
		refuel[] = {
			//Unarmed hemmt
			{ "B_Truck_01_fuel_F", "B_T_Truck_01_fuel_F", "B_T_Truck_01_fuel_F" },
			//Bobcat
			{ "B_APC_Tracked_01_CRV_F", "B_T_APC_Tracked_01_CRV_F", "B_T_APC_Tracked_01_CRV_F" }
		};
		repair[] = {
			//Unarmed hemmt
			{ "B_Truck_01_Repair_F", "B_T_Truck_01_Repair_F", "B_T_Truck_01_Repair_F" },
			//Bobcat
			{ "B_APC_Tracked_01_CRV_F", "B_T_APC_Tracked_01_CRV_F", "B_T_APC_Tracked_01_CRV_F" }
		};
		
		//LYNX / WOLF
		apc[] = {
			//Marshall
			{ "B_APC_Wheeled_01_cannon_F", "B_T_APC_Wheeled_01_cannon_F", "B_T_APC_Wheeled_01_cannon_F"},
			//Namer
			{ "B_APC_Tracked_01_rcws_F", "B_T_APC_Tracked_01_rcws_F", "B_T_APC_Tracked_01_rcws_F" }
		};
		ifv[] = {};
		tank[] = {
			//Merkava
			{ "B_MBT_01_cannon_F", "B_T_MBT_01_cannon_F", "B_T_MBT_01_cannon_F" },
			//Merkava Uparmored
			{ "B_MBT_01_TUSK_F", "B_T_MBT_01_TUSK_F", "B_T_MBT_01_TUSK_F" },
			//Rooikat 120
			{ "B_AFV_Wheeled_01_cannon_F", "B_T_AFV_Wheeled_01_cannon_F", "B_T_AFV_Wheeled_01_cannon_F" },
			//Rooikat 120 Uparmored
			{ "B_AFV_Wheeled_01_up_cannon_F", "B_T_AFV_Wheeled_01_up_cannon_F", "B_T_AFV_Wheeled_01_up_cannon_F" }
		};
		
		//RAVN / FLCN
		heli_unarmed[] = {
			//MH-9
			{ "B_Heli_Light_01_F", "B_Heli_Light_01_F", "B_Heli_Light_01_F" },
			//Chinook
			{ "B_Heli_Transport_03_unarmed_F", "B_Heli_Transport_03_unarmed_F", "B_Heli_Transport_03_unarmed_F" }
		};
		heli_armed[] = {
			//Chinook
			{ "B_Heli_Transport_03_F", "B_Heli_Transport_03_F", "B_Heli_Transport_03_F" },
			//Ghost Hawk
			{ "B_Heli_Transport_01_F", "B_Heli_Transport_01_F", "B_Heli_Transport_01_F" },
			//AH-9
			{ "B_Heli_Light_01_dynamicLoadout_F", "B_Heli_Light_01_dynamicLoadout_F", "B_Heli_Light_01_dynamicLoadout_F" },
			//Comanche
			{ "B_Heli_Attack_01_dynamicLoadout_F", "B_Heli_Attack_01_dynamicLoadout_F", "B_Heli_Attack_01_dynamicLoadout_F" }
		};
		
		//RPTR
		plane[] = {
			//A3 A10
			{ "B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_CAS_01_dynamicLoadout_F", "B_Plane_CAS_01_dynamicLoadout_F" }
			//Black Wasp
			{ "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_F", "B_Plane_Fighter_01_F" },
			//Black Wasp (Stealth)
			{ "B_Plane_Fighter_01_Stealth_F", "B_Plane_Fighter_01_Stealth_F", "B_Plane_Fighter_01_Stealth_F", "B_Plane_Fighter_01_Stealth_F", "B_Plane_Fighter_01_Stealth_F" },
			//Blackfish Infantry
			{ "B_T_VTOL_01_infantry_F", "B_T_VTOL_01_infantry_F", "B_T_VTOL_01_infantry_F" },
			//Blackfish Vehicle
			{ "B_T_VTOL_01_vehicle_F", "B_T_VTOL_01_vehicle_F", "B_T_VTOL_01_vehicle_F" },
			//Blackfish Armed
			{ "B_T_VTOL_01_armed_F", "B_T_VTOL_01_armed_F", "B_T_VTOL_01_armed_F" }
		};
		
		//KNFS
		boat_unarmed[] = {
			//Assault Boat
			{ "B_Boat_Transport_01_F", "B_Boat_Transport_01_F" },
			//RHIB
			{ "I_C_Boat_Transport_02_F", "I_C_Boat_Transport_02_F" }
		};
		boat_armed[] = {
			//Gunboat
			{ "B_Boat_Armed_01_minigun_F", "B_Boat_Armed_01_minigun_F" }
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