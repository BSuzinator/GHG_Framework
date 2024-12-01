/*======================================
	Loadout for Rifleman (csat_a3)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_Katiba_F";
        laser = "ACE_acc_pointer_green";
        ammo = "30Rnd_65x39_caseless_green";
        
        class Scopes : Scopes
        {
            red_dot = "optic_ACO_grn";
            holo = "optic_Holosight_blk_F";
            red_dot_magnified = "optic_Arco";
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "U_O_CombatUniform_ocamo", "U_O_CombatUniform_oucamo" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = {"V_HarnessO_brn", "V_HarnessO_gry"};
        // List of items
        30Rnd_65x39_caseless_green = 8;
        SmokeShell = 2;
        HandGrenade = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "H_HelmetO_ocamo", "H_HelmetO_oucamo" };
    facewear = "G_Combat";
};