/*======================================
	Loadout for Repair Specialist (gendamarieSwat)
======================================*/
class logi_repair : squad_rifleman
{
    
	
	class Vest : Vest
    {
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_blk";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
		GHG_spikeStripItem = 2;
    };
};