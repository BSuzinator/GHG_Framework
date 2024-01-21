class swat
{
    version = 1;
    
    camo[] = {" "};
    
    class Magazines
    {
        
    };
    class Vehicles {
		car[] = {
			{ "EM_Police_Charger" },
			{ "EM_Police_CrownVic" },
			{ "EM_Police_Explorer" },
			{ "EM_Police_Raptor" },
			{ "EM_Police_Savana" },
			{ "EM_Police_Taurus" },
			{ "EM_Police_Civic" },
			{ "EM_Police_BMWM5" },
			{ "EM_Police_BMWX6" },
			{ "EM_Malibu" }
		};
		troopTruck[] = {
			{ "EM_Police_Explorer_UM" },
			{ "EM_Police_Raptor_UM" },
			{ "EM_Police_Taurus_UM" },
			{ "EM_Police_BMWX6_UM" },
			{ "EM_Malibu_UM" }
		};
		mrap[] = {
			{ "EM_Police_Insurgent" },
			{ "EM_Police_F550_SWAT" }
		};
		
		bridgeTrucks[] = {};
		cargoTrucks[] = {};
		rearm[] = {};
		refuel[] = {};
		repair[] = {};
			
		apc[] = {};
		ifv[] = {};
		tank[] = {};
			
		heli_unarmed[] = {};
		heli_armed[] = {};
			
		plane[] = {};
			
		boat_unarmed[] = {};
		boat_armed[] = {};
	};
	
    // Should be 25
    #include "..\loadout_base.hpp"
	#include "loadout_base_Swat.hpp"
	#include "loadout_base_Police.hpp"

	#include "squad_rifleman.hpp"
	#include "squad_lead.hpp"
	#include "squad_medic.hpp"
	#include "squad_ar.hpp"
	#include "squad_aar.hpp"
	#include "squad_marksman.hpp"

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
    class Crates {
		#include "..\common_crates\crates.hpp"
		#include "crates\police.hpp"
		#include "crates\swat.hpp"
		#include "crates\weapons.hpp"
		#include "crates\paramedic.hpp"
		#include "..\common_crates\us_statics.hpp"
    };
};