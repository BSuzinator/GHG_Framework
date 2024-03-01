/*======================================
	Loadout for Recon Gunner (unsc)
======================================*/
class rcn_gunner : loadout_base
{
    
    
    class Weapon_1 : Weapon_1
    {
        classname =  "OPTRE_SRS99C" ;
		muzzle = "";
		bipod = "";
        laser = "";
        ammo = "OPTRE_4Rnd_145x114_APFSDS_Mag";
        
        class Scopes : Scopes
        {
            sniper_optic = "optre_srs99c_scope";
        };
    };
    
	class Weapon_2 : Weapon_2 
	{ 
		classname = "OPTRE_M6G";
        laser = "";
        ammo = "OPTRE_8Rnd_127x40_Mag";
		
		class Scopes : Scopes
		{
			red_dot = "optre_m6g_scope";
		};
	};
	
    class Uniform : Uniform
    {
        classname[] = { "OPTRE_UNSC_Army_Uniform_OLI", "OPTRE_UNSC_Army_Uniform_SNO" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname [] = {"OPTRE_UNSC_M52A_Armor_Sniper_WDL", "OPTRE_UNSC_M52A_Armor_Sniper_SNO"} ;
        // List of items
        OPTRE_4Rnd_145x114_APFSDS_Mag = 4;
		OPTRE_8Rnd_127x40_Mag = 2;
        OPTRE_M2_Smoke = 2;
		ACE_RangeCard = 1;
    };
    
	headgear = "OPTRE_UNSC_CH252_Helmet3_WDL";
	facewear = "OPTRE_HUD_Glasses";
	
	class Binoculars : Binoculars
    {
        classname = "OPTRE_Smartfinder";

        class Scopes {};
    };
};