/*======================================
	Loadout for SWAT Delta Spotter (Swat)
======================================*/
class mmg_ammo : loadout_base_Swat
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_ACR_Carbine";
        ammo = "UK3CB_ACR_30rnd_556x45";
		acog = "rhsusf_acc_compm4";
		muzzle = "rhsusf_acc_nt4_black";
		bipod = "rhsusf_acc_harris_bipod";
		laser = "rhsusf_acc_anpeq15side_bk";
        
        class Scopes : Scopes 
		{
			dot = "rhsusf_acc_compm4";
			dot_mag = "rhsusf_acc_g33_t1";
			holo = "rhsusf_acc_eotech_xps3";
			holo_mag = "rhsusf_acc_g33_xps3";
		};
    };

    class Vest : Vest
    {
        classname = "SWAT_Modular_Combat";
        // List of items
        UK3CB_ACR_30rnd_556x45 = 6;
		rhsusf_mag_17Rnd_9x19_JHP = 4;
    };
	
	class Backpack : Backpack
	{
		classname = "Police_Messenger_Bag";
		rhsusf_5Rnd_762x51_m118_special_Mag = 10;
		rhsusf_mag_17Rnd_9x19_JHP = 5;
		
	};
};