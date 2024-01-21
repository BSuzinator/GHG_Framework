/*======================================
	Loadout for Squad Medics (Snow Tigers)
======================================*/
class squad_medic : squad_rifleman
{
    class Uniform : Uniform
    {

    };

    class Vest : Vest
    {

    };
    
    class Backpack : Backpack
    {
        classname = "IP_B_FieldPack_SnowTiger";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};