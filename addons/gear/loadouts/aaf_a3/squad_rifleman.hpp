/*======================================
	Loadout for Rifleman (aaf_a3)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "arifle_Mk20_F";
        laser = "acc_pointer_IR";
        ammo = "30Rnd_556x45_Stanag";
        
        class Scopes : Scopes
        {
            red_dot = "optic_ACO_grn";
            holo = "optic_Holosight_blk_F";
            red_dot_magnified = "optic_MRCO";
        };
    };
    
    class Uniform : Uniform
    {
        classname = "U_I_CombatUniform";
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname = "V_PlateCarrierIA1_dgtl";
        // List of items
        30Rnd_556x45_Stanag = 8;
        SmokeShell = 2;
        HandGrenade = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear = "H_HelmetIA";
    facewear = "G_Lowprofile";
};