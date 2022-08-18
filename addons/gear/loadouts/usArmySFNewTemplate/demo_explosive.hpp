/*======================================
	Loadout for Explosive Specialist (usArmySF)
======================================*/
class demo_explosive : squad_rifleman
{
    

    class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Vest : Vest
    {
        classname = "rhsusf_mbav_Rifleman";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
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