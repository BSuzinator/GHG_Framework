/*======================================
	Loadout for Rifleman (cbrn)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname[] = { "arifle_MX_Black_F", "arifle_MX_khk_F", "arifle_MX_Black_F" };
        laser = "ace_acc_pointer_green";
        ammo = "30Rnd_65x39_caseless_black_mag_Tracer";
        
        class Scopes : Scopes
        {
            red_dot = "";
            holo = "";
			alt_holo = "";
            red_dot_magnified = "";
            holo_magnified = "";
            holo_alt = "";
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "CBRN_Expansion_Yellow", "CBRN_Expansion_Olive", "CBRN_Expansion_Gendarmerie" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname[] = { "V_PlateCarrier2_blk", "V_PlateCarrier2_rgr", "V_PlateCarrier2_blk" };
        // List of items
        30Rnd_65x39_caseless_black_mag_Tracer = 8;
        SmokeShell = 2;
        HandGrenade = 2;
        ACE_EntrenchingTool = 1;
    };
    
	nvgs = "ACE_NVG_Gen1";
	
    headgear[] = { "lxWS_H_PASGT_goggles_black_F", "lxWS_H_PASGT_goggles_olive_F", "lxWS_H_PASGT_goggles_black_F" };
    facewear = "M40_Gas_mask_nbc_c2_d";
};