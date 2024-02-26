/*======================================
	Loadout for Squad Rifleman(AT) (gendamarieSwat)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "CUP_launch_M72A6";
        ammo = "CUP_M72A6_M";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
	
	class Backpack : Backpack
	{
		GHG_spikeStripItem = 0;
	};
};