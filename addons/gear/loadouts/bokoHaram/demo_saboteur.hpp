/*======================================
	Loadout for Demo Saboteur (bokoHaram)
======================================*/
class demo_saboteur : squad_rifleman
{
	class Vest : Vest
    {
        classname[] = { "UK3CB_TKA_B_V_Carrier_Tan" };
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname[] = { "B_Kitbag_desert_lxWS" };
        // List of items
        APERSMine_Range_Mag = 2;
        rhs_mine_M3_tripwire_mag = 1;
		rhs_mine_m3_pressure_mag = 1;
		IEDLandSmall_Remote_Mag = 1;
		IEDUrbanSmall_Remote_Mag = 1;
		ACE_FlareTripMine_Mag = 1;
    };
};