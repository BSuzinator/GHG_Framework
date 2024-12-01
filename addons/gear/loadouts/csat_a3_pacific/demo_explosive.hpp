/*======================================
	Loadout for Explosive Specialist (csat_a3_pacific)
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
        classname = "V_HarnessO_ghex_F";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_FieldPack_ghex_F";
        // List of items
        DemoCharge_Remote_Mag = 4;
		SatchelCharge_Remote_Mag = 1;
    };
};