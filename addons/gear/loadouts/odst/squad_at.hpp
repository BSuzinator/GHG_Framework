/*======================================
	Loadout for Squad Rifleman(AT) (odst)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "OPTRE_M41_SSR";
        ammo = "OPTRE_M41_Twin_HEAT";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};