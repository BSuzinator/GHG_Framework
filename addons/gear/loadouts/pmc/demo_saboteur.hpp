/*======================================
	Loadout for Demo Saboteur (pmc)
======================================*/
class demo_saboteur : squad_rifleman
{
	class Uniform : Uniform 
	{
		classname = "U_C_E_LooterJacket_01_F";
	};
	
	class Vest : Vest
    {
        classname = "CUP_V_PMC_IOTV_Black_Empty";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "CUP_B_USPack_Black";
        // List of items
        APERSMine_Range_Mag = 2;
        APERSTripMine_Wire_Mag = 1;
		APERSBoundingMine_Range_Mag = 1;
		IEDLandSmall_Remote_Mag = 1;
		IEDUrbanSmall_Remote_Mag = 1;
		ACE_FlareTripMine_Mag = 1;
    };
	headgear = "CUP_H_PMC_Beanie_Headphones_Black";
	facewear = "vn_b_bandana_a";
};