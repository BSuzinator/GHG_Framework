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
        CUP_30Rnd_762x39_AK47_bakelite_M = 0;
        vn_sks_t_mag = 5;
    };
    
    headgear[] = { "CUP_H_TKI_Lungee_02" };
    facewear = "G_Combat_lxWS";
};