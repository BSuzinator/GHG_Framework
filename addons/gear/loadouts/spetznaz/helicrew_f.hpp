/*======================================
	Loadout for Heli Crew (spetznaz)
======================================*/
class helicrew_f : crew_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
        // List of items
		rhs_mag_rgd5 = 0;
    };

	headgear = "rhsusf_hgu56p_visor_mask_black";
};