class usArmyNewTemplate
{
    version = 1;
    
    camo[] = { "erdl", "ocp", "oefcp", "ucp", "ucpd" };
    
    class Magazines
    {
        
    };
    
	class Vehicles {
		//Will follow camos?
		
		//Infantry
		car[] = {
			//Unarmed Humvee (Up-Armored)
			{ "rhsusf_m1151_usarmy_wd", "rhsusf_m1151_usarmy_wd", "rhsusf_m1151_usarmy_wd", "rhsusf_m1151_usarmy_d", "rhsusf_m1151_usarmy_d" },
			{ "rhsusf_m1151_m2_v1_usarmy_wd", "rhsusf_m1151_m2_v1_usarmy_wd", "rhsusf_m1151_m2_v1_usarmy_wd", "rhsusf_m1151_m2_v1_usarmy_d", "rhsusf_m1151_m2_v1_usarmy_d" }
		};
		troopTruck[] = {
			//Unarmed 4 wheel covered truck
			{ "rhsusf_M1078A1P2_WD_fmtv_usarmy", "rhsusf_M1078A1P2_WD_fmtv_usarmy", "rhsusf_M1078A1P2_WD_fmtv_usarmy", "rhsusf_M1078A1P2_D_fmtv_usarmy", "rhsusf_M1078A1P2_D_fmtv_usarmy" }
		};
		mrap[] = {
			//Unarmed mrap
			{ "rhsusf_M1220_usarmy_wd", "rhsusf_M1220_usarmy_wd", "rhsusf_M1220_usarmy_wd", "rhsusf_M1220_usarmy_d", "rhsusf_M1220_usarmy_d" }
		};
		
		//LOGI
		bridgeTrucks[] = {};
		cargoTrucks[] = {};
		rearm[] = {};
		refuel[] = {};
		repair[] = {};
		
		//LYNX / WOLF
		apc[] = {};
		ifv[] = {};
		tank[] = {};
		
		//RAVN / FLCN
		heli_unarmed[] = {};
		heli_armed[] = {};
		
		//RPTR
		plane[] = {};
		
		//KNFS
		boat_unarmed[] = {};
		boat_armed[] = {};
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