/*======================================
	Loadout for Ravn Crew (vnSwat)
======================================*/
class ravn_crew : lynx_crew
{
    class Weapon_3 : Weapon_3 // Launcher
    {
        classname = "vn_m127";
        ammo = "vn_m128_mag";
    };
    
	class Uniform : Uniform
    {
        classname[] = { "vn_b_uniform_k2b_02_01", "vn_b_uniform_k2b_02_03" };
    };
	
	class Vest : Vest
    {
        // List of item overrides
		vn_m61_grenade_mag = 0;
    };

	headgear = "vn_b_helmet_svh4_01_04";
    facewear = "vn_b_aviator";
};