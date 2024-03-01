/*======================================
	Loadout for Squad Marksman (baf)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_L129A1";
        laser = "CUP_acc_ANPEQ_15_Flashlight_Black_L";
        ammo = "CUP_20Rnd_762x51_L129_M";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        
        class Scopes : Scopes
        {
            magnified = "CUP_optic_ACOG_TA01B_Black";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        CUP_30Rnd_556x45_Stanag_L85 = 0;
        CUP_20Rnd_762x51_L129_M = 5;
    };
    
};