/*======================================
	Loadout for Squad Rifleman(AT) (usArmy)
======================================*/
class squad_at : squad_rifle
{
    

    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "rhs_weap_M136";
        ammo = "rhs_m136_mag";
    };
	class Vest : Vest
    {
        ACE_MapTools = 1;
    };
};