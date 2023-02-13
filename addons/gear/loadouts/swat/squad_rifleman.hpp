/*======================================
	Loadout for Rifleman (swat)
	
	By Fawks
======================================*/
class squad_rifleman : loadout_base_Police
{
    class Uniform : Uniform
    {
        classname = "Police_uniform_Officer1";
    };
    
    class Vest : Vest
    {
        classname = "Police_Rangemaster_Combo";
        // List of items
		ACE_CableTie = 5;
		ACE_M84 = 3;
    };
    
	class Binoculars : Binoculars
    {
        classname = "Camera_lxWS";
    };
	
    headgear = "Patrol_Cap_Badge";
    facewear = "G_Aviator";
};