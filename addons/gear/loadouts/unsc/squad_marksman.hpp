/*======================================
	Loadout for Squad Marksman (unsc)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "OPTRE_M392_DMR";
        laser = "";
        ammo = "OPTRE_15Rnd_762x51_Mag_Tracer";
		bipod = "";
        
        class Scopes : Scopes
        {
            magnified = "optre_m392_scope";
        };
    };
    
    class Vest : Vest
    {
		classname[] = {"OPTRE_UNSC_M52A_Armor_Marksman_WDL", "OPTRE_UNSC_M52A_Armor_Marksman_SNO"};
        // List of items
        OPTRE_32Rnd_762x51_Mag_Tracer = 0;
        OPTRE_15Rnd_762x51_Mag_Tracer = 7;
    };

};