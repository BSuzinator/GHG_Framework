/*======================================
	Loadout for Squad Marksman (bokoHaram)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_FNFAL5060_railed_sand";
        laser = "";
        ammo = "CUP_20Rnd_762x51_FNFAL_Desert_M";
		acog = "CUP_optic_ACOG_Reflex_Desert";
		bipod = "";
        
    };
    
    class Vest : Vest
    {
        // List of items
        CUP_30Rnd_762x39_AK47_bakelite_M = 0;
        CUP_20Rnd_762x51_FNFAL_Desert_M = 5;
    };
    
    headgear[] = { "H_Bandanna_sand" };
    facewear = "CUP_G_ESS_KHK_Scarf_Tan";
};