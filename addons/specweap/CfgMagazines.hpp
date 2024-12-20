class CfgMagazines
{
    class vn_mk22_mag;
    class ghg_14rnd_9x19_anest : vn_mk22_mag
    {
        author = GHG Team;
		ammo = ghg_ammo_9x19_anest;
		displayName = 14Rnd. Anesthetic Darts;
		displayNameShort = 14Rnd Anest.;
		descriptionShort = Caliber 9x19mm Anest.br Rounds 14br Used in Mk22 Mod 0 pistol;
        
        initSpeed = 300;
    };
    
    class vn_hd_mag;
    class ghg_10rnd_560x15_anest : vn_hd_mag
    {
        author = GHG Team;
		ammo = ghg_ammo_9x19_anest;
		displayName = 10Rnd. Anesthetic Darts;
		displayNameShort = 10Rnd Anest.;
		descriptionShort = Caliber 5.60x15mm Anest.br Rounds 10br Used in HD (S) pistol;
        
        initSpeed = 320;
    };
    
    class rhsgref_5Rnd_762x54_m38;
    class ghg_5rnd_762x54_m38_anest : rhsgref_5Rnd_762x54_m38
    {
        author = GHG Team;
		ammo = ghg_ammo_762x54_anest;
		displayName = 5rnd Anesthetic Darts;
		displayNameShort = 5rnd Anest.;
		descriptionShort = Caliber 7.62x54mm Anest.br Rounds 5br Used in Mosin Nagant M38;
        
        initSpeed = 500;
    };

};

class CfgMagazineWells
{   
     class CBA_762x54R_Mosin
	{
		GHG_Magazines[] = {
			ghg_5rnd_762x54_m38_anest
		};
	}; 
};