/*======================================
	Loadout for Demo Saboteur (unsc)
======================================*/
class demo_saboteur : squad_rifleman
{
	class Vest : Vest
    {
        classname = "OPTRE_UNSC_M52A_Armor2_URB";
        // List of items
		ACE_DefusalKit = 1;
		ACE_Clacker = 1;
		ACE_M26_Clacker = 1;
    };
	
	class Backpack : Backpack
    {
        classname = "OPTRE_UNSC_Rucksack_Heavy";
        // List of items
        APERSMine_Range_Mag = 2;
        USNCMine_Range_Mag = 2;
		IEDLandSmall_Remote_Mag = 1;
		IEDUrbanSmall_Remote_Mag = 1;
		ACE_FlareTripMine_Mag = 1;
    };
};