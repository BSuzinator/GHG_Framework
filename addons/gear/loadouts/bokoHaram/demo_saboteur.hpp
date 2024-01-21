/*======================================
	Loadout for Demo Saboteur (bokoHaram)
======================================*/
class demo_saboteur : squad_rifleman
{
	class Vest : Vest
    {
        classname[] = { "CUP_V_B_MTV_Mine" };
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "CUP_B_AssaultPack_Coyote" };
        // List of items
        APERSMine_Range_Mag = 2;
        APERSTripMine_Wire_Mag = 1;
		CUP_Mine_M = 1;
		IEDLandSmall_Remote_Mag = 1;
		IEDUrbanSmall_Remote_Mag = 1;
		ACE_FlareTripMine_Mag = 1;
    };
};