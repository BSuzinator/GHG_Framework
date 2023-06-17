/*======================================
	Loadout for PLT Lead (Snow Tigers)
======================================*/
class plt_lead : squad_rifleman
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "optic_erco_blk_f";
        };
    };

    class Vest : Vest
    {
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
	{
		classname = "IP_B_AssaultPack_SnowTiger";
	};
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };

};