/*======================================
	Loadout for Heli Crew (macv)
======================================*/
class helicrew_f : crew_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Uniform : Uniform
    {
        classname[] = { "vn_b_uniform_heli_01_01", "rhs_uniform_FROG01_wd" };
    };
	
	class Vest : Vest
    {
        // List of items
		vn_m61_grenade_mag = 0;
    };

	headgear = "vn_b_helmet_svh4_01_01";
    facewear = "vn_b_aviator";
};