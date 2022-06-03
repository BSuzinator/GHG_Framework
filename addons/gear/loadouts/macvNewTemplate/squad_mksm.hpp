/*======================================
	Loadout for Squad Marksman (macv)
======================================*/
class squad_mksm : squad_rifle
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_m14_camo";
        laser = "vn_b_m14";
        ammo = "vn_m14_mag";
		bipod = "";
        
        class Scopes : Scopes
        {
            magnified = "vn_o_9x_m14";
        };
    };
    
    class Vest : Vest
    {
		// List of items
        vn_m16_20_mag = 0;
        vn_m14_mag = 5;
    };
};