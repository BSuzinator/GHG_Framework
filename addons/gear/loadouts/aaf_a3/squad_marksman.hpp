/*======================================
	Loadout for Squad Marksman (aaf_a3)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "srifle_EBR_F";
        ammo = "20Rnd_762x51_Mag";
		bipod = "bipod_03_F_blk";
        
        class Scopes : Scopes
        {
			magnified = "optic_SOS";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        30Rnd_556x45_Stanag = 0;
        20Rnd_762x51_Mag = 5;
    };
    
    headgear = "H_HelmetIA";
    facewear = "G_Lowprofile";
};