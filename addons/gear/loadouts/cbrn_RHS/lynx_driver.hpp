/*======================================
	Loadout for Lynx Driver (cbrn)
======================================*/
class lynx_driver : lynx_crew
{
	class Backpack : Backpack
    {
        classname[] = { "B_FieldPack_blk" , "B_FieldPack_oli", "Gendar_Fieldpack"};
        // List of items
        ToolKit = 1;
    };
};