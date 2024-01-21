/*======================================
	Loadout for Squad Marksman (baf)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L129A1";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "UK3CB_BAF_762_L42A1_20Rnd";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        
        class Scopes : Scopes
        {
            magnified = "CUP_optic_RCO";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        UK3CB_BAF_556_30Rnd = 0;
        UK3CB_BAF_762_L42A1_20Rnd = 5;
    };
    
};