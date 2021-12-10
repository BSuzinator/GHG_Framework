/*======================================
	Loadout for Heli Crew (Boko Haram)
======================================*/
class helicrew_f : crew_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
        // List of items
		rhs_mag_m67 = 0;
    };
	headgear = "H_CrewHelmetHeli_I";
    facewear = "G_Combat_lxWS";
};