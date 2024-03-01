/*======================================
	Loadout for Crew (taliban)
======================================*/
class lynx_crew : squad_rifleman
{
	
	class Vest : Vest
    {
        // List of items
        rhs_30Rnd_762x39mm = 4;
        SmokeShell = 1;
		SmokeShellGreen = 1;
		SmokeShellRed = 1;
        CUP_HandGrenade_M67 = 1;
        ACE_EntrenchingTool = 0;
    };
	headgear[] = { "LOP_H_Villager_cap" };
    facewear[] = { "G_Combat_lxWS" };
};