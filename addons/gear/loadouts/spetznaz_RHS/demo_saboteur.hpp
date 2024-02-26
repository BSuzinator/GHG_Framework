/*======================================
	Loadout for Demo Saboteur (russian)
======================================*/
class demo_saboteur : squad_rifleman
{
	class Vest : Vest
    {
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "rhs_sidor";
        // List of items
        APERSMine_Range_Mag = 2;
        rhs_mine_M3_tripwire_mag = 1;
		rhs_mine_m3_pressure_mag = 1;
		IEDLandSmall_Remote_Mag = 1;
		IEDUrbanSmall_Remote_Mag = 1;
		ACE_FlareTripMine_Mag = 1;
    };
};