/*======================================
	Loadout for Heli Pilot (Boko Haram)
======================================*/
class helipilot_f : helicrew_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
        // List of items
        ACE_microDAGR = 1;
    };
	headgear = "H_PilotHelmetHeli_I";
    facewear = "G_Combat_lxWS";
};