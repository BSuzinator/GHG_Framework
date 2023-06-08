/*======================================
	Loadout for Ravn Pilot (Snow Tigers)
======================================*/
class ravn_pilot : ravn_crew
{
    class Uniform : Uniform
	{
		classname = "IP_U_O_HeliPilotCoveralls_SnowHex";
	};
	
	class Vest : Vest
    {
        // List of items
        ACE_microDAGR = 1;
    };
	headgear = "IP_H_PilotHelmetHeli_O_Snow";
    facewear = "G_Balaclava_blk";
};