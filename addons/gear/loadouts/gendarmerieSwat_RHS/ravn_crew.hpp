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
		CUP_HandGrenade_M67 = 0;
    };
	headgear = "H_CrewHelmetHeli_B";
    facewear = "CUP_G_ESS_BLK";
};