/*======================================
	Loadout for Explosive Specialist (usMC_EF)
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
        classname =  "EF_V_AAV_Rifleman_Coy";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "EF_B_Kitbag_coy";
        // List of items
        DemoCharge_Remote_Mag = 4;
		SatchelCharge_Remote_Mag = 1;
    };
};