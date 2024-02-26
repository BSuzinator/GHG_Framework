/*======================================
	Loadout for Ravn Crew (gendamarieSwat)
======================================*/
class ravn_crew : lynx_crew
{
    class Uniform : Uniform
	{
		classname = "U_B_HeliPilotCoveralls";
	};
	
	class Vest : Vest
    {
        // List of items
		rhs_mag_m67 = 0;
    };
	headgear = "rhsusf_hgu56p_visor_mask_black";
    facewear = "rhsusf_oakley_goggles_clr";
};