/*======================================
	Loadout for Heli Pilot (serbian)
======================================*/
class helipilot_f : helicrew_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
	
	class Vest : Vest
    {
        // List of items
        ACE_microDAGR = 1;
    };
	headgear = "rhsusf_hgu56p_visor_black";
    facewear = "rhsusf_oakley_goggles_clr";
};