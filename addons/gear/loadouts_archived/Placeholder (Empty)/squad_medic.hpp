/*======================================
	Loadout for Squad Medics (placeholder)
======================================*/
class squad_medic : squad_rifleman
{
    class Uniform : Uniform
    {
        classname = "";
    };

    class Vest : Vest
    {
		classname = "";

    };
    
    class Backpack : Backpack
    {
        classname = "";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
	headgear = "";
	facewear = "";
};