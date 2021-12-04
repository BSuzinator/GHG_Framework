/*======================================
	Loadout for FAC (macv)
======================================*/
class soldier_uav_f : soldier_tl_f
{
    #include "..\loadout_inherit.hpp" // This must the first line inside of the class!!!!
    
    class Backpack : Backpack
    {
        ACRE_SEM70 = 1;
		vm_40mm_m381_he_mag = 0;
        vm_40mm_m583_flare_w_mag = 5;
        vm_40mm_m661_flare_g_mag = 3;
        vm_40mm_m662_flare_r_mag = 3;
        vm_40mm_m682_smoke_r_mag = 4;
        vm_40mm_m715_smoke_g_mag = 4;
        vm_40mm_m680_smoke_w_mag = 4;
    };

    class Binoculars : Binoculars
    {
        classname = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};