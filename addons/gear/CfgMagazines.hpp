#define RPK_100RND_MAG_COMMON \
        count = 100; \
        author = "GHG Team"; \
        model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag"; \
        modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd"; \
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_ca.paa";

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
};