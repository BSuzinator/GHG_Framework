/*======================================
	Loadout for Squad Marksman (ldf_a3)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_MSBS65_Mark_black_F";
        ammo = "30Rnd_65x39_caseless_msbs_mag";
		bipod = "bipod_01_F_blk";
        
        class Scopes : Scopes
        {
			magnified = "optic_SOS";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        30Rnd_65x39_caseless_msbs_mag = 0;
        30Rnd_65x39_caseless_msbs_mag = 5;
    };
    
    headgear = "H_HelmetHBK_F";
    facewear = "G_Lowprofile";
};