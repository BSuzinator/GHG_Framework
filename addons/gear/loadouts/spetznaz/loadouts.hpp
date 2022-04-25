class spetznaz
{
    camo[] = { "desert", "woodland", "snow", "diving" };
    
    class Magazines {};
    
    // Should be 24
    #include "..\loadout_base.hpp"
    #include "soldier_f.hpp"
    #include "soldier_lat_f.hpp"
    #include "soldier_ar_f.hpp"
    #include "soldier_aar_f.hpp"
    #include "soldier_tl_f.hpp"
    #include "soldier_sl_f.hpp"
    #include "medic_f.hpp"
    #include "soldier_uav_f.hpp"
    #include "soldier_lite_f.hpp"
	#include "soldier_unarmed_f.hpp"
    #include "crew_f.hpp"
    #include "helicrew_f.hpp"
    #include "helipilot_f.hpp"
    #include "officer_f.hpp"
    #include "pilot_f.hpp"
    #include "sniper_f.hpp"
    #include "soldier_aat_f.hpp"
    #include "soldier_at_f.hpp"
    #include "soldier_a_f.hpp"
    #include "soldier_exp_f.hpp"
    #include "soldier_repair_f.hpp"
    #include "spotter_f.hpp"
    #include "support_amort_f.hpp"
    #include "support_mg_f.hpp"
    #include "support_mort_f.hpp"
    
    class Crates {
        #include "..\common_crates\crates.hpp"
    };
};