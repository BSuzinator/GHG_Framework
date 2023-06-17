/*======================================
	Loadout for Squad Rifleman(AT) (Snow Tigers)
======================================*/
class squad_at : squad_rifleman
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_rpg26";
        ammo = "rhs_rpg26_mag";
    };
	
	class Uniform : Uniform
    {
		
    };
	
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};