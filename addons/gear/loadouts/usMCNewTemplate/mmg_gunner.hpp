/*======================================
	Loadout for MMG Gunner (usMC)
======================================*/
class mmg_gunner : squad_rifle
{
    
	
	class Weapon_1 : Weapon_1 // Rifle
    {
        classname = "rhs_weap_m240b_elcan";
        ammo = "rhsusf_100Rnd_762x51";
        bipod = "rhsusf_acc_saw_bipod";
		class Scopes : Scopes
        {
            mg_optic = "rhsusf_acc_ELCAN";
        };
    };
	
	class Vest : Vest
    {
        classname = "rhsusf_spc_mg";
        // List of items
		rhs_mag_30Rnd_556x45_M855_Stanag = 0;
		rhsusf_100Rnd_762x51 = 3;
		ACE_EntrenchingTool = 0;
    };
	
	class Backpack : Backpack
    {
        classname = "rhsusf_assault_eagleaiii_coy";
        // List of items
        rhsusf_100Rnd_762x51 = 3;
    };
};