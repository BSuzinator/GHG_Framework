/*======================================
	Loadout for Squad Marksman (bokoHaram)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_SLR_D_lxWS";
        laser = "";
        ammo = "20Rnd_762x51_slr_desert_lxWS";
		acog = "rhsusf_acc_acog_d";
		bipod = "";
        
    };
    
    class Vest : Vest
    {
        // List of items
        rhs_30Rnd_762x39mm = 0;
        20Rnd_762x51_slr_desert_lxWS = 5;
    };
    
    headgear[] = { "H_Bandanna_sand" };
    facewear = "rhsusf_shemagh2_gogg_tan";
};