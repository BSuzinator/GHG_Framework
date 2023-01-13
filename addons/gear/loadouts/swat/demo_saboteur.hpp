/*======================================
	Loadout for Demo Saboteur (swat)
======================================*/
class demo_saboteur : squad_rifleman
{
	class Uniform : Uniform 
	{
		classname = "U_C_E_LooterJacket_01_F";
	};
	
	class Vest : Vest
    {
        classname = "UK3CB_AAF_I_V_Falcon_1_DIGI_BLK";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "UK3CB_CW_US_B_LATE_B_RIF_04";
        // List of items
        APERSMine_Range_Mag = 2;
        rhs_mine_M3_tripwire_mag = 1;
		rhs_mine_m3_pressure_mag = 1;
		IEDLandSmall_Remote_Mag = 1;
		IEDUrbanSmall_Remote_Mag = 1;
		ACE_FlareTripMine_Mag = 1;
    };
	headgear = "UK3CB_H_Beanie_02_BLK";
	facewear = "vn_b_bandana_a";
};