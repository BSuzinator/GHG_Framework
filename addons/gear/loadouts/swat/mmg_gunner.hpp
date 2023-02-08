/*======================================
	Loadout for SWAT Delta Sniper (Swat)
======================================*/
class mmg_gunner : loadout_base_Swat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m24sws";
		acog = "rhsusf_acc_leupoldmk4";
		muzzle = "rhsusf_acc_m24_silencer_black";
		bipod = "rhsusf_acc_harris_swivel";
        ammo = "rhsusf_5Rnd_762x51_m118_special_Mag";
        
        class Scopes : Scopes 
		{
			sniper = "rhsusf_acc_leupoldmk4";
			sniper_nvs = "optic_nvs";
		};
    };
	
	class Vest : Vest
	{
		rhsusf_5Rnd_762x51_m118_special_Mag = 5;
		rhsusf_mag_17Rnd_9x19_JHP = 5;
	};

};