/*======================================
	Loadout for SWAT Bravo Grenadier (Swat)
======================================*/
class maa_ammo : loadout_base_Swat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_M4A1_SOMMOD_Grip_black_M203_bk";
        ammo = "UK3CB_ACR_30rnd_556x45";
		grenade = "rhs_mag_m4009";
		scope = "rhsusf_acc_compm4";
        
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

    };
	
	class Backpack : Backpack
	{
		classname = "Police_Messenger_Bag";
		UK3CB_ACR_30rnd_556x45 = 10;
		rhs_mag_m4009 = 10;
		rhs_mag_m714_White = 10;
	};

};