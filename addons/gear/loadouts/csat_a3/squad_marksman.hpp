/*======================================
	Loadout for Squad Marksman (csat_a3)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "srifle_DMR_01_F";
        laser = "ACE_acc_pointer_green";
        ammo = "10Rnd_762x54_Mag";
		bipod = "bipod_02_F_blk";
        
        class Scopes : Scopes
        {
            magnified = "optic_DMS";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        30Rnd_65x39_caseless_green = 0;
        10Rnd_762x54_Mag = 5;
    };
    
    headgear[] = { "H_HelmetO_ocamo", "H_HelmetO_oucamo" };
    facewear = "G_Combat";
};