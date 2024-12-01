/*======================================
	Loadout for Demo Defusal (Snow Tigers)
======================================*/
class demo_defusal : squad_rifleman
{
	
	class Weapon_2 : Weapon_2 
	{ 
		classname = "ACE_VMH3";
        ammo = "";
		class Scopes {}; 
	};
	
	class Uniform : Uniform
    {

    };
	
	class Vest : Vest
    {
        classname = "IP_V_PlateCarrierGL_rgrSnowTiger";
        // List of items
		ACE_DefusalKit = 1;
    };
    
	class Backpack : Backpack
    {
        classname = "IP_B_Carryall_SnowTiger";
        // List of items
    };
	facewear = "G_Bandanna_aviator";
    headgear = "IP_H_HelmetLeaderO_SnowTiger";
};