/*======================================
	Loadout for Explosive Specialist (taliban)
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
        classname[] = { "LOP_V_CarrierLite_TAN" };
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "LOP_ISTS_Fieldpack_PKM" };
        // List of items
        
        DemoCharge_Remote_Mag = 3;
		SatchelCharge_Remote_Mag = 1;
    };
};