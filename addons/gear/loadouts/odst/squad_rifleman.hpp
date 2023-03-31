/*======================================
	Loadout for Rifleman (odst)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "OPTRE_M7";
        muzzle = "optre_m7_silencer";
		laser = "optre_m7_laser";
		ammo = "OPTRE_60Rnd_5x23mm_Mag_tracer";
    
        class Scopes : Scopes
        {
             red_dot : "optre_m7_sight";
        };
    };
    
    class Uniform : Uniform
    {
        classname =  "OPTRE_UNSC_ODST_Uniform";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "OPTRE_UNSC_M52D_Armor_Scout";
        // List of items
        OPTRE_60Rnd_5x23mm_Mag_tracer = 8;
        OPTRE_M2_Smoke = 2;
        OPTRE_M9_Frag = 2;
        ACE_EntrenchingTool = 1;
    };
	
    class Backpack : Backpack
    {
        classname = "OPTRE_ILCS_Rucksack_Black";
	};
	
    headgear = "OPTRE_UNSC_CH252D_Helmet";
};