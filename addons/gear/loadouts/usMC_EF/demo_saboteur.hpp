/*======================================
	Loadout for Demo Saboteur (usMC_EF)
======================================*/
class demo_saboteur : squad_rifleman
{
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
        APERSMine_Range_Mag = 2;
        APERSTripMine_Wire_Mag = 1;
		ATMine_Range_Mag = 1;
		IEDLandSmall_Remote_Mag = 1;
		IEDUrbanSmall_Remote_Mag = 1;
		ACE_FlareTripMine_Mag = 1;
    };
};