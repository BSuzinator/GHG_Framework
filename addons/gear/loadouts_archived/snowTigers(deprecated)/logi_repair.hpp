/*======================================
	Loadout for Repair Specialist (Snow Tigers)
======================================*/
class logi_repair : squad_rifleman
{
    class Uniform : Uniform
	{
	};
	
	class Vest : Vest
    {
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "IP_B_AssaultPack_SnowTiger";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };

};