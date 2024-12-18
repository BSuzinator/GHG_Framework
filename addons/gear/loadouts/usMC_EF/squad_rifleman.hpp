/*======================================
	Loadout for Rifleman (usMC_EF)
======================================*/
class squad_rifleman : loadout_base
{
    
    
    class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "ef_arifle_mxar_coy";
		muzzle =  "ef_snds_mxar_coy" ;
        laser = "EF_acc_pointer_IR_coy";
        ammo = "EF_30Rnd_65x39_caseless_coy_mag";
		bipod = "";
        
        class Scopes : Scopes
        {
            red_dot = "optic_Aco";
            holo =  "optic_Holosight";
			rco = "optic_Hamr";
            
        };
    };
    
    class Uniform : Uniform
    {
        classname[] = { "EF_U_B_MarineComabtUniform_Wdl_2", "EF_U_B_MarineComabtUniform_Des_2" };
		ACRE_PRC343 = 1;
    };
    
    class Vest : Vest
    {
        classname =  "EF_V_AAV_Rifleman_Coy";
        // List of items
        EF_30Rnd_65x39_caseless_coy_mag = 8;
        SmokeShell = 2;
        HandGrenade = 2;
        ACE_EntrenchingTool = 1;
    };
    
    headgear[] = { "EF_H_MCH_FullCamo_Wdl", "EF_H_MCH_FullCamo_Des" };
    facewear = "G_Tactical_Clear";
};
