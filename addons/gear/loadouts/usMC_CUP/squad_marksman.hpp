/*======================================
	Loadout for Squad Marksman (usMC)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_sfrifle_M110_black";
        laser = "CUP_acc_ANPEQ_15_Black";
        ammo = "CUP_20Rnd_762x51_B_M110";
		bipod = "CUP_bipod_Harris_1A2_L_BLK";
        
        class Scopes : Scopes
        {
            magnified = "CUP_optic_SB_11_4x20_PM";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        CUP_30Rnd_556x45_Stanag = 0;
        CUP_20Rnd_762x51_B_M110 = 5;
    };
    
    headgear[] = { "CUP_H_LWHv2_MARPAT_des_comms", "CUP_H_LWHv2_MARPAT_comms" };
};