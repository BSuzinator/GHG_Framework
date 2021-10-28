/*======================================
	Loadout for Heli Crew (usArmy)
======================================*/
class helicrew_f : crew_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
        // List of items
		rhs_mag_m67 = 0;
    };
	headgear = "rhsusf_hgu56p_visor_mask_black";
    facewear = "rhsusf_oakley_goggles_clr";
};