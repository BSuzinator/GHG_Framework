/*======================================
	Loadout for Squad Grenedier (usArmy RHS)
======================================*/
class squad_grenadier : squad_lead
{
	class Weapon_1 : Weapon_1 // Rifle
    {
		 class Scopes : Scopes
        {
            red_dot = "rhsusf_acc_compm4";
            holo = "rhsusf_acc_eotech_xps3";
			alt_holo = "";
            red_dot_magnified = "rhsusf_acc_g33_t1";
            holo_magnified = "rhsusf_acc_g33_xps3";
            holo_alt_camo[] = { "rhsusf_acc_eotech_552_wd", "rhsusf_acc_eotech_552", "rhsusf_acc_eotech_552_d" };
        };
    };
	class Vest : Vest
    {
        ACE_MapTools = 0;
		ACE_EntrenchingTool = 0;
		ACRE_PRC152 = 0;
    };
	class Backpack : Backpack
    {
        rhs_mag_M441_HE = 30;
		rhs_mag_M585_white = 0;
        rhs_mag_m661_green = 0;
        rhs_mag_m662_red = 0;
        rhs_mag_m713_Red = 0;
        rhs_mag_m715_Green = 0;
        rhs_mag_m714_White = 0;
		
    };
	class Binoculars : Binoculars
	{
		classname = "";
	};
};