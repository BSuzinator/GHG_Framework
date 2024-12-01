/*======================================
	Loadout for Squad Marksman (nato_a3)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "srifle_DMR_03_tan_F", "srifle_DMR_03_khaki_F", "srifle_DMR_03_F" };
        laser = "acc_pointer_IR";
        ammo = "20Rnd_762x51_Mag";
		bipod[] = { "bipod_01_F_snd", "bipod_01_F_khk", "bipod_01_F_blk" };
        
        class Scopes : Scopes
        {
            magnified[] = { "optic_SOS", "optic_SOS_khk_F", "optic_SOS" };
        };
    };
    
    class Vest : Vest
    {
        // List of items
        30Rnd_65x39_caseless_black_mag = 0;
        20Rnd_762x51_Mag = 5;
    };
    
    headgear[] = { "H_HelmetSpecB_snakeskin", "H_HelmetB_Enh_tna_F", "H_HelmetSpecB_wdl" };
    facewear = "G_Tactical_Clear";
};