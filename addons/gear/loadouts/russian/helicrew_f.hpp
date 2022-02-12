/*======================================
	Loadout for Heli Crew (Russian)
======================================*/
class helicrew_f : crew_f
{
    class Uniform : Uniform
    {
        classname[] = {"rhs_uniform_df15","rhs_uniform_df15","rhs_uniform_df15_tan"};
    };
	
	class Vest : Vest
    {
        // List of items
		rhs_mag_rgo = 0;
    };
	headgear = "rhsusf_hgu56p_visor_mask_black";
    facewear = "rhsusf_oakley_goggles_clr";
};