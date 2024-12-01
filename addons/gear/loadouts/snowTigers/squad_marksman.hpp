/*======================================
	Loadout for Squad Marksman (Snow Tigers)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "IP_srifle_DMR_03_SnowHex_F";
        laser = "rhs_acc_perst3";
        ammo = "20Rnd_762x51_Mag";
		bipod = "rhs_acc_harris_swivel";
		muzzle = "muzzle_snds_b";
		
        class Scopes : Scopes
        {
            magnified = "optic_dms";
        };
    };
    
	class Uniform : Uniform
	{
	};
	
    class Vest : Vest
    {
        30Rnd_65x39_caseless_green = 0;
        20Rnd_762x51_Mag = 5;
    };

};