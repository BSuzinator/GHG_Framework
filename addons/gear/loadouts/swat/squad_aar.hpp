/*======================================
	Loadout for Squad Containment Autorifleman (swat)
======================================*/
class squad_aar : squad_rifleman
{
    class Uniform : Uniform
    {
        classname = "Police_uniform_Officer";
    };
	
	class Vest : Vest
    {
		classname = "Police_Rangemaster";
        ACE_MapTools = 0;
    };
	
    class Backpack : Backpack
    {
        classname = "Police_LegStrap";
        // List of items
        ACE_SpareBarrel = 0;
        rhsusf_200Rnd_556x45_soft_pouch = 0;
		ACE_Canteen = 0;
		ACE_CableTie = 10;
    };
	
	class Binoculars : Binoculars
    {
        classname = "Camera_lxWS";
    };
	
	headgear = "Patrol_Cap_Badge";
    facewear = "G_Aviator";
};