/*======================================
	Loadout for Demo Defusal (usKorea)
======================================*/
class demo_defusal : squad_rifle
{
	class Vest : Vest
    {
        classname[] = { "V_EOD_olive_F", "V_EOD_coyote_F" };
        // List of items
		ACE_DefusalKit = 1;
    };
    
    headgear = "lxWS_H_PASGT_goggles_white_F";
};