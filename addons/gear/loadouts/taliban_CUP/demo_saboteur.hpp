/*======================================
	Loadout for Demo Saboteur (taliban)
======================================*/
class demo_saboteur : squad_rifleman
{
	class Vest : Vest
    {
        classname[] = { "CUP_V_B_JPC_Tan_Light" };
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_FieldPack_cbr" };
        // List of items
        APERSMine_Range_Mag = 2;
        APERSTripMine_Wire_Mag = 1;
		APERSBoundingMine_Range_Mag = 1;
		IEDLandSmall_Remote_Mag = 1;
		IEDUrbanSmall_Remote_Mag = 1;
		ACE_FlareTripMine_Mag = 1;
    };
};