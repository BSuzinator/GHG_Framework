class ldf_a3
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
			{ "I_E_Quadbike_01_F" },
			//Prowler Unarmed
			{ "I_E_Offroad_01_F" },
			//Prowler Unarmed
			{ "I_E_Offroad_01_comms_F" },
			//Prowler Unarmed
			{ "I_E_Offroad_01_covered_F" },
			//Prowler Unarmed
			{ "I_E_Van_02_transport_F" },
			//Prowler Unarmed
			{ "I_E_Van_02_vehicle_F" }
			//Prowler Unarmed
			{ "I_E_Van_02_transport_MP_F" }
		};
		troopTruck[] = {
			//Zamak Uncovered
			{ "I_E_Truck_02_transport_F" },
			//Zamak Covered
			{ "I_E_Truck_02_F" }
		};
		mrap[] = {};
		
		//LOGI
		bridgeTrucks[] = {};
		cargoTrucks[] = {
			//Zamak Uncovered
			{ "I_E_Truck_02_transport_F" },
			//Zamak Covered
			{ "I_E_Truck_02_F" }
		};
		rearm[] = {
			//Zamak Ammo
			{ "I_E_Truck_02_Ammo_F" }
		};
		refuel[] = {
			//Zamak Ammo
			{ "I_E_Truck_02_fuel_F" }
		};
		repair[] = {
			//Zamak Ammo
			{ "I_E_Truck_02_Box_F" }
		};
		
		//LYNX / WOLF
		apc[] = {
			//Gorgon
			{ "I_E_APC_tracked_03_cannon_F" }
		};
		ifv[] = {};
		tank[] = {};
		
		//RAVN / FLCN
		heli_unarmed[] = {
			//Hellcat
			{ "I_E_Heli_light_03_unarmed_F" }
		};
		heli_armed[] = {
			//Hellcat Armed
			{ "I_E_Heli_light_03_dynamicLoadout_F" }
		};
		
		//RPTR
		plane[] = {
			//Buzzard
			{ "I_Plane_Fighter_03_dynamicLoadout_F" },
			//Gripen
			{ "I_Plane_Fighter_04_F" }
		};
		
		//KNFS
		boat_unarmed[] = {
			//Assault Boat
			{ "I_Boat_Transport_01_F" },
			//RHIB
			{ "I_C_Boat_Transport_02_F" },
		};
		boat_armed[] = {
			//Gunboat
			{ "I_Boat_Armed_01_minigun_F" }
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