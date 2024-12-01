class csat_a3_pacific
{
    version = 1;
    
    camo[] = { "green" };
    
    class Magazines
    {
        
    };
    
	class Vehicles {
		//Follow the Camos listed above
		
		//Infantry
		car[] = {
			//Prowler Unarmed
			{ "O_T_LSV_02_unarmed_F" },
			//Prowler Armed HMG
			{ "O_T_LSV_02_armed_F" }			
		};
		troopTruck[] = {
			//Zamak Uncovered
			{ "O_T_Truck_02_transport_F" },
			//Zamak Covered
			{ "O_T_Truck_02_covered_F" },
			//Typhoon Uncovered
			{ "O_T_Truck_03_transport_F" },
			//Typhoon Covered
			{ "O_T_Truck_03_covered_F" }
		};
		mrap[] = {
			//Ifrit
			{ "O_T_MRAP_02_F" },
			//Ifrit Armed
			{ "O_T_MRAP_02_hmg_F" }
		};
		
		//LOGI
		bridgeTrucks[] = {};
		cargoTrucks[] = {
			//Zamak Uncovered
			{ "O_T_Truck_02_transport_F" },
			//Zamak Covered
			{ "O_T_Truck_02_covered_F" },
			//Typhoon Uncovered
			{ "O_T_Truck_03_transport_F" },
			//Typhoon Covered
			{ "O_T_Truck_03_covered_F" }
		};
		rearm[] = {
			//Zamak Ammo
			{ "O_T_Truck_02_Ammo_F" },
			//Typhoon Ammo
			{ "O_T_Truck_03_ammo_F" }
		};
		refuel[] = {
			//Zamak Ammo
			{ "O_T_Truck_02_fuel_F" },
			//Typhoon Ammo
			{ "O_T_Truck_03_fuel_F" }
		};
		repair[] = {
			//Zamak Ammo
			{ "O_T_Truck_02_box_F" },
			//Typhoon Ammo
			{ "O_T_Truck_03_repair_F" }
		};
		
		//LYNX / WOLF
		apc[] = {
			//Marid
			{ "O_T_APC_Wheeled_02_rcws_v2_F" },
			//BTR
			{ "O_T_APC_Tracked_02_cannon_F" }
		};
		ifv[] = {};
		tank[] = {
			//T-100 
			{ "O_T_MBT_02_cannon_F" },
			//T-14 
			{ "O_T_MBT_04_cannon_F" },
			//T-14K
			{ "O_T_MBT_04_command_F" }
		};
		
		//RAVN / FLCN
		heli_unarmed[] = {
			//Orca
			{ "O_Heli_Light_02_unarmed_F" },
			//Taru
			{ "O_Heli_Transport_04_F" },
			//Taru
			{ "O_Heli_Transport_04_bench_F" },
			//Taru
			{ "O_Heli_Transport_04_covered_F" },
			//Taru
			{ "O_Heli_Transport_04_box_F" },
			//Taru
			{ "O_Heli_Transport_04_ammo_F" },
			//Taru
			{ "O_Heli_Transport_04_fuel_F" },
			//Taru
			{ "O_Heli_Transport_04_repair_F" },
			//Taru
			{ "O_Heli_Transport_04_medevac_F" }
		};
		heli_armed[] = {
			//Orca
			{ "O_Heli_Light_02_dynamicLoadout_F" },
			//Taru
			{ "O_Heli_Attack_02_dynamicLoadout_F" }
		};
		
		//RPTR
		plane[] = {
			//CSAT Fighter
			{ "O_Plane_CAS_02_dynamicLoadout_F" },
			//Shirkra
			{ "O_Plane_Fighter_02_F" },
			//Shikra Stealth
			{ "O_Plane_Fighter_02_Stealth_F" },
			//Xian Infantry
			{"O_T_VTOL_02_infantry_dynamicLoadout_F"},
			//Xian Vehicle
			{"O_T_VTOL_02_vehicle_dynamicLoadout_F"}
		};
		
		//KNFS
		boat_unarmed[] = {
			//Assault Boat
			{ "O_T_Boat_Transport_01_F" },
			//RHIB
			{ "I_C_Boat_Transport_02_F" }
		};
		boat_armed[] = {
			//Gunboat
			{ "O_T_Boat_Armed_01_hmg_F" }
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