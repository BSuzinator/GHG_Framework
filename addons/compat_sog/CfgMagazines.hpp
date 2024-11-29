class CfgMagazines
{
	class vn_vmagazine_mg;
    class vn_m1919_v_250_mag : vn_vmagazine_mg {
        tracersEvery = 3; // MUST BE AN ODD NUMBER as this fixes an issue with the twin 30 cal MGs
    };
	
    class vn_cannon_105mm_mag_he_base;
    class ghg_cannon_m101_mag_beehive_x8 : vn_cannon_105mm_mag_he_base {
        ammo = "ghg_shell_105mm_m546_beehive_ammo";
        author = "GHG Team";
        displayName = "M546 105mm Beehive (8)";
        displayNameShort = "105mm Beehive";
        scope = 2;
    };
};

class CfgMagazineWells
{   
};