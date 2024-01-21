/*======================================
	Loadout for SWAT Foxtrot Engineer (Swat)
======================================*/
class rcn_gunner : loadout_base_Swat
{
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "prpl_benelli_14_rail";
        ammo = "prpl_6Rnd_12Gauge_Pellets";
        
        class Scopes : Scopes { };
    };
	
    class Vest : Vest
    {
        prpl_6Rnd_12Gauge_Pellets = 3;
		rhsusf_mag_17Rnd_9x19_JHP = 2;
    };
	
	class Backpack : Backpack
    {
        classname = "Police_LegStrap";
        ACRE_PRC152 = 1;
		Toolkit = 1;
    };
};