/*======================================
	Loadout for Repair Specialist (pmc)
======================================*/
class logi_repair : squad_rifleman
{
    class Uniform : Uniform
	{
		classname = "U_C_Mechanic_01_F";
	};
	
	class Vest : Vest
    {
        // List of items
		ACE_microDAGR = 1;
		ACRE_PRC152 = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_AssaultPack_cbr";
        // List of items
        ToolKit = 1;
        ACE_Fortify = 1;
    };
	facewear = "CUP_G_Scarf_Face_Grn2";
	headgear = "CUP_H_NAPA_Fedora";
};