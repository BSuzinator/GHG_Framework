/*======================================
	Loadout for MMG Gunner (Snow Tigers)
======================================*/
class mmg_gunner : squad_rifleman
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "IP_MMG_01_SnowHex_F";
        ammo = "150Rnd_93x64_Mag";
        bipod = "rhs_acc_harris_swivel";
		muzzle = "muzzle_snds_93mmg";
		class Scopes : Scopes
        {
            mg_optic = "CUP_optic_ElcanM145";
        };
    };
	
	class Uniform : Uniform
    {
    };
	
	class Vest : Vest
    {
        // List of items
		30Rnd_65x39_caseless_green = 0;
		150Rnd_93x64_Mag = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        150Rnd_93x64_Mag = 3;
    };

};