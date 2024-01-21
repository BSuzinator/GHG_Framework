/*======================================
	Loadout for SWAT Bravo Marksman (Swat)
======================================*/
class maa_gunner : loadout_base_Swat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_sr25";
        ammo = "rhsusf_20Rnd_762x51_SR25_m118_special_Mag";
		acog = "rhsusf_acc_acog";
        
        class Scopes : Scopes
		{
			holo = "rhsusf_acc_eotech_xps3";
			holo_mag = "rhsusf_acc_g33_xps3"; 
			dot = "rhsusf_acc_compm4";
			dot_mag = "rhsusf_acc_g33_t1";
			acog = "rhsusf_acc_acog";
			
		};
    };

    class Vest : Vest
    {
		rhsusf_20Rnd_762x51_SR25_m118_special_Mag = 10;
    };
};