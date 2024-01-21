/*======================================
	Loadout for Explosive Specialist (usArmySF)
======================================*/
class soldier_exp_f : soldier_f
{
    

    class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Vest : Vest
    {
        classname = "CUP_V_B_Interceptor_Base_M81";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
		ACE_Fortify = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_rgr", "B_Kitbag_rgr", "B_Kitbag_tan" };
        // List of items
        rhsusf_m112x4_mag = 1;
        rhsusf_m112_mag = 3;
		SatchelCharge_Remote_Mag = 1;
    };
};