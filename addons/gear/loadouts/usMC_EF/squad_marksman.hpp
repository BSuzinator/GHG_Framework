/*======================================
	Loadout for Squad Marksman (usMC_EF)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "srifle_DMR_03_tan_F";
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
        EF_30Rnd_65x39_caseless_coy_mag = 0;
        20Rnd_762x51_Mag = 5;
    };
    
};