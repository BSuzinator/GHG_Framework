/*======================================
	Loadout for Heli Crew (macv)
======================================*/
class helicrew_f : crew_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Uniform : Uniform
    {
        classname[] = { "vn_b_uniform_k2b_02_01", "vn_b_uniform_k2b_02_03" };
    };
	
	class Vest : Vest
    {
        // List of items
		vn_m61_grenade_mag = 0;
    };

	headgear = "vn_b_helmet_svh4_01_04";
    facewear = "vn_b_aviator";
};