/*======================================
	Loadout for Squad Detective (swat)
	
	By Fawks
======================================*/
class squad_medic : squad_rifleman
{
    class Uniform : Uniform
    {
        classname = "Police_Detective_Unit1";
    };
    
    class Backpack : Backpack
    {
        classname = "Police_Messenger_Bag";
        // List of items
		
        #include "..\medic_bag.hpp"
    };
};