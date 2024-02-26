/*======================================
	Loadout for Squad Marksman (gendamarieSwat)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_srifle_Mk12SPR";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "CUP_20Rnd_556x45_Stanag";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
		muzzle = "CUP_muzzle_snds_Mk12";
        
        class Scopes : Scopes
        {
            magnified = "CUP_optic_RCO";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        CUP_25Rnd_556x45_Famas = 0;
        CUP_20Rnd_556x45_Stanag = 5;
    };
    
    headgear = "CUP_H_RUS_6B47_SF_headset_black";
    facewear = "CUP_G_ESS_BLK";
};