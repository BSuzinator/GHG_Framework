/*======================================
	Loadout for Squad Rifleman(AT) (serbian)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_M80";
        ammo = "rhs_m80_mag";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};