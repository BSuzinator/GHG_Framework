/*======================================
	Loadout for Explosive Specialist (usArmy)
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
        classname[] = { "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_OCP_Rifleman_USArmy", "CUP_V_B_IOTV_UCP_Rifleman_USArmy", "CUP_V_B_IOTV_UCP_Rifleman_USArmy" };
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_OCP", "CUP_B_US_IIID_UCP", "CUP_B_US_IIID_UCP" };
        // List of items
        DemoCharge_Remote_Mag = 3;
        DemoCharge_Remote_Mag = 3;
		SatchelCharge_Remote_Mag = 1;
    };
};