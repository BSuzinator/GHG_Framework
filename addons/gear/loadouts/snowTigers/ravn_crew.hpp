/*======================================
	Loadout for Ravn Crew (Snow Tigers)
======================================*/
class ravn_crew : lynx_crew
{
    class Uniform : Uniform
	{
		classname = "IP_U_O_HeliPilotCoveralls_SnowHex";
	};
	
	class Vest : Vest
    {
        // List of items
		rhs_mag_m67 = 0;
    };
	headgear = "IP_H_PilotHelmetHeli_O_Snow";
    facewear = "G_Balaclava_blk";
};