/*======================================
	Loadout for Watch Commander (Swat)
======================================*/
class plt_lead : squad_rifleman
{
	class Uniform : Uniform
    {
		classname = "Police_Captain_Unit";
    };
	
	class Vest : Vest
	{
		classname = "Police_OfficerVest";
		UK3CB_ACR_30rnd_556x45 = 5;
		vn_m1895_mag = 5;
		ACRE_PRC152 = 1;
	};	
	
    class Weapon_1 : Weapon_1 // Rifle
    {
		classname = "rhs_weap_m27iar";
		ammo = "UK3CB_ACR_30rnd_556x45";
		scope = "rhsusf_acc_mrds";
		
			class Scopes : Scopes
			{
				red_dot = "optic_yorris";
				holo = "rhsusf_acc_eotech_xps3";
				alt_holo = "rhsusf_acc_rm05";
			};
    };
	
	class Weapon_2 : Weapon_2
	{
		classname = "rhsusf_weap_m1911a1";
		ammo = "rhsusf_mag_7x45acp_MHP";
		
	};

};