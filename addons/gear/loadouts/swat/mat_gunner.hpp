/*======================================
	Loadout for SWAT Charlie Rook (Swat)
======================================*/
class mat_gunner : loadout_base_Swat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L128A1";
        ammo = "UK3CB_BAF_12G_Slugs";
        
        class Scopes : Scopes { };
    };
    
    class Vest : Vest
    {
        classname = "SWAT_Modular_Heavy";
        // List of items
		UK3CB_BAF_12G_Slugs = 10;

    };
	
	class Backpack : Backpack
    {
        classname = "B_shield_backpack_lxWS";
    };

};