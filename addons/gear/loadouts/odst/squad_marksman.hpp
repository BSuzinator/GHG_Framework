/*======================================
	Loadout for Squad Marksman (odst)
======================================*/
class squad_marksman : squad_rifleman
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "OPTRE_BR55";
        laser = "";
        ammo = "OPTRE_36Rnd_95x40_Mag_Tracer";
		bipod4 = "";
        
        class Scopes : Scopes
        {
            magnified = "optre_br55hb_scope";
        };
    };
    
    class Vest : Vest
    {
        // List of items
        OPTRE_60Rnd_5x23mm_Mag_tracer = 0;
        OPTRE_36Rnd_95x40_Mag_Tracer = 7;
    };

};