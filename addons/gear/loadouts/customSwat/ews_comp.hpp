/*======================================
	Loadout for SWAT Alpha Breacher (Swat)
======================================*/
class ews_comp : loadout_base_Swat
{

    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "prpl_benelli_rail";
        ammo = "prpl_8Rnd_12Gauge_Pellets";
        
        class Scopes : Scopes { };
    };
	
    class Vest : Vest
    {
        prpl_8Rnd_12Gauge_Pellets = 6;
		tsp_frameCharge_mag = 2
		tsp_popperCharge_mag = 1
		tsp_stickCharge_mag = 1
    };

};