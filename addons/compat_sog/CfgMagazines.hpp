class CfgMagazines
{	
	class vn_mk22_mag;
    class ghg_14rnd_9x19_anest : vn_mk22_mag
    {
        author = "GHG Team";
		ammo = "ghg_ammo_9x19_anest";
		displayName = "14Rnd. Anesthetic Darts";
		displayNameShort = "14Rnd Anest.";
		descriptionShort = "Caliber 9x19mm Anest.br Rounds 14br Used in Mk22 Mod 0 pistol";
        
        initSpeed = 300;
    };
    
    class vn_hd_mag;
    class ghg_10rnd_560x15_anest : vn_hd_mag
    {
        author = "GHG Team";
		ammo = "ghg_ammo_9x19_anest";
		displayName = "10Rnd. Anesthetic Darts";
		displayNameShort = "10Rnd Anest.";
		descriptionShort = "Caliber 5.60x15mm Anest.br Rounds 10br Used in HD (S) pistol";
        
        initSpeed = 320;
    };
	
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