/*======================================
	Loadout for SWAT Charlie Doctor (Swat)
======================================*/
class mat_ammo : loadout_base_Swat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "CUP_arifle_M4A1_SOMMOD_Grip_black_KAC_bk";
        ammo = "UK3CB_ACR_30rnd_556x45";
		acog = "rhsusf_acc_compm4";
        
        class Scopes : Scopes
		{
			dot = "rhsusf_acc_compm4";
			dot_mag = "rhsusf_acc_g33_t1";
			holo = "rhsusf_acc_eotech_xps3";
			holo_mag = "rhsusf_acc_g33_xps3";
		};
    };
	
	class Backpack : Backpack
    {
		classname = "Police_Messenger_Bag";
		#include "..\doctor_bag.hpp"
    };

};