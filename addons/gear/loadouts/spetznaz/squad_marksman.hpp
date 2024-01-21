/*======================================
	Loadout for Squad Marksman (russian)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_svds";
        laser = "rhs_acc_2dpzenit";
        ammo = "rhs_10Rnd_762x54mmR_7N1";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        
        class Scopes : Scopes
        {
            magnified = "rhs_acc_pso1m21_svd";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        rhs_30Rnd_545x39_7N10_AK = 0;
        rhs_10Rnd_762x54mmR_7N1 = 10;
    };
    
};