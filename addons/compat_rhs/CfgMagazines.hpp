#define RPK_100RND_MAG_COMMON \
        count = 100; \
        author = "GHG Team"; \
        model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag"; \
        modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd"; \
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M_ca.paa";

class CfgMagazines
{
	class rhs_45Rnd_545X39_7N10_AK;
    class rhs_100Rnd_545X39_7N10_RPK : rhs_45Rnd_545X39_7N10_AK
    {
        descriptionShort = "Caliber: 5.45x39mm AP<br />Rounds: 100<br />Used in: RPK-74";
        displayName = "100rnd RPK-74 7N10";
        
        RPK_100RND_MAG_COMMON
    };
    
    class rhs_45Rnd_545X39_7N22_AK;
    class rhs_100Rnd_545X39_7N22_RPK : rhs_45Rnd_545X39_7N22_AK
    {
        descriptionShort = "Caliber: 5.45x39mm AP<br />Rounds: 100<br />Used in: RPK-74";
        displayName = "100rnd RPK-74 7N22";
        
        RPK_100RND_MAG_COMMON
    };
    
    class rhs_45Rnd_545X39_7N6_AK;
    class rhs_100Rnd_545X39_7N6_RPK : rhs_45Rnd_545X39_7N6_AK
    {
        descriptionShort = "Caliber: 5.45x39mm FMJ<br />Rounds: 100<br />Used in: RPK-74";
        displayName = "100rnd RPK-74 7N6";
        
        RPK_100RND_MAG_COMMON
    };
    
    class rhs_45Rnd_545X39_7N6M_AK;
    class rhs_100Rnd_545X39_7N6M_RPK : rhs_45Rnd_545X39_7N6M_AK
    {
        descriptionShort = "Caliber: 5.45x39mm FMJ<br />Rounds: 100<br />Used in: RPK-74";
        displayName = "100rnd RPK-74 7N6M";
        
        RPK_100RND_MAG_COMMON
    };
    
    class rhs_45Rnd_545X39_7U1_AK;
    class rhs_100Rnd_545X39_7U1_RPK : rhs_45Rnd_545X39_7U1_AK
    {
        descriptionShort = "Caliber: 5.45x39mm Subsonic<br />Rounds: 100<br />Used in: RPK-74";
        displayName = "100rnd RPK-74 7U1 (Subsonic)";
        
        RPK_100RND_MAG_COMMON
    };
    
    class rhs_45Rnd_545X39_AK;
    class rhs_100Rnd_545X39_RPK : rhs_45Rnd_545X39_AK
    {
        descriptionShort = "Caliber: 5.45x39mm Tracers<br />Rounds: 100<br />Used in: RPK-74";
        displayName = "100rnd RPK-74 7N6";
        
        RPK_100RND_MAG_COMMON
    };
    
    class rhs_45Rnd_545X39_AK_Green;
    class rhs_100Rnd_545X39_RPK_Green : rhs_45Rnd_545X39_AK_Green
    {
        descriptionShort = "Caliber: 5.45x39mm FMJ<br />Rounds: 100<br />Used in: RPK-74";
        displayName = "100rnd RPK-74 7TRM (Tracer)";
        
        RPK_100RND_MAG_COMMON
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
	
	class rhs_mag_M229_7;
    class rhs_mag_M229_stun_7 : rhs_mag_M229_7 {
		ammo = ghg_ammo_Hydra_STUN;
        author = GHG Team;
        displayName = M229 Hydra (Stun x7);
        displayNameShort = STUN;
		descriptionShort = x7 17lb STUN Hydra;
        scope = 2;
    };
	class rhs_mag_M229_19;
    class rhs_mag_M229_stun_19 : rhs_mag_M229_19 {
		ammo = ghg_ammo_Hydra_STUN;
        author = GHG Team;
        displayName = M229 Hydra (Stun x19);
        displayNameShort = STUN;
		descriptionShort = x19 17lb STUN Hydra;
        scope = 2;
    };
};

class CfgMagazineWells
{ 
	class CBA_545x39_RPK
    {
        GHG_Magazines[] = {
            rhs_100Rnd_545x39_RPK,
            rhs_100Rnd_545x39_7N6_RPK,
            rhs_100Rnd_545x39_7N6M_RPK,
            rhs_100Rnd_545x39_7N10_RPK,
            rhs_100Rnd_545x39_7N22_RPK,
            rhs_100Rnd_545x39_RPK_Green,
            rhs_100Rnd_545x39_7U1_RPK
        };
    };
	class CBA_762x54R_Mosin
	{
		GHG_Magazines[] = {
			ghg_5rnd_762x54_m38_anest
		};
	}; 
};