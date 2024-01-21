/*======================================
	Loadout for Squad Marksman (pmc)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_SLR_V_lxWS";
        laser = "";
        ammo = "20Rnd_762x51_slr_lxWS";
		bipod = "";
		
        class Scopes : Scopes
        {
            magnified = "rhsusf_acc_acog";
        };
    };
    
	class Uniform : Uniform
	{
		classname = "U_lxWS_ION_Casual1";
	};
	
    class Vest : Vest
    {
        // List of items
        CUP_20Rnd_762x51_B_SCAR = 0;
        20Rnd_762x51_slr_lxWS = 5;
    };
    
	facewear = "CUP_G_ESS_KHK_Scarf_Face_Tan";
	headgear = "H_Watchcap_blk";
};