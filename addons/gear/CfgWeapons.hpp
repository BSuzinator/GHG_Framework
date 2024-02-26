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
    
    // Add flashlights to all SOG primary weapons
    class vn_rifle : Rifle_Base_F {
        class FlashLight {
            ambient[] = {9,7.5,6};
            color[] = {180,150,120};
            coneFadeCoef = 55;
            dayLight = 1;
            direction = "konec hlavne";
            flareMaxDistance = "100.0f";
            flareSize = 1.4;
            innerAngle = 20;
            intensity = 50;
            outerAngle = 120;
            position = "usti hlavne";
            scale[] = {0};
            size = 1;
            useFlare = 1;
            
            class Attenuation {
                constant = 0;
                hardLimitEnd = 30;
                hardLimitStart = 20;
                linear = 0;
                quadratic = 1;
                start = 0.5;
            };
        };
    };
    
    class vn_rifle762;
    class vn_m14 : vn_rifle762 {
        modes[] = {
            "Single",
//            "FullAuto",
            "AICQB",
            "AIClose",
            "AIMedium",
            "AIFar",
            "AIOpticmode1",
            "AIOpticmode2"
        };
    };
	//Add mags to L1A1
	class vn_l1a1_01 : vn_rifle762 {
		magazineWell[] = {"CBA_762x51_FAL"};
	};
	
	//Strip FFARs of extra firemodes
	class RocketPods;
	class rhs_weap_FFARLauncher : RocketPods {
		modes[] = {"Far_AI","Single","Burst"};
	};
	
};