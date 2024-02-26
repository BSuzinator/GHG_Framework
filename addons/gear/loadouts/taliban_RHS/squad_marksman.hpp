/*======================================
	Loadout for Squad Marksman (taliban)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "vn_sks";
        laser = "";
        ammo = "vn_sks_t_mag";
		bipod = "";
        
    };
    
    class Vest : Vest
    {
        // List of items
        rhs_30Rnd_762x39mm = 0;
        vn_sks_t_mag = 5;
    };
    
    headgear[] = { "LOP_H_Shemag_BLK" };
    facewear = "G_Combat_lxWS";
};