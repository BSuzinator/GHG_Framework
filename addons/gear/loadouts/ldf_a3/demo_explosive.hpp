/*======================================
	Loadout for Explosive Specialist (ldf_a3)
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
        classname = "V_CarrierRigKBT_01_heavy_EAF_F";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "B_FieldPack_green_F";
        // List of items
        DemoCharge_Remote_Mag = 4;
		SatchelCharge_Remote_Mag = 1;
    };
};