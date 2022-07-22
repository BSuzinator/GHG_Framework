/*======================================
	Loadout for Squad Marksman (usKorea)
======================================*/
class squad_marksman : squad_rifle
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m1_garand";
        laser = "vn_b_m1_garand";
        ammo = "vn_m1_garand_mag";
        bipod = "vn_b_camo_m1_garand";
        
        class Scopes
        {
            magnified = "vn_o_3x_m84";
        };
    };
    
    class Vest : Vest
    {
		// List of item overrides
        vn_carbine_15_mag = 0;
        // List of items
        vn_m1_garand_mag = 15;
    };
};