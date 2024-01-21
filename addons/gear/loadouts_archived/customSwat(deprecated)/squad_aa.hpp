/*======================================
	Loadout for Squad AA (swat)
======================================*/
class squad_aa : squad_rifleman
{
	class Vest : Vest
    {
        // Inherited item overrides
        rhs_mag_20rnd_scar_762x51_m80_ball_bk = 0;
        SmokeShell = 1;
        ACE_M84 = 1;
        // List of items
        ACE_CableTie = 0;
    };
};