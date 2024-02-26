/*======================================
	Loadout for Demo Saboteur (gendamarieSwat)
======================================*/
class demo_saboteur : squad_rifleman
{
	class Vest : Vest
    {
        classname = "V_TacVest_gen_F";
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
		GHG_spikeStripItem = 2;
    };
};