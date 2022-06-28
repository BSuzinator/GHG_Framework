class CfgWeapons
{   
    // Add anest rounds to mosin
    class vn_pistol;
    class vn_mk22 : vn_pistol {
        initSpeed = -1.0;
        ACE_barrelLength = 102;
        ACE_barrelTwist = 45.7;
        magazines[] = {
            "vn_mk22_mag",
            "ghg_14rnd_9x19_anest"
        };
    };
    
    class vn_hd : vn_pistol {
        initSpeed = -1.0;
        ACE_barrelLength = 171;
        ACE_barrelTwist = 77.7;
        magazines[] = {
            "vn_hd_mag",
            "ghg_10rnd_560x15_anest"
        };
    };
    
    class vn_howitzer_105mm_base;
    class vn_howitzer_105mm : vn_howitzer_105mm_base
    {
        magazines[] += {
            "ghg_cannon_m101_mag_beehive_x8"
        };
    };
};