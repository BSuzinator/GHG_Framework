/*======================================
	Loadout for Squad Marksman (baf)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_BAF_L129A1";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "UK3CB_BAF_762_L42A1_20Rnd";
		bipod = "rhsusf_acc_harris_bipod";
        
        class Scopes : Scopes
        {
            magnified = "rhsusf_acc_acog";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        UK3CB_BAF_556_30Rnd = 0;
        UK3CB_BAF_762_L42A1_20Rnd = 5;
    };
    
};