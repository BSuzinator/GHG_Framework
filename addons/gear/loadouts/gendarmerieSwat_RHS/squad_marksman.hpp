/*======================================
	Loadout for Squad Marksman (gendamarieSwat)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_sr25_ec";
        laser = "rhsusf_acc_anpeq15_bk";
        ammo = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
		bipod = "rhsusf_acc_harris_bipod";
		muzzle = "rhsusf_acc_aac_762sd_silencer";
        
        class Scopes : Scopes
        {
            magnified = "rhsusf_acc_acog";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        UK3CB_FAMAS_25rnd_556x45 = 0;
        rhsusf_20Rnd_762x51_SR25_m118_special_Mag = 5;
    };
    
    headgear = "UK3CB_ANP_B_H_6b27m_BLK";
    facewear = "rhsusf_oakley_goggles_clr";
};