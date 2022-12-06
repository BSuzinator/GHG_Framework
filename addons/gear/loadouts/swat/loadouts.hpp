class swat
{
    version = 1;
    
    class Magazines
    {
        
    };
    
    // Should be 25
    #include "..\loadout_base.hpp"

	#include "squad_rifleman.hpp"
	#include "squad_lead.hpp"
	#include "squad_medic.hpp"

	#include "rcn_lead.hpp"
	#include "rcn_gunner.hpp"
	#include "rcn_ammo.hpp"

	#include "lynx_crew.hpp"

	#include "ravn_crew.hpp"
	#include "ravn_pilot.hpp"

    class Crates {
        #include "..\common_crates\crates.hpp"
		#include "crates\squad.hpp"
		#include "crates\rcn.hpp"
		#include "..\common_crates\us_statics.hpp"
    };
};