class CfgWeapons
{
    class Rifle_Base_F;
    class rhs_weap_ak74m_Base_F : Rifle_Base_F
    {
        magazineWell[] = { CBA_545x39_AK };
    };
    class rhs_weap_an94_base: Rifle_Base_F
    {
        magazineWell[] = { CBA_545x39_AK };
    };
    
    class rhs_weap_ak74m;
    class rhs_weap_akm : rhs_weap_ak74m
    {
        // Remove RPK mags
        magazineWell[] = { CBA_762x39_AK };
    };
    
    class Rifle_Long_Base_F;
    class rhs_weap_rpk_base: Rifle_Long_Base_F
    {
        magazineWell[] = { CBA_545x39_AK, CBA_545x39_RPK };
    };
    
    class arifle_MX_Base_F;
    class rhs_weap_m4_Base : arifle_MX_Base_F
    {
        // Remove high capacity magazines
        magazineWell[] = {
            STANAG_556x45,
            //STANAG_556x45_Large
            CBA_556x45_STANAG
            //CBA_556x45_STANAG_L,
            //CBA_556x45_STANAG_XL,
            //CBA_556x45_STANAG_2D,
            //CBA_556x45_STANAG_2D_XL
        };
    };
    
    // M27 IAR needs big mags
    class rhs_weap_m4a1;
    class rhs_weap_m27iar: rhs_weap_m4a1
    {
        magazineWell[] = {
            STANAG_556x45,
            STANAG_556x45_Large,
            CBA_556x45_STANAG,
            CBA_556x45_STANAG_L,
            CBA_556x45_STANAG_XL,
            CBA_556x45_STANAG_2D,
            CBA_556x45_STANAG_2D_XL
        };
    };
    
    // Disable full auto on the M14
    class srifle_EBR_F;
    class rhs_weap_m14_base : srifle_EBR_F
    {
        modes[] = {
            "Single",
            //"FullAuto",
            "single_close_optics1",
            "single_medium_optics1",
            "single_far_optics1"
        };
    };
    
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
};