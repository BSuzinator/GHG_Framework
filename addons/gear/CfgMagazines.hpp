class CfgMagazines
{
    class rhs_60Rnd_545X39_7N10_AK;
    class rhs_100Rnd_545x39mm : rhs_60Rnd_545X39_7N10_AK
    {
        count = 100;
        
        author = "GHG Team";
        
        descriptionShort = "Caliber: 5.45x39mm FMJ<br />Rounds: 100<br />Used in: RPK-74";
        displayName = "100rnd RPK-74 7N10";
        
        model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag";
        modelSpecial = "rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
        
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_ca.paa";
        
        class InventoryPlacements {};
        class Library
        {
            libTextDesc = "";
        };
    };
};

class CfgMagazineWells
{
    class CBA_545x39_RPK
    {
        GHG_Magazines[] = {"rhs_100Rnd_545x39mm"};
    };
};