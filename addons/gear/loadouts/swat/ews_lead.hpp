/*======================================
	Loadout for SWAT Alpha Lead (Swat)
======================================*/
class ews_lead : loadout_base_Swat
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m4a1_blockII_KAC_bk";
        ammo = "UK3CB_ACR_30rnd_556x45";
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
		UK3CB_ACR_30rnd_556x45 = 8;
		rhsusf_mag_17Rnd_9x19_JHP = 5;
    };
	
	class Backpack : Backpack
    {
        classname = "SWAT_Modular_litePack";
        
        ACRE_PRC152 = 1;
    };
};