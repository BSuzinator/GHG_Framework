/*======================================
	Loadout for Explosive Specialist (Russian)
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
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
		ACE_Fortify = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "rhs_assault_umbts";
        // List of items
        rhssaf_tm500_mag = 2;
        rhssaf_tm200_mag = 4;
		SatchelCharge_Remote_Mag = 1;
    };
};