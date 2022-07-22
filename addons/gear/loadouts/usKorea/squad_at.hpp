/*======================================
	Loadout for Squad Rifleman(AT) (usKorea)
======================================*/
class squad_at : squad_rifle
{
    class Weapon_1 : Weapon_1
    {
        classname = "vn_m2carbine_gl";
        laser = "";
        grenade = "vn_22mm_m9_heat_mag";
    };
    
	class Vest : Vest
    {
        ACE_MapTools = 1;
        vn_22mm_m9_heat_mag = 4;
    };
};