class unsc
{
    version = 1;
    
    camo[] = { "WDL", "SNO" };
    
    class Magazines
    {
        
    };
    class Vehicles {
		
		//Infantry
		car[] = {
			//MG Hog 
			{ "OPTRE_M12_LRV" },
			//Rocket Hog
			{ "OPTRE_M12A1_LRV" },
			//AA Hog
			{ "OPTRE_M12R_AA" },
			//GAUSS Hog
			{ "OPTRE_M12G1_LRV" },
			//Mongoose
			{ "OPTRE_M274_ATV" },
			//APC Hog
			{ "OPTRE_M12_FAV_APC" },
			//Transport Hog
			{ "OPTRE_M813_TT" },
			//Medic Hog
			{ "OPTRE_M12_FAV_APC_MED" },
			//Logi Hog
			{ "OPTRE_M914_RV" },
			//Loading Cart
			{ "OPTRE_cart" }
			
		};
		troopTruck[] = {
			//Covered truck
			{ "OPTRE_m1087_stallion_cover_unsc" },
			//Uncovered truck
			{ "OPTRE_m1087_stallion_unsc" },
			//Covered Medical
			{ "OPTRE_m1087_stallion_unsc_medical" }
		};
		mrap[] = {
			
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
			//Elephant (RRR)
			{"OPTRE_M313_UNSC"}
		};
		rearm[] = {
			//Stallion (ammo)
			{ "OPTRE_m1087_stallion_unsc_resupply" }
		};
		refuel[] = {
			//Stallion (fuel)
			{ "OPTRE_m1087_stallion_unsc_refuel" }
			
		};
		repair[] = {
			//Stallion (repair)
			{ "OPTRE_m1087_stallion_unsc_repair" }
			
		};
		
		//LYNX / WOLF
		apc[] = {
			//Bison (IFV)
			{ "OPTRE_M412_IFV_UNSC" },
			//Bison (MGS)
			{ "OPTRE_M413_MGS_UNSC" },
			//Oryx (IFV)
			{ "OPTRE_M494" }
			
		};
		ifv[] = {
			
		};
		tank[] = {
			//Scorpion
			{ "OPTRE_M808B_UNSC" },
			//Scorpion (turret)
			{ "OPTRE_M808BM_UNSC" },
			//Sun Devil (AA)
			{ "OPTRE_M808B2" }
			
		};
		
		//RAVN / FLCN
		heli_unarmed[] = {
			//Falcon
			{ "OPTRE_UNSC_falcon_unarmed" },
			//Pelican
			{ "OPTRE_Pelican_unarmed" }
			
		};
		heli_armed[] = {
			//Falcon
			{ "OPTRE_UNSC_falcon" },
			//Pelican
			{ "OPTRE_Pelican_armed" },
			//Hornet
			{ "OPTRE_UNSC_hornet" },
			//Sparrowhawk
			{ "OTPRE_AV22_Sparrowhawk" },
			//Sparrowhawk A
			{ "OTPRE_AV22A_Sparrowhawk" },
			//Sparrowhawk B
			{ "OTPRE_AV22B_Sparrowhawk" },
			//Sparrowhawk C
			{ "OTPRE_AV22C_Sparrowhawk" }
			
		};
		
		//RPTR
		plane[] = {
			//YSS-1000-A
			{ "OPTRE_YSS_1000_A" },
			//YSS-1000-A (VTOL)
			{ "OPTRE_YSS_1000_A_VTOL" }
		};
		
		//KNFS
		boat_unarmed[] = {
			//Catfish (unarmed)
			{ "optre_catfish_unarmed_f" }
		};
		boat_armed[] = {
			//Catfish
			{ "optre_catfish_mg_f" }
			
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