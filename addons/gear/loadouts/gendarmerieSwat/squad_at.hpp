/*======================================
	Loadout for Squad Rifleman(AT) (gendamarieSwat)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_m72a7";
        ammo = "rhs_m72a7_mag";
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