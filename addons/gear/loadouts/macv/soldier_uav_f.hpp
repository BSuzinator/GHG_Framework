/*======================================
	Loadout for FAC (macv)
======================================*/
class soldier_uav_f : soldier_tl_f
{
    
    
    class Backpack : Backpack
    {
        classname = "vn_b_pack_prc77_01";
        
        ACRE_PRC77 = 1;
		vn_40mm_m381_he_mag = 0;
        vn_40mm_m583_flare_w_mag = 5;
        vn_40mm_m661_flare_g_mag = 3;
        vn_40mm_m662_flare_r_mag = 3;
        vn_40mm_m682_smoke_r_mag = 4;
        vn_40mm_m715_smoke_g_mag = 4;
        vn_40mm_m680_smoke_w_mag = 4;
    };

    class Binoculars : Binoculars
    {
        classname = "Laserdesignator";
        ammo = "Laserbatteries";
    };
};