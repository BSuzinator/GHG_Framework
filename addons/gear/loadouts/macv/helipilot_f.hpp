/*======================================
	Loadout for Heli Pilot (macv)
======================================*/
class helipilot_f : helicrew_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
        // List of items
        ACE_microDAGR = 1;
    };
    
	headgear = "vn_b_helmet_svh4_01_06";
};