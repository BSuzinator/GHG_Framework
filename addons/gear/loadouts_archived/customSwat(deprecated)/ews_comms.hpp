/*======================================
	Loadout for SWAT Alpha Support (Swat)
======================================*/
class ews_comms : loadout_base_Swat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "UK3CB_ACR_Carbine";
        ammo = "UK3CB_ACR_30rnd_556x45";
        acog = "rhsusf_acc_compm4";
		laser = "rhsusf_acc_anpeq15side_bk";
		muzzle = "CUP_muzzle_snds_SCAR_L";
        class Scopes : Scopes
		{
			holo = "rhsusf_acc_eotech_xps3";
			holo_mag = "rhsusf_acc_g33_xps3"; 
			dot = "rhsusf_acc_compm4";
			dot_mag = "rhsusf_acc_g33_t1";
		};
    };
	
    class Vest : Vest
    {
		UK3CB_ACR_30rnd_556x45 = 8;
    };
	
	class Backpack : Backpack
	{
		classname = "ACE_TacticalLadder_Pack";
	}
};