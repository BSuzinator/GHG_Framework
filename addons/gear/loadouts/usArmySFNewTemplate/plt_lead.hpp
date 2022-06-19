/*======================================
	Loadout for PLT Lead (usArmySF)
======================================*/
class plt_lead : squad_rifle
{
    

    class Weapon_1 : Weapon_1 // Rifle
    {
        
        class Scopes : Scopes
        {
            acog = "rhsusf_acc_su230_mrds";
        };
    };
    
    class Vest : Vest
    {
		classname = "rhsusf_mbav_grenadier";
        // List of items
        ACRE_PRC152 = 1;
		ACE_MapTools = 1;
		ACE_EntrenchingTool = 0;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Binocular";
    };
	
    headgear[] = { "rhsusf_mich_bare_norotos_arc_alt_headset", "rhsusf_mich_helmet_marpatwd_norotos_arc_headset", "rhsusf_mich_bare_norotos_arc_alt_tan_headset" };
};