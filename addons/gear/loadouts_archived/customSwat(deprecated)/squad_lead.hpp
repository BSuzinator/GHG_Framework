/*======================================
	Loadout for Squad Leads (swat)
	
	By Fawks
======================================*/
class squad_lead : squad_rifleman
{
	class Uniform : Uniform
    {
        classname = "Police_uniform_Officer3";
    };
	
    class Vest : Vest
    {
		ACRE_PRC148 = 1;
    };
};