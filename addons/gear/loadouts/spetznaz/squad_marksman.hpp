/*======================================
	Loadout for Squad Marksman (russian)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_SVD";
        laser = "CUP_acc_Zenit_2DS";
        ammo = "CUP_10Rnd_762x54_SVD_M";
		bipod = "rhsusf_acc_harris_bipod";
        
        class Scopes : Scopes
        {
            magnified = "CUP_optic_PSO_1_1";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        CUP_30Rnd_545x39_AK_M = 0;
        CUP_10Rnd_762x54_SVD_M = 10;
    };
    
};